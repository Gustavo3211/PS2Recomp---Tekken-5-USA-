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

// Function: sub_002DE1C0
// Address: 0x2de1c0 - 0x2de2f0
void sub_002DE1C0_0x2de1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DE1C0_0x2de1c0");
#endif

    switch (ctx->pc) {
        case 0x2de1f0u: goto label_2de1f0;
        case 0x2de238u: goto label_2de238;
        case 0x2de254u: goto label_2de254;
        case 0x2de26cu: goto label_2de26c;
        case 0x2de280u: goto label_2de280;
        case 0x2de290u: goto label_2de290;
        case 0x2de2b4u: goto label_2de2b4;
        default: break;
    }

    ctx->pc = 0x2de1c0u;

    // 0x2de1c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2de1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2de1c4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2de1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2de1c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2de1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2de1cc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2de1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2de1d0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2de1d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2de1d4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2de1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2de1d8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2de1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2de1dc: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2de1dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2de1e0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2de1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2de1e4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2de1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2de1e8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2de1e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de1ec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2de1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2de1f0:
    // 0x2de1f0: 0x0  nop
    ctx->pc = 0x2de1f0u;
    // NOP
    // 0x2de1f4: 0x0  nop
    ctx->pc = 0x2de1f4u;
    // NOP
    // 0x2de1f8: 0x0  nop
    ctx->pc = 0x2de1f8u;
    // NOP
    // 0x2de1fc: 0x0  nop
    ctx->pc = 0x2de1fcu;
    // NOP
    // 0x2de200: 0x0  nop
    ctx->pc = 0x2de200u;
    // NOP
    // 0x2de204: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2DE204u;
    {
        const bool branch_taken_0x2de204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2DE208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE204u;
        // 0x2de208: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de204) {
            ctx->pc = 0x2DE1F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2de1f0;
        }
    }
    ctx->pc = 0x2DE20Cu;
    // 0x2de20c: 0x3c02001e  lui         $v0, 0x1E
    ctx->pc = 0x2de20cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30 << 16));
    // 0x2de210: 0x24425ec0  addiu       $v0, $v0, 0x5EC0
    ctx->pc = 0x2de210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24256));
    // 0x2de214: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x2de214u;
    SET_GPR_S32(ctx, 20, (int32_t)FAST_READ32(0x1E5EC0u));
    // 0x2de218: 0x24550004  addiu       $s5, $v0, 0x4
    ctx->pc = 0x2de218u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2de21c: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x2de21cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x2de220: 0x3c070048  lui         $a3, 0x48
    ctx->pc = 0x2de220u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)72 << 16));
    // 0x2de224: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2de224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de228: 0x24a549f0  addiu       $a1, $a1, 0x49F0
    ctx->pc = 0x2de228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18928));
    // 0x2de22c: 0x24e7f888  addiu       $a3, $a3, -0x778
    ctx->pc = 0x2de22cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294965384));
    // 0x2de230: 0xc0b78bc  jal         func_2DE2F0
    ctx->pc = 0x2DE230u;
    SET_GPR_U32(ctx, 31, 0x2DE238u);
    ctx->pc = 0x2DE234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE230u;
    // 0x2de234: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE2F0u, 0x2DE230u, 0x2DE238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE238u;
label_2de238:
    // 0x2de238: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x2de238u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x2de23c: 0x3c070015  lui         $a3, 0x15
    ctx->pc = 0x2de23cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21 << 16));
    // 0x2de240: 0x26640014  addiu       $a0, $s3, 0x14
    ctx->pc = 0x2de240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
    // 0x2de244: 0x24a549f8  addiu       $a1, $a1, 0x49F8
    ctx->pc = 0x2de244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18936));
    // 0x2de248: 0x24e74a00  addiu       $a3, $a3, 0x4A00
    ctx->pc = 0x2de248u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 18944));
    // 0x2de24c: 0xc0b78bc  jal         func_2DE2F0
    ctx->pc = 0x2DE24Cu;
    SET_GPR_U32(ctx, 31, 0x2DE254u);
    ctx->pc = 0x2DE250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE24Cu;
    // 0x2de250: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE2F0u, 0x2DE24Cu, 0x2DE254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE254u;
label_2de254:
    // 0x2de254: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x2de254u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x2de258: 0x24a54a08  addiu       $a1, $a1, 0x4A08
    ctx->pc = 0x2de258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18952));
    // 0x2de25c: 0x26640028  addiu       $a0, $s3, 0x28
    ctx->pc = 0x2de25cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 40));
    // 0x2de260: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2de260u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de264: 0xc0b78bc  jal         func_2DE2F0
    ctx->pc = 0x2DE264u;
    SET_GPR_U32(ctx, 31, 0x2DE26Cu);
    ctx->pc = 0x2DE268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE264u;
    // 0x2de268: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE2F0u, 0x2DE264u, 0x2DE26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE26Cu;
label_2de26c:
    // 0x2de26c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2de26cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2de270: 0x254102a  slt         $v0, $s2, $s4
    ctx->pc = 0x2de270u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x2de274: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2DE274u;
    {
        const bool branch_taken_0x2de274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE274u;
        // 0x2de278: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de274) {
            ctx->pc = 0x2DE2D0u;
            goto label_2de2d0;
        }
    }
    ctx->pc = 0x2DE27Cu;
    // 0x2de27c: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x2de27cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_2de280:
    // 0x2de280: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2de280u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de284: 0x558821  addu        $s1, $v0, $s5
    ctx->pc = 0x2de284u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x2de288: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x2de288u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2de28c: 0x0  nop
    ctx->pc = 0x2de28cu;
    // NOP
label_2de290:
    // 0x2de290: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2DE290u;
    {
        const bool branch_taken_0x2de290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de290) {
            ctx->pc = 0x2DE294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DE290u;
            // 0x2de294: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DE2C0u;
            goto label_2de2c0;
        }
    }
    ctx->pc = 0x2DE298u;
    // 0x2de298: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x2de298u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2de29c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2de29cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2de2a0: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x2de2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2de2a4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2de2a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2de2a8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2de2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2de2ac: 0xc0b78c4  jal         func_2DE310
    ctx->pc = 0x2DE2ACu;
    SET_GPR_U32(ctx, 31, 0x2DE2B4u);
    ctx->pc = 0x2DE2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE2ACu;
    // 0x2de2b0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE310u, 0x2DE2ACu, 0x2DE2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE2B4u;
label_2de2b4:
    // 0x2de2b4: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2DE2B4u;
    {
        const bool branch_taken_0x2de2b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE2B4u;
        // 0x2de2b8: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de2b4) {
            ctx->pc = 0x2DE290u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2de290;
        }
    }
    ctx->pc = 0x2DE2BCu;
    // 0x2de2bc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2de2bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2de2c0:
    // 0x2de2c0: 0x254102a  slt         $v0, $s2, $s4
    ctx->pc = 0x2de2c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x2de2c4: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2DE2C4u;
    {
        const bool branch_taken_0x2de2c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DE2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE2C4u;
        // 0x2de2c8: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de2c4) {
            ctx->pc = 0x2DE280u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2de280;
        }
    }
    ctx->pc = 0x2DE2CCu;
    // 0x2de2cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2de2ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2de2d0:
    // 0x2de2d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2de2d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2de2d4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2de2d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2de2d8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2de2d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2de2dc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2de2dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2de2e0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2de2e0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2de2e4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2de2e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2de2e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2DE2E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DE2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE2E8u;
        // 0x2de2ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE2E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DE2F0u;
}
