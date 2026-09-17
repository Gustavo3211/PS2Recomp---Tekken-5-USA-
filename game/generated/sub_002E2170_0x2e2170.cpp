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

// Function: sub_002E2170
// Address: 0x2e2170 - 0x2e2248
void sub_002E2170_0x2e2170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E2170_0x2e2170");
#endif

    switch (ctx->pc) {
        case 0x2e21f8u: goto label_2e21f8;
        case 0x2e2204u: goto label_2e2204;
        case 0x2e2220u: goto label_2e2220;
        case 0x2e222cu: goto label_2e222c;
        case 0x2e2234u: goto label_2e2234;
        default: break;
    }

    ctx->pc = 0x2e2170u;

    // 0x2e2170: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e2170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e2174: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e2174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e2178: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e2178u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e217c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2e217cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2e2180: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e2180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e2184: 0x26040074  addiu       $a0, $s0, 0x74
    ctx->pc = 0x2e2184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 116));
    // 0x2e2188: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2e2188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e218c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E218Cu;
    {
        const bool branch_taken_0x2e218c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E218Cu;
        // 0x2e2190: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e218c) {
            ctx->pc = 0x2E21A8u;
            goto label_2e21a8;
        }
    }
    ctx->pc = 0x2E2194u;
    // 0x2e2194: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e2194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e2198: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e2198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e219c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2e219cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e21a0: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E21A0u;
    {
        const bool branch_taken_0x2e21a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e21a0) {
            ctx->pc = 0x2E21B4u;
            goto label_2e21b4;
        }
    }
    ctx->pc = 0x2E21A8u;
label_2e21a8:
    // 0x2e21a8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2e21a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2e21ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e21acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e21b0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2e21b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_2e21b4:
    // 0x2e21b4: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x2E21B4u;
    {
        const bool branch_taken_0x2e21b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e21b4) {
            ctx->pc = 0x2E21F0u;
            goto label_2e21f0;
        }
    }
    ctx->pc = 0x2E21BCu;
    // 0x2e21bc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2e21bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e21c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E21C0u;
    {
        const bool branch_taken_0x2e21c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E21C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E21C0u;
        // 0x2e21c4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e21c0) {
            ctx->pc = 0x2E21D8u;
            goto label_2e21d8;
        }
    }
    ctx->pc = 0x2E21C8u;
    // 0x2e21c8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e21c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e21cc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2e21ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e21d0: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E21D0u;
    {
        const bool branch_taken_0x2e21d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e21d0) {
            ctx->pc = 0x2E21D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E21D0u;
            // 0x2e21d4: 0x8ca20054  lw          $v0, 0x54($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E21E8u;
            goto label_2e21e8;
        }
    }
    ctx->pc = 0x2E21D8u;
label_2e21d8:
    // 0x2e21d8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2e21d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2e21dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e21dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e21e0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2e21e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2e21e4: 0x8ca20054  lw          $v0, 0x54($a1)
    ctx->pc = 0x2e21e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x54u));
label_2e21e8:
    // 0x2e21e8: 0x50510013  beql        $v0, $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2E21E8u;
    {
        const bool branch_taken_0x2e21e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x2e21e8) {
            ctx->pc = 0x2E21ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E21E8u;
            // 0x2e21ec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2238u;
            goto label_2e2238;
        }
    }
    ctx->pc = 0x2E21F0u;
label_2e21f0:
    // 0x2e21f0: 0xc0b8bc2  jal         func_2E2F08
    ctx->pc = 0x2E21F0u;
    SET_GPR_U32(ctx, 31, 0x2E21F8u);
    ctx->pc = 0x2E21F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E21F0u;
    // 0x2e21f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E2F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2F08u, 0x2E21F0u, 0x2E21F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E21F8u;
label_2e21f8:
    // 0x2e21f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e21f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e21fc: 0xc0b87b2  jal         func_2E1EC8
    ctx->pc = 0x2E21FCu;
    SET_GPR_U32(ctx, 31, 0x2E2204u);
    ctx->pc = 0x2E2200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E21FCu;
    // 0x2e2200: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1EC8u, 0x2E21FCu, 0x2E2204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2204u;
label_2e2204:
    // 0x2e2204: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x2e2204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x2e2208: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e2208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e220c: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2E220Cu;
    {
        const bool branch_taken_0x2e220c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e220c) {
            ctx->pc = 0x2E2210u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E220Cu;
            // 0x2e2210: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2238u;
            goto label_2e2238;
        }
    }
    ctx->pc = 0x2E2214u;
    // 0x2e2214: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e2214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2218: 0xc0b87da  jal         func_2E1F68
    ctx->pc = 0x2E2218u;
    SET_GPR_U32(ctx, 31, 0x2E2220u);
    ctx->pc = 0x2E221Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2218u;
    // 0x2e221c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1F68u, 0x2E2218u, 0x2E2220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2220u;
label_2e2220:
    // 0x2e2220: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e2220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2224: 0xc0b8802  jal         func_2E2008
    ctx->pc = 0x2E2224u;
    SET_GPR_U32(ctx, 31, 0x2E222Cu);
    ctx->pc = 0x2E2228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2224u;
    // 0x2e2228: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E2008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2008u, 0x2E2224u, 0x2E222Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E222Cu;
label_2e222c:
    // 0x2e222c: 0xc0b882a  jal         func_2E20A8
    ctx->pc = 0x2E222Cu;
    SET_GPR_U32(ctx, 31, 0x2E2234u);
    ctx->pc = 0x2E2230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E222Cu;
    // 0x2e2230: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E20A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E20A8u, 0x2E222Cu, 0x2E2234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2234u;
label_2e2234:
    // 0x2e2234: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e2234u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e2238:
    // 0x2e2238: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2e2238u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e223c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e223cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e2240: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E2244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2240u;
        // 0x2e2244: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E2240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E2248u;
}
