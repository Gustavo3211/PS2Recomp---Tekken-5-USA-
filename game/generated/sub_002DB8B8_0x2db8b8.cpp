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

// Function: sub_002DB8B8
// Address: 0x2db8b8 - 0x2db960
void sub_002DB8B8_0x2db8b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DB8B8_0x2db8b8");
#endif

    switch (ctx->pc) {
        case 0x2db8d8u: goto label_2db8d8;
        case 0x2db8f0u: goto label_2db8f0;
        case 0x2db91cu: goto label_2db91c;
        default: break;
    }

    ctx->pc = 0x2db8b8u;

    // 0x2db8b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2db8b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2db8bc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2db8bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2db8c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2db8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2db8c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2db8c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db8c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2db8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2db8cc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2db8ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db8d0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2db8d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2db8d4: 0x2412005f  addiu       $s2, $zero, 0x5F
    ctx->pc = 0x2db8d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
label_2db8d8:
    // 0x2db8d8: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x2db8d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2db8dc: 0x1052000d  beq         $v0, $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x2DB8DCu;
    {
        const bool branch_taken_0x2db8dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x2DB8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB8DCu;
        // 0x2db8e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db8dc) {
            ctx->pc = 0x2DB914u;
            goto label_2db914;
        }
    }
    ctx->pc = 0x2DB8E4u;
    // 0x2db8e4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2DB8E4u;
    {
        const bool branch_taken_0x2db8e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB8E4u;
        // 0x2db8e8: 0x2403005f  addiu       $v1, $zero, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db8e4) {
            ctx->pc = 0x2DB914u;
            goto label_2db914;
        }
    }
    ctx->pc = 0x2DB8ECu;
    // 0x2db8ec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2db8ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2db8f0:
    // 0x2db8f0: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x2db8f0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2db8f4: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DB8F4u;
    {
        const bool branch_taken_0x2db8f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2DB8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB8F4u;
        // 0x2db8f8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db8f4) {
            ctx->pc = 0x2DB914u;
            goto label_2db914;
        }
    }
    ctx->pc = 0x2DB8FCu;
    // 0x2db8fc: 0x0  nop
    ctx->pc = 0x2db8fcu;
    // NOP
    // 0x2db900: 0x0  nop
    ctx->pc = 0x2db900u;
    // NOP
    // 0x2db904: 0x0  nop
    ctx->pc = 0x2db904u;
    // NOP
    // 0x2db908: 0x0  nop
    ctx->pc = 0x2db908u;
    // NOP
    // 0x2db90c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2DB90Cu;
    {
        const bool branch_taken_0x2db90c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2db90c) {
            ctx->pc = 0x2DB910u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DB90Cu;
            // 0x2db910: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DB8F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2db8f0;
        }
    }
    ctx->pc = 0x2DB914u;
label_2db914:
    // 0x2db914: 0xc04a100  jal         func_128400
    ctx->pc = 0x2DB914u;
    SET_GPR_U32(ctx, 31, 0x2DB91Cu);
    ctx->pc = 0x2DB918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB914u;
    // 0x2db918: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128400u, 0x2DB914u, 0x2DB91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB91Cu;
label_2db91c:
    // 0x2db91c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DB91Cu;
    {
        const bool branch_taken_0x2db91c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2db91c) {
            ctx->pc = 0x2DB920u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DB91Cu;
            // 0x2db920: 0x82020000  lb          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DB930u;
            goto label_2db930;
        }
    }
    ctx->pc = 0x2DB924u;
    // 0x2db924: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2DB924u;
    {
        const bool branch_taken_0x2db924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB924u;
        // 0x2db928: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db924) {
            ctx->pc = 0x2DB944u;
            goto label_2db944;
        }
    }
    ctx->pc = 0x2DB92Cu;
    // 0x2db92c: 0x0  nop
    ctx->pc = 0x2db92cu;
    // NOP
label_2db930:
    // 0x2db930: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DB930u;
    {
        const bool branch_taken_0x2db930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB930u;
        // 0x2db934: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db930) {
            ctx->pc = 0x2DB940u;
            goto label_2db940;
        }
    }
    ctx->pc = 0x2DB938u;
    // 0x2db938: 0x1000ffe7  b           . + 4 + (-0x19 << 2)
    ctx->pc = 0x2DB938u;
    {
        const bool branch_taken_0x2db938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB938u;
        // 0x2db93c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db938) {
            ctx->pc = 0x2DB8D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2db8d8;
        }
    }
    ctx->pc = 0x2DB940u;
label_2db940:
    // 0x2db940: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2db940u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2db944:
    // 0x2db944: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2db944u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2db948: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2db948u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2db94c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2db94cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2db950: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2db950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2db954: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB954u;
        // 0x2db958: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DB954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DB95Cu;
    // 0x2db95c: 0x0  nop
    ctx->pc = 0x2db95cu;
    // NOP
    ctx->pc = 0x2db960u;
}
