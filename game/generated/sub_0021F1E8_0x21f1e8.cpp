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

// Function: sub_0021F1E8
// Address: 0x21f1e8 - 0x21f270
void sub_0021F1E8_0x21f1e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021F1E8_0x21f1e8");
#endif

    switch (ctx->pc) {
        case 0x21f250u: goto label_21f250;
        case 0x21f25cu: goto label_21f25c;
        default: break;
    }

    ctx->pc = 0x21f1e8u;

    // 0x21f1e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21f1e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21f1ec: 0x43900  sll         $a3, $a0, 4
    ctx->pc = 0x21f1ecu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x21f1f0: 0x2884000a  slti        $a0, $a0, 0xA
    ctx->pc = 0x21f1f0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x21f1f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21f1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21f1f8: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21F1F8u;
    {
        const bool branch_taken_0x21f1f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x21F1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F1F8u;
        // 0x21f1fc: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f1f8) {
            ctx->pc = 0x21F218u;
            goto label_21f218;
        }
    }
    ctx->pc = 0x21F200u;
    // 0x21f200: 0xaf80c94c  sw          $zero, -0x36B4($gp)
    ctx->pc = 0x21f200u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953292), GPR_U32(ctx, 0));
    // 0x21f204: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x21f204u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f208: 0xaf80c948  sw          $zero, -0x36B8($gp)
    ctx->pc = 0x21f208u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953288), GPR_U32(ctx, 0));
    // 0x21f20c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x21F20Cu;
    {
        const bool branch_taken_0x21f20c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F20Cu;
        // 0x21f210: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f20c) {
            ctx->pc = 0x21F248u;
            goto label_21f248;
        }
    }
    ctx->pc = 0x21F214u;
    // 0x21f214: 0x0  nop
    ctx->pc = 0x21f214u;
    // NOP
label_21f218:
    // 0x21f218: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x21f218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x21f21c: 0x2442c110  addiu       $v0, $v0, -0x3EF0
    ctx->pc = 0x21f21cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951184));
    // 0x21f220: 0x471821  addu        $v1, $v0, $a3
    ctx->pc = 0x21f220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x21f224: 0xe22021  addu        $a0, $a3, $v0
    ctx->pc = 0x21f224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x21f228: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x21f228u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x21f22c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x21f22cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f230: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x21f230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21f234: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x21f234u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f238: 0xaf85c948  sw          $a1, -0x36B8($gp)
    ctx->pc = 0x21f238u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953288), GPR_U32(ctx, 5));
    // 0x21f23c: 0xaf83c94c  sw          $v1, -0x36B4($gp)
    ctx->pc = 0x21f23cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953292), GPR_U32(ctx, 3));
    // 0x21f240: 0x8c50000c  lw          $s0, 0xC($v0)
    ctx->pc = 0x21f240u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x21f244: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x21f244u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_21f248:
    // 0x21f248: 0xc087c02  jal         func_21F008
    ctx->pc = 0x21F248u;
    SET_GPR_U32(ctx, 31, 0x21F250u);
    ctx->pc = 0x21F24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F248u;
    // 0x21f24c: 0x8f84c94c  lw          $a0, -0x36B4($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953292)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F008u, 0x21F248u, 0x21F250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F250u;
label_21f250:
    // 0x21f250: 0x8f84c948  lw          $a0, -0x36B8($gp)
    ctx->pc = 0x21f250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953288)));
    // 0x21f254: 0xc087c30  jal         func_21F0C0
    ctx->pc = 0x21F254u;
    SET_GPR_U32(ctx, 31, 0x21F25Cu);
    ctx->pc = 0x21F258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F254u;
    // 0x21f258: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F0C0u, 0x21F254u, 0x21F25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F25Cu;
label_21f25c:
    // 0x21f25c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21f25cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f260: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21f260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21f264: 0x3e00008  jr          $ra
    ctx->pc = 0x21F264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F264u;
        // 0x21f268: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F264u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21F26Cu;
    // 0x21f26c: 0x0  nop
    ctx->pc = 0x21f26cu;
    // NOP
    ctx->pc = 0x21f270u;
}
