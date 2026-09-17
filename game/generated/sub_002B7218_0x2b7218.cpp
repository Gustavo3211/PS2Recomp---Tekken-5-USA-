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

// Function: sub_002B7218
// Address: 0x2b7218 - 0x2b7330
void sub_002B7218_0x2b7218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B7218_0x2b7218");
#endif

    switch (ctx->pc) {
        case 0x2b7230u: goto label_2b7230;
        case 0x2b7268u: goto label_2b7268;
        case 0x2b7280u: goto label_2b7280;
        case 0x2b72d0u: goto label_2b72d0;
        default: break;
    }

    ctx->pc = 0x2b7218u;

    // 0x2b7218: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x2b7218u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b721c: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x2b721cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7220: 0x10c0000c  beqz        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x2B7220u;
    {
        const bool branch_taken_0x2b7220 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7220u;
        // 0x2b7224: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7220) {
            ctx->pc = 0x2B7254u;
            goto label_2b7254;
        }
    }
    ctx->pc = 0x2B7228u;
    // 0x2b7228: 0x1271021  addu        $v0, $t1, $a3
    ctx->pc = 0x2b7228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x2b722c: 0x0  nop
    ctx->pc = 0x2b722cu;
    // NOP
label_2b7230:
    // 0x2b7230: 0x1071821  addu        $v1, $t0, $a3
    ctx->pc = 0x2b7230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x2b7234: 0x80450000  lb          $a1, 0x0($v0)
    ctx->pc = 0x2b7234u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b7238: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b7238u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b723c: 0x80640000  lb          $a0, 0x0($v1)
    ctx->pc = 0x2b723cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b7240: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2b7240u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2b7244: 0x14a40004  bne         $a1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B7244u;
    {
        const bool branch_taken_0x2b7244 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x2B7248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7244u;
        // 0x2b7248: 0xe6182b  sltu        $v1, $a3, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7244) {
            ctx->pc = 0x2B7258u;
            goto label_2b7258;
        }
    }
    ctx->pc = 0x2B724Cu;
    // 0x2b724c: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2B724Cu;
    {
        const bool branch_taken_0x2b724c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b724c) {
            ctx->pc = 0x2B7250u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B724Cu;
            // 0x2b7250: 0x1271021  addu        $v0, $t1, $a3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B7230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b7230;
        }
    }
    ctx->pc = 0x2B7254u;
label_2b7254:
    // 0x2b7254: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b7254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b7258:
    // 0x2b7258: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7258u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7260u;
    // 0x2b7260: 0x10c70003  beq         $a2, $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B7260u;
    {
        const bool branch_taken_0x2b7260 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x2B7264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7260u;
        // 0x2b7264: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7260) {
            ctx->pc = 0x2B7270u;
            goto label_2b7270;
        }
    }
    ctx->pc = 0x2B7268u;
label_2b7268:
    // 0x2b7268: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B726Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7268u;
        // 0x2b726c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7270u;
label_2b7270:
    // 0x2b7270: 0x10c0000c  beqz        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x2B7270u;
    {
        const bool branch_taken_0x2b7270 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7270u;
        // 0x2b7274: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7270) {
            ctx->pc = 0x2B72A4u;
            goto label_2b72a4;
        }
    }
    ctx->pc = 0x2B7278u;
    // 0x2b7278: 0x1071021  addu        $v0, $t0, $a3
    ctx->pc = 0x2b7278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x2b727c: 0x0  nop
    ctx->pc = 0x2b727cu;
    // NOP
label_2b7280:
    // 0x2b7280: 0xa71821  addu        $v1, $a1, $a3
    ctx->pc = 0x2b7280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x2b7284: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x2b7284u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b7288: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2b7288u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2b728c: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x2b728cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b7290: 0x1482fff5  bne         $a0, $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2B7290u;
    {
        const bool branch_taken_0x2b7290 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B7294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7290u;
        // 0x2b7294: 0xe6182b  sltu        $v1, $a3, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7290) {
            ctx->pc = 0x2B7268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b7268;
        }
    }
    ctx->pc = 0x2B7298u;
    // 0x2b7298: 0x0  nop
    ctx->pc = 0x2b7298u;
    // NOP
    // 0x2b729c: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2B729Cu;
    {
        const bool branch_taken_0x2b729c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b729c) {
            ctx->pc = 0x2B72A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B729Cu;
            // 0x2b72a0: 0x1071021  addu        $v0, $t0, $a3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B7280u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b7280;
        }
    }
    ctx->pc = 0x2B72A4u;
label_2b72a4:
    // 0x2b72a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B72A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B72A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B72A4u;
        // 0x2b72a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B72A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B72ACu;
    // 0x2b72ac: 0x0  nop
    ctx->pc = 0x2b72acu;
    // NOP
    // 0x2b72b0: 0x84600  sll         $t0, $t0, 24
    ctx->pc = 0x2b72b0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 24));
    // 0x2b72b4: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x2b72b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b72b8: 0x84603  sra         $t0, $t0, 24
    ctx->pc = 0x2b72b8u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 24));
    // 0x2b72bc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2b72bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b72c0: 0x10e0000c  beqz        $a3, . + 4 + (0xC << 2)
    ctx->pc = 0x2B72C0u;
    {
        const bool branch_taken_0x2b72c0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B72C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B72C0u;
        // 0x2b72c4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b72c0) {
            ctx->pc = 0x2B72F4u;
            goto label_2b72f4;
        }
    }
    ctx->pc = 0x2B72C8u;
    // 0x2b72c8: 0xc91021  addu        $v0, $a2, $t1
    ctx->pc = 0x2b72c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x2b72cc: 0x0  nop
    ctx->pc = 0x2b72ccu;
    // NOP
label_2b72d0:
    // 0x2b72d0: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x2b72d0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b72d4: 0x54680004  bnel        $v1, $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B72D4u;
    {
        const bool branch_taken_0x2b72d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        if (branch_taken_0x2b72d4) {
            ctx->pc = 0x2B72D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B72D4u;
            // 0x2b72d8: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B72E8u;
            goto label_2b72e8;
        }
    }
    ctx->pc = 0x2B72DCu;
    // 0x2b72dc: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x2b72dcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x2b72e0: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x2b72e0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b72e4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2b72e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_2b72e8:
    // 0x2b72e8: 0x127102b  sltu        $v0, $t1, $a3
    ctx->pc = 0x2b72e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2b72ec: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2B72ECu;
    {
        const bool branch_taken_0x2b72ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B72F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B72ECu;
        // 0x2b72f0: 0xc91021  addu        $v0, $a2, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b72ec) {
            ctx->pc = 0x2B72D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b72d0;
        }
    }
    ctx->pc = 0x2B72F4u;
label_2b72f4:
    // 0x2b72f4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2b72f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b72f8: 0x15420005  bne         $t2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B72F8u;
    {
        const bool branch_taken_0x2b72f8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B72FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B72F8u;
        // 0x2b72fc: 0xea1823  subu        $v1, $a3, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b72f8) {
            ctx->pc = 0x2B7310u;
            goto label_2b7310;
        }
    }
    ctx->pc = 0x2B7300u;
    // 0x2b7300: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x2b7300u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x2b7304: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B7304u;
    {
        const bool branch_taken_0x2b7304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7304u;
        // 0x2b7308: 0xaca70000  sw          $a3, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7304) {
            ctx->pc = 0x2B7324u;
            goto label_2b7324;
        }
    }
    ctx->pc = 0x2B730Cu;
    // 0x2b730c: 0x0  nop
    ctx->pc = 0x2b730cu;
    // NOP
label_2b7310:
    // 0x2b7310: 0xca1021  addu        $v0, $a2, $t2
    ctx->pc = 0x2b7310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x2b7314: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b7314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2b7318: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2b7318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2b731c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2b731cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2b7320: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2b7320u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_2b7324:
    // 0x2b7324: 0x39620001  xori        $v0, $t3, 0x1
    ctx->pc = 0x2b7324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) ^ (uint64_t)(uint16_t)1);
    // 0x2b7328: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B732Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7328u;
        // 0x2b732c: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7330u;
}
