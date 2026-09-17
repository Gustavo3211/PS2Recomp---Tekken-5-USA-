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

// Function: sub_00313DD8
// Address: 0x313dd8 - 0x313fa0
void sub_00313DD8_0x313dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00313DD8_0x313dd8");
#endif

    switch (ctx->pc) {
        case 0x313df0u: goto label_313df0;
        case 0x313df8u: goto label_313df8;
        case 0x313ec8u: goto label_313ec8;
        default: break;
    }

    ctx->pc = 0x313dd8u;

    // 0x313dd8: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x313dd8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313ddc: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x313ddcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313de0: 0xad2b0084  sw          $t3, 0x84($t1)
    ctx->pc = 0x313de0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 132), GPR_U32(ctx, 11));
    // 0x313de4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x313de4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313de8: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x313de8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313dec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x313decu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_313df0:
    // 0x313df0: 0x83100  sll         $a2, $t0, 4
    ctx->pc = 0x313df0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x313df4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x313df4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_313df8:
    // 0x313df8: 0x8d220078  lw          $v0, 0x78($t1)
    ctx->pc = 0x313df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 120)));
    // 0x313dfc: 0x16a1821  addu        $v1, $t3, $t2
    ctx->pc = 0x313dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x313e00: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x313e00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x313e04: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x313e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x313e08: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x313e08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x313e0c: 0x8d240090  lw          $a0, 0x90($t1)
    ctx->pc = 0x313e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 144)));
    // 0x313e10: 0x8d230078  lw          $v1, 0x78($t1)
    ctx->pc = 0x313e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 120)));
    // 0x313e14: 0x1445021  addu        $t2, $t2, $a0
    ctx->pc = 0x313e14u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x313e18: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x313e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x313e1c: 0x16a1021  addu        $v0, $t3, $t2
    ctx->pc = 0x313e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x313e20: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x313e20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x313e24: 0x8d240094  lw          $a0, 0x94($t1)
    ctx->pc = 0x313e24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 148)));
    // 0x313e28: 0x8d230078  lw          $v1, 0x78($t1)
    ctx->pc = 0x313e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 120)));
    // 0x313e2c: 0x1445021  addu        $t2, $t2, $a0
    ctx->pc = 0x313e2cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x313e30: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x313e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x313e34: 0x16a1021  addu        $v0, $t3, $t2
    ctx->pc = 0x313e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x313e38: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x313e38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x313e3c: 0x8d250098  lw          $a1, 0x98($t1)
    ctx->pc = 0x313e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 152)));
    // 0x313e40: 0x8d240078  lw          $a0, 0x78($t1)
    ctx->pc = 0x313e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 120)));
    // 0x313e44: 0x1455021  addu        $t2, $t2, $a1
    ctx->pc = 0x313e44u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x313e48: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x313e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x313e4c: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x313e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x313e50: 0x16a1021  addu        $v0, $t3, $t2
    ctx->pc = 0x313e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x313e54: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x313e54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x313e58: 0x8d23009c  lw          $v1, 0x9C($t1)
    ctx->pc = 0x313e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 156)));
    // 0x313e5c: 0x4e1ffe6  bgez        $a3, . + 4 + (-0x1A << 2)
    ctx->pc = 0x313E5Cu;
    {
        const bool branch_taken_0x313e5c = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x313E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313E5Cu;
        // 0x313e60: 0x1435021  addu        $t2, $t2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313e5c) {
            ctx->pc = 0x313DF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_313df8;
        }
    }
    ctx->pc = 0x313E64u;
    // 0x313e64: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x313e64u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x313e68: 0x29820002  slti        $v0, $t4, 0x2
    ctx->pc = 0x313e68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x313e6c: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x313E6Cu;
    {
        const bool branch_taken_0x313e6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x313E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313E6Cu;
        // 0x313e70: 0x25080002  addiu       $t0, $t0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313e6c) {
            ctx->pc = 0x313DF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_313df0;
        }
    }
    ctx->pc = 0x313E74u;
    // 0x313e74: 0x91230074  lbu         $v1, 0x74($t1)
    ctx->pc = 0x313e74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 116)));
    // 0x313e78: 0x16a2021  addu        $a0, $t3, $t2
    ctx->pc = 0x313e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x313e7c: 0x8d2200a0  lw          $v0, 0xA0($t1)
    ctx->pc = 0x313e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 160)));
    // 0x313e80: 0x8d2500a4  lw          $a1, 0xA4($t1)
    ctx->pc = 0x313e80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 164)));
    // 0x313e84: 0x433018  mult        $a2, $v0, $v1
    ctx->pc = 0x313e84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x313e88: 0x8d2700ac  lw          $a3, 0xAC($t1)
    ctx->pc = 0x313e88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 172)));
    // 0x313e8c: 0xad240088  sw          $a0, 0x88($t1)
    ctx->pc = 0x313e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 136), GPR_U32(ctx, 4));
    // 0x313e90: 0xca5021  addu        $t2, $a2, $t2
    ctx->pc = 0x313e90u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x313e94: 0x8d2600a8  lw          $a2, 0xA8($t1)
    ctx->pc = 0x313e94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 168)));
    // 0x313e98: 0x16a4021  addu        $t0, $t3, $t2
    ctx->pc = 0x313e98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x313e9c: 0x1455021  addu        $t2, $t2, $a1
    ctx->pc = 0x313e9cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x313ea0: 0x16a2021  addu        $a0, $t3, $t2
    ctx->pc = 0x313ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x313ea4: 0x1465021  addu        $t2, $t2, $a2
    ctx->pc = 0x313ea4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x313ea8: 0x16a1821  addu        $v1, $t3, $t2
    ctx->pc = 0x313ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x313eac: 0x1475021  addu        $t2, $t2, $a3
    ctx->pc = 0x313eacu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x313eb0: 0x16a1021  addu        $v0, $t3, $t2
    ctx->pc = 0x313eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x313eb4: 0xad280048  sw          $t0, 0x48($t1)
    ctx->pc = 0x313eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 72), GPR_U32(ctx, 8));
    // 0x313eb8: 0xad220070  sw          $v0, 0x70($t1)
    ctx->pc = 0x313eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 112), GPR_U32(ctx, 2));
    // 0x313ebc: 0xad240050  sw          $a0, 0x50($t1)
    ctx->pc = 0x313ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 80), GPR_U32(ctx, 4));
    // 0x313ec0: 0x3e00008  jr          $ra
    ctx->pc = 0x313EC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x313EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313EC0u;
        // 0x313ec4: 0xad230054  sw          $v1, 0x54($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x313EC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x313EC8u;
label_313ec8:
    // 0x313ec8: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x313ec8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313ecc: 0x240700d0  addiu       $a3, $zero, 0xD0
    ctx->pc = 0x313eccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x313ed0: 0x8d28003c  lw          $t0, 0x3C($t1)
    ctx->pc = 0x313ed0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 60)));
    // 0x313ed4: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x313ed4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x313ed8: 0x8d25002c  lw          $a1, 0x2C($t1)
    ctx->pc = 0x313ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 44)));
    // 0x313edc: 0x8d240028  lw          $a0, 0x28($t1)
    ctx->pc = 0x313edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 40)));
    // 0x313ee0: 0x250bffff  addiu       $t3, $t0, -0x1
    ctx->pc = 0x313ee0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x313ee4: 0x8d230044  lw          $v1, 0x44($t1)
    ctx->pc = 0x313ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 68)));
    // 0x313ee8: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x313ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x313eec: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x313eecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x313ef0: 0x8d25005c  lw          $a1, 0x5C($t1)
    ctx->pc = 0x313ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 92)));
    // 0x313ef4: 0x71631818  mult1       $v1, $t3, $v1
    ctx->pc = 0x313ef4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x313ef8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x313ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x313efc: 0x260c0  sll         $t4, $v0, 3
    ctx->pc = 0x313efcu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x313f00: 0x85080  sll         $t2, $t0, 2
    ctx->pc = 0x313f00u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x313f04: 0x14c6821  addu        $t5, $t2, $t4
    ctx->pc = 0x313f04u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 12)));
    // 0x313f08: 0xad270090  sw          $a3, 0x90($t1)
    ctx->pc = 0x313f08u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 144), GPR_U32(ctx, 7));
    // 0x313f0c: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x313f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x313f10: 0xad260098  sw          $a2, 0x98($t1)
    ctx->pc = 0x313f10u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 152), GPR_U32(ctx, 6));
    // 0x313f14: 0x31180  sll         $v0, $v1, 6
    ctx->pc = 0x313f14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x313f18: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x313f18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x313f1c: 0xad240094  sw          $a0, 0x94($t1)
    ctx->pc = 0x313f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 148), GPR_U32(ctx, 4));
    // 0x313f20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x313f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x313f24: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x313F24u;
    {
        const bool branch_taken_0x313f24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x313F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313F24u;
        // 0x313f28: 0xad23009c  sw          $v1, 0x9C($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 156), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313f24) {
            ctx->pc = 0x313F30u;
            goto label_313f30;
        }
    }
    ctx->pc = 0x313F2Cu;
    // 0x313f2c: 0xad22009c  sw          $v0, 0x9C($t1)
    ctx->pc = 0x313f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 156), GPR_U32(ctx, 2));
label_313f30:
    // 0x313f30: 0x8d240040  lw          $a0, 0x40($t1)
    ctx->pc = 0x313f30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 64)));
    // 0x313f34: 0x8d220090  lw          $v0, 0x90($t1)
    ctx->pc = 0x313f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 144)));
    // 0x313f38: 0x2486ffff  addiu       $a2, $a0, -0x1
    ctx->pc = 0x313f38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x313f3c: 0x1042018  mult        $a0, $t0, $a0
    ctx->pc = 0x313f3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x313f40: 0x8d27009c  lw          $a3, 0x9C($t1)
    ctx->pc = 0x313f40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 156)));
    // 0x313f44: 0x1663018  mult        $a2, $t3, $a2
    ctx->pc = 0x313f44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x313f48: 0x8d230098  lw          $v1, 0x98($t1)
    ctx->pc = 0x313f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 152)));
    // 0x313f4c: 0x8d280094  lw          $t0, 0x94($t1)
    ctx->pc = 0x313f4cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 148)));
    // 0x313f50: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x313f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x313f54: 0x91250074  lbu         $a1, 0x74($t1)
    ctx->pc = 0x313f54u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 116)));
    // 0x313f58: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x313f58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x313f5c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x313f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x313f60: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x313f60u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x313f64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x313f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x313f68: 0x851818  mult        $v1, $a0, $a1
    ctx->pc = 0x313f68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x313f6c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x313f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x313f70: 0xad2c00a4  sw          $t4, 0xA4($t1)
    ctx->pc = 0x313f70u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 164), GPR_U32(ctx, 12));
    // 0x313f74: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x313f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x313f78: 0xad2a00a8  sw          $t2, 0xA8($t1)
    ctx->pc = 0x313f78u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 168), GPR_U32(ctx, 10));
    // 0x313f7c: 0xad2a00ac  sw          $t2, 0xAC($t1)
    ctx->pc = 0x313f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 172), GPR_U32(ctx, 10));
    // 0x313f80: 0x6a2821  addu        $a1, $v1, $t2
    ctx->pc = 0x313f80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x313f84: 0x1a61821  addu        $v1, $t5, $a2
    ctx->pc = 0x313f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 6)));
    // 0x313f88: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x313f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x313f8c: 0xad2400a0  sw          $a0, 0xA0($t1)
    ctx->pc = 0x313f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 160), GPR_U32(ctx, 4));
    // 0x313f90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x313f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x313f94: 0xad22008c  sw          $v0, 0x8C($t1)
    ctx->pc = 0x313f94u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 140), GPR_U32(ctx, 2));
    // 0x313f98: 0x3e00008  jr          $ra
    ctx->pc = 0x313F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x313F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313F98u;
        // 0x313f9c: 0xad2600b0  sw          $a2, 0xB0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 176), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x313F98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x313FA0u;
}
