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

// Function: sub_00258FA0
// Address: 0x258fa0 - 0x259190
void sub_00258FA0_0x258fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00258FA0_0x258fa0");
#endif

    switch (ctx->pc) {
        case 0x259050u: goto label_259050;
        case 0x259060u: goto label_259060;
        case 0x2590e8u: goto label_2590e8;
        default: break;
    }

    ctx->pc = 0x258fa0u;

    // 0x258fa0: 0x84a2003e  lh          $v0, 0x3E($a1)
    ctx->pc = 0x258fa0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 62)));
    // 0x258fa4: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x258fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
    // 0x258fa8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x258FA8u;
    {
        const bool branch_taken_0x258fa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x258FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258FA8u;
        // 0x258fac: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258fa8) {
            ctx->pc = 0x258FB8u;
            goto label_258fb8;
        }
    }
    ctx->pc = 0x258FB0u;
    // 0x258fb0: 0x3e00008  jr          $ra
    ctx->pc = 0x258FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x258FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258FB0u;
        // 0x258fb4: 0xad0005b0  sw          $zero, 0x5B0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 1456), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258FB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x258FB8u;
label_258fb8:
    // 0x258fb8: 0x84a50042  lh          $a1, 0x42($a1)
    ctx->pc = 0x258fb8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 66)));
    // 0x258fbc: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x258fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x258fc0: 0x10a20019  beq         $a1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x258FC0u;
    {
        const bool branch_taken_0x258fc0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x258FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258FC0u;
        // 0x258fc4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258fc0) {
            ctx->pc = 0x259028u;
            goto label_259028;
        }
    }
    ctx->pc = 0x258FC8u;
    // 0x258fc8: 0x28a2002e  slti        $v0, $a1, 0x2E
    ctx->pc = 0x258fc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)46) ? 1 : 0);
    // 0x258fcc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x258FCCu;
    {
        const bool branch_taken_0x258fcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x258FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258FCCu;
        // 0x258fd0: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258fcc) {
            ctx->pc = 0x258FF0u;
            goto label_258ff0;
        }
    }
    ctx->pc = 0x258FD4u;
    // 0x258fd4: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x258fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x258fd8: 0x10a20009  beq         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x258FD8u;
    {
        const bool branch_taken_0x258fd8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x258FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258FD8u;
        // 0x258fdc: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258fd8) {
            ctx->pc = 0x259000u;
            goto label_259000;
        }
    }
    ctx->pc = 0x258FE0u;
    // 0x258fe0: 0x10a2000d  beq         $a1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x258FE0u;
    {
        const bool branch_taken_0x258fe0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x258FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258FE0u;
        // 0x258fe4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258fe0) {
            ctx->pc = 0x259018u;
            goto label_259018;
        }
    }
    ctx->pc = 0x258FE8u;
    // 0x258fe8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x258FE8u;
    {
        const bool branch_taken_0x258fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258FE8u;
        // 0x258fec: 0xad000008  sw          $zero, 0x8($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258fe8) {
            ctx->pc = 0x259040u;
            goto label_259040;
        }
    }
    ctx->pc = 0x258FF0u;
label_258ff0:
    // 0x258ff0: 0x10a2000f  beq         $a1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x258FF0u;
    {
        const bool branch_taken_0x258ff0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x258FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258FF0u;
        // 0x258ff4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258ff0) {
            ctx->pc = 0x259030u;
            goto label_259030;
        }
    }
    ctx->pc = 0x258FF8u;
    // 0x258ff8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x258FF8u;
    {
        const bool branch_taken_0x258ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258FF8u;
        // 0x258ffc: 0xad000008  sw          $zero, 0x8($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258ff8) {
            ctx->pc = 0x259040u;
            goto label_259040;
        }
    }
    ctx->pc = 0x259000u;
label_259000:
    // 0x259000: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x259000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x259004: 0xad000008  sw          $zero, 0x8($t0)
    ctx->pc = 0x259004u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 0));
    // 0x259008: 0xad0205b4  sw          $v0, 0x5B4($t0)
    ctx->pc = 0x259008u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1460), GPR_U32(ctx, 2));
    // 0x25900c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x25900Cu;
    {
        const bool branch_taken_0x25900c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25900Cu;
        // 0x259010: 0xad0205b8  sw          $v0, 0x5B8($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 1464), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25900c) {
            ctx->pc = 0x259040u;
            goto label_259040;
        }
    }
    ctx->pc = 0x259014u;
    // 0x259014: 0x0  nop
    ctx->pc = 0x259014u;
    // NOP
label_259018:
    // 0x259018: 0xad0005b4  sw          $zero, 0x5B4($t0)
    ctx->pc = 0x259018u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1460), GPR_U32(ctx, 0));
    // 0x25901c: 0xad0205b8  sw          $v0, 0x5B8($t0)
    ctx->pc = 0x25901cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1464), GPR_U32(ctx, 2));
    // 0x259020: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x259020u;
    {
        const bool branch_taken_0x259020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259020u;
        // 0x259024: 0xad020008  sw          $v0, 0x8($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259020) {
            ctx->pc = 0x259040u;
            goto label_259040;
        }
    }
    ctx->pc = 0x259028u;
label_259028:
    // 0x259028: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x259028u;
    {
        const bool branch_taken_0x259028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25902Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259028u;
        // 0x25902c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259028) {
            ctx->pc = 0x259034u;
            goto label_259034;
        }
    }
    ctx->pc = 0x259030u;
label_259030:
    // 0x259030: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x259030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_259034:
    // 0x259034: 0xad020008  sw          $v0, 0x8($t0)
    ctx->pc = 0x259034u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
    // 0x259038: 0xad0305b4  sw          $v1, 0x5B4($t0)
    ctx->pc = 0x259038u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1460), GPR_U32(ctx, 3));
    // 0x25903c: 0xad0305b8  sw          $v1, 0x5B8($t0)
    ctx->pc = 0x25903cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1464), GPR_U32(ctx, 3));
label_259040:
    // 0x259040: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x259040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x259044: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x259044u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259048: 0x244ae500  addiu       $t2, $v0, -0x1B00
    ctx->pc = 0x259048u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960384));
    // 0x25904c: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x25904cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_259050:
    // 0x259050: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x259050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259054: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x259054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x259058: 0x64840  sll         $t1, $a2, 1
    ctx->pc = 0x259058u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x25905c: 0x23940  sll         $a3, $v0, 5
    ctx->pc = 0x25905cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_259060:
    // 0x259060: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x259060u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x259064: 0x1251821  addu        $v1, $t1, $a1
    ctx->pc = 0x259064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x259068: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x259068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x25906c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x25906cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x259070: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x259070u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x259074: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x259074u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x259078: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x259078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x25907c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x25907cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x259080: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x259080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x259084: 0x28a40002  slti        $a0, $a1, 0x2
    ctx->pc = 0x259084u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x259088: 0x1480fff5  bnez        $a0, . + 4 + (-0xB << 2)
    ctx->pc = 0x259088u;
    {
        const bool branch_taken_0x259088 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x25908Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259088u;
        // 0x25908c: 0xac6205a0  sw          $v0, 0x5A0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1440), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259088) {
            ctx->pc = 0x259060u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_259060;
        }
    }
    ctx->pc = 0x259090u;
    // 0x259090: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x259090u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x259094: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x259094u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x259098: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x259098u;
    {
        const bool branch_taken_0x259098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25909Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259098u;
        // 0x25909c: 0x610c0  sll         $v0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259098) {
            ctx->pc = 0x259050u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_259050;
        }
    }
    ctx->pc = 0x2590A0u;
    // 0x2590a0: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x2590a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x2590a4: 0x2783cc68  addiu       $v1, $gp, -0x3398
    ctx->pc = 0x2590a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294954088));
    // 0x2590a8: 0x2442d910  addiu       $v0, $v0, -0x26F0
    ctx->pc = 0x2590a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957328));
    // 0x2590ac: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2590acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2590b0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2590b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2590b4: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x2590b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2590b8: 0xaf84cc6c  sw          $a0, -0x3394($gp)
    ctx->pc = 0x2590b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294954092), GPR_U32(ctx, 4));
    // 0x2590bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2590bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2590c0: 0xc78b8ad8  lwc1        $f11, -0x7528($gp)
    ctx->pc = 0x2590c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x2590c4: 0xc7868adc  lwc1        $f6, -0x7524($gp)
    ctx->pc = 0x2590c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2590c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2590c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2590cc: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x2590ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x2590d0: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2590d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2590d4: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x2590d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x2590d8: 0xc7888ae0  lwc1        $f8, -0x7520($gp)
    ctx->pc = 0x2590d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2590dc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2590dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2590e0: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x2590e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x2590e4: 0x0  nop
    ctx->pc = 0x2590e4u;
    // NOP
label_2590e8:
    // 0x2590e8: 0x46093141  sub.s       $f5, $f6, $f9
    ctx->pc = 0x2590e8u;
    ctx->f[5] = FPU_SUB_S(ctx->f[6], ctx->f[9]);
    // 0x2590ec: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2590ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2590f0: 0x46003007  neg.s       $f0, $f6
    ctx->pc = 0x2590f0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[6]);
    // 0x2590f4: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x2590f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2590f8: 0x460a3101  sub.s       $f4, $f6, $f10
    ctx->pc = 0x2590f8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[6], ctx->f[10]);
    // 0x2590fc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2590fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x259100: 0x46093080  add.s       $f2, $f6, $f9
    ctx->pc = 0x259100u;
    ctx->f[2] = FPU_ADD_S(ctx->f[6], ctx->f[9]);
    // 0x259104: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x259104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x259108: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x259108u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x25910c: 0x460510c2  mul.s       $f3, $f2, $f5
    ctx->pc = 0x25910cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x259110: 0x46001047  neg.s       $f1, $f2
    ctx->pc = 0x259110u;
    ctx->f[1] = FPU_NEG_S(ctx->f[2]);
    // 0x259114: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x259114u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x259118: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x259118u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x25911c: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x25911cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x259120: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x259120u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x259124: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x259124u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x259128: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x259128u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x25912c: 0x460718c2  mul.s       $f3, $f3, $f7
    ctx->pc = 0x25912cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x259130: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x259130u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x259134: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x259134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x259138: 0x46081082  mul.s       $f2, $f2, $f8
    ctx->pc = 0x259138u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[8]);
    // 0x25913c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x25913cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x259140: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x259140u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x259144: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x259144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x259148: 0xe4630004  swc1        $f3, 0x4($v1)
    ctx->pc = 0x259148u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x25914c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x25914cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x259150: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x259150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x259154: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x259154u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x259158: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x259158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x25915c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x25915cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x259160: 0xe482000c  swc1        $f2, 0xC($a0)
    ctx->pc = 0x259160u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x259164: 0x8f82cc6c  lw          $v0, -0x3394($gp)
    ctx->pc = 0x259164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954092)));
    // 0x259168: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x259168u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x25916c: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x25916Cu;
    {
        const bool branch_taken_0x25916c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x259170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25916Cu;
        // 0x259170: 0x460b3180  add.s       $f6, $f6, $f11 (Delay Slot)
        ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[11]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25916c) {
            ctx->pc = 0x2590E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2590e8;
        }
    }
    ctx->pc = 0x259174u;
    // 0x259174: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x259174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x259178: 0xad0005c4  sw          $zero, 0x5C4($t0)
    ctx->pc = 0x259178u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1476), GPR_U32(ctx, 0));
    // 0x25917c: 0xad0205b0  sw          $v0, 0x5B0($t0)
    ctx->pc = 0x25917cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1456), GPR_U32(ctx, 2));
    // 0x259180: 0xad00000c  sw          $zero, 0xC($t0)
    ctx->pc = 0x259180u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 0));
    // 0x259184: 0x3e00008  jr          $ra
    ctx->pc = 0x259184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259184u;
        // 0x259188: 0xad0205bc  sw          $v0, 0x5BC($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 1468), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25918Cu;
    // 0x25918c: 0x0  nop
    ctx->pc = 0x25918cu;
    // NOP
    ctx->pc = 0x259190u;
}
