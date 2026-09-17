#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001128F0
// Address: 0x1128f0 - 0x112998
void sub_001128F0_0x1128f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001128F0_0x1128f0");
#endif

    switch (ctx->pc) {
        case 0x112908u: goto label_112908;
        case 0x112920u: goto label_112920;
        case 0x112964u: goto label_112964;
        case 0x112980u: goto label_112980;
        default: break;
    }

    ctx->pc = 0x1128f0u;

    // 0x1128f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1128f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1128f4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1128f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1128f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1128f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1128fc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1128fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x112900: 0xc04626a  jal         func_1189A8
    ctx->pc = 0x112900u;
    SET_GPR_U32(ctx, 31, 0x112908u);
    ctx->pc = 0x112904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112900u;
    // 0x112904: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1189A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189A8u, 0x112900u, 0x112908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112908u;
label_112908:
    // 0x112908: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x112908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x11290c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x11290cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112910: 0x18800019  blez        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x112910u;
    {
        const bool branch_taken_0x112910 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x112914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112910u;
        // 0x112914: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112910) {
            ctx->pc = 0x112978u;
            goto label_112978;
        }
    }
    ctx->pc = 0x112918u;
    // 0x112918: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x112918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11291c: 0x0  nop
    ctx->pc = 0x11291cu;
    // NOP
label_112920:
    // 0x112920: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x112920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x112924: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x112924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x112928: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x112928u;
    {
        const bool branch_taken_0x112928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x112928) {
            ctx->pc = 0x11292Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x112928u;
            // 0x11292c: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11296Cu;
            goto label_11296c;
        }
    }
    ctx->pc = 0x112930u;
    // 0x112930: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x112930u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x112934: 0x34420005  ori         $v0, $v0, 0x5
    ctx->pc = 0x112934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5);
    // 0x112938: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x112938u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x11293c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x11293cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x112940: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x112940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x112944: 0x14650004  bne         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x112944u;
    {
        const bool branch_taken_0x112944 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x112948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112944u;
        // 0x112948: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112944) {
            ctx->pc = 0x112958u;
            goto label_112958;
        }
    }
    ctx->pc = 0x11294Cu;
    // 0x11294c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x11294cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x112950: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x112950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x112954: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x112954u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_112958:
    // 0x112958: 0xae100014  sw          $s0, 0x14($s0)
    ctx->pc = 0x112958u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 16));
    // 0x11295c: 0xc04627e  jal         func_1189F8
    ctx->pc = 0x11295Cu;
    SET_GPR_U32(ctx, 31, 0x112964u);
    ctx->pc = 0x112960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11295Cu;
    // 0x112960: 0xae030018  sw          $v1, 0x18($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1189F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189F8u, 0x11295Cu, 0x112964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112964u;
label_112964:
    // 0x112964: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x112964u;
    {
        const bool branch_taken_0x112964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112964u;
        // 0x112968: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112964) {
            ctx->pc = 0x112984u;
            goto label_112984;
        }
    }
    ctx->pc = 0x11296Cu;
label_11296c:
    // 0x11296c: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x11296cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x112970: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x112970u;
    {
        const bool branch_taken_0x112970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x112974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112970u;
        // 0x112974: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112970) {
            ctx->pc = 0x112920u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_112920;
        }
    }
    ctx->pc = 0x112978u;
label_112978:
    // 0x112978: 0xc04627e  jal         func_1189F8
    ctx->pc = 0x112978u;
    SET_GPR_U32(ctx, 31, 0x112980u);
    ctx->pc = 0x1189F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189F8u, 0x112978u, 0x112980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112980u;
label_112980:
    // 0x112980: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x112980u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_112984:
    // 0x112984: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x112984u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x112988: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x112988u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11298c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11298cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x112990: 0x3e00008  jr          $ra
    ctx->pc = 0x112990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112990u;
        // 0x112994: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112990u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x112998u;
}
