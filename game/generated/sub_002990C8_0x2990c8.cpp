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

// Function: sub_002990C8
// Address: 0x2990c8 - 0x2991b8
void sub_002990C8_0x2990c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002990C8_0x2990c8");
#endif

    switch (ctx->pc) {
        case 0x2990e8u: goto label_2990e8;
        case 0x2990f8u: goto label_2990f8;
        case 0x299120u: goto label_299120;
        case 0x299178u: goto label_299178;
        case 0x299190u: goto label_299190;
        default: break;
    }

    ctx->pc = 0x2990c8u;

    // 0x2990c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2990c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2990cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2990ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2990d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2990d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2990d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2990d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2990d8: 0x1200001b  beqz        $s0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2990D8u;
    {
        const bool branch_taken_0x2990d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2990DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2990D8u;
        // 0x2990dc: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2990d8) {
            ctx->pc = 0x299148u;
            goto label_299148;
        }
    }
    ctx->pc = 0x2990E0u;
    // 0x2990e0: 0xc04a4d1  jal         func_129344
    ctx->pc = 0x2990E0u;
    SET_GPR_U32(ctx, 31, 0x2990E8u);
    ctx->pc = 0x129344u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129344u, 0x2990E0u, 0x2990E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2990E8u;
label_2990e8:
    // 0x2990e8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2990E8u;
    {
        const bool branch_taken_0x2990e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2990e8) {
            ctx->pc = 0x2990ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2990E8u;
            // 0x2990ec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x299100u;
            goto label_299100;
        }
    }
    ctx->pc = 0x2990F0u;
    // 0x2990f0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2990F0u;
    {
        const bool branch_taken_0x2990f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2990F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2990F0u;
        // 0x2990f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2990f0) {
            ctx->pc = 0x299148u;
            goto label_299148;
        }
    }
    ctx->pc = 0x2990F8u;
label_2990f8:
    // 0x2990f8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2990F8u;
    {
        const bool branch_taken_0x2990f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2990FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2990F8u;
        // 0x2990fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2990f8) {
            ctx->pc = 0x299148u;
            goto label_299148;
        }
    }
    ctx->pc = 0x299100u;
label_299100:
    // 0x299100: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x299100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x299104: 0x28a20015  slti        $v0, $a1, 0x15
    ctx->pc = 0x299104u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x299108: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x299108u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x29910c: 0x18a0000d  blez        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x29910Cu;
    {
        const bool branch_taken_0x29910c = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x299110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29910Cu;
        // 0x299110: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29910c) {
            ctx->pc = 0x299144u;
            goto label_299144;
        }
    }
    ctx->pc = 0x299114u;
    // 0x299114: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x299114u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x299118: 0x2041021  addu        $v0, $s0, $a0
    ctx->pc = 0x299118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x29911c: 0x0  nop
    ctx->pc = 0x29911cu;
    // NOP
label_299120:
    // 0x299120: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x299120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x299124: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x299124u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x299128: 0x1466fff3  bne         $v1, $a2, . + 4 + (-0xD << 2)
    ctx->pc = 0x299128u;
    {
        const bool branch_taken_0x299128 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x29912Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299128u;
        // 0x29912c: 0x85102a  slt         $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x299128) {
            ctx->pc = 0x2990F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2990f8;
        }
    }
    ctx->pc = 0x299130u;
    // 0x299130: 0x0  nop
    ctx->pc = 0x299130u;
    // NOP
    // 0x299134: 0x0  nop
    ctx->pc = 0x299134u;
    // NOP
    // 0x299138: 0x0  nop
    ctx->pc = 0x299138u;
    // NOP
    // 0x29913c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x29913Cu;
    {
        const bool branch_taken_0x29913c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x299140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29913Cu;
        // 0x299140: 0x2041021  addu        $v0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29913c) {
            ctx->pc = 0x299120u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_299120;
        }
    }
    ctx->pc = 0x299144u;
label_299144:
    // 0x299144: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x299144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_299148:
    // 0x299148: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x299148u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29914c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x29914cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x299150: 0x3e00008  jr          $ra
    ctx->pc = 0x299150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299150u;
        // 0x299154: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299150u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299158u;
    // 0x299158: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x299158u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29915c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29915Cu;
    {
        const bool branch_taken_0x29915c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x299160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29915Cu;
        // 0x299160: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29915c) {
            ctx->pc = 0x299170u;
            goto label_299170;
        }
    }
    ctx->pc = 0x299164u;
    // 0x299164: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x299164u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x299168: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x299168u;
    {
        const bool branch_taken_0x299168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29916Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299168u;
        // 0x29916c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299168) {
            ctx->pc = 0x299180u;
            goto label_299180;
        }
    }
    ctx->pc = 0x299170u;
label_299170:
    // 0x299170: 0x3e00008  jr          $ra
    ctx->pc = 0x299170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299178u;
label_299178:
    // 0x299178: 0x3e00008  jr          $ra
    ctx->pc = 0x299178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29917Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299178u;
        // 0x29917c: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299180u;
label_299180:
    // 0x299180: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x299180u;
    {
        const bool branch_taken_0x299180 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x299184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299180u;
        // 0x299184: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299180) {
            ctx->pc = 0x2991B4u;
            goto label_2991b4;
        }
    }
    ctx->pc = 0x299188u;
    // 0x299188: 0x24093000  addiu       $t1, $zero, 0x3000
    ctx->pc = 0x299188u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 12288));
    // 0x29918c: 0x0  nop
    ctx->pc = 0x29918cu;
    // NOP
label_299190:
    // 0x299190: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x299190u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x299194: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x299194u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x299198: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x299198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x29919c: 0xe5302b  sltu        $a2, $a3, $a1
    ctx->pc = 0x29919cu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2991a0: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x2991a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2991a4: 0x1060fff4  beqz        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x2991A4u;
    {
        const bool branch_taken_0x2991a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2991A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2991A4u;
        // 0x2991a8: 0x691026  xor         $v0, $v1, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2991a4) {
            ctx->pc = 0x299178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_299178;
        }
    }
    ctx->pc = 0x2991ACu;
    // 0x2991ac: 0x14c0fff8  bnez        $a2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2991ACu;
    {
        const bool branch_taken_0x2991ac = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2991B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2991ACu;
        // 0x2991b0: 0x2400b  movn        $t0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2991ac) {
            ctx->pc = 0x299190u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_299190;
        }
    }
    ctx->pc = 0x2991B4u;
label_2991b4:
    // 0x2991b4: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x2991b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2991b8u;
}
