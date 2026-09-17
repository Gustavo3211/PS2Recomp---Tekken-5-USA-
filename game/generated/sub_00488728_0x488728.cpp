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

// Function: sub_00488728
// Address: 0x488728 - 0x488788
void sub_00488728_0x488728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00488728_0x488728");
#endif

    switch (ctx->pc) {
        case 0x488744u: goto label_488744;
        default: break;
    }

    ctx->pc = 0x488728u;

    // 0x488728: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x488728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x48872c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x48872cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x488730: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x488730u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
    // 0x488734: 0x2610fb80  addiu       $s0, $s0, -0x480
    ctx->pc = 0x488734u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966144));
    // 0x488738: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x488738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x48873c: 0xc122134  jal         func_4884D0
    ctx->pc = 0x48873Cu;
    SET_GPR_U32(ctx, 31, 0x488744u);
    ctx->pc = 0x488740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48873Cu;
    // 0x488740: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4884D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4884D0u, 0x48873Cu, 0x488744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488744u;
label_488744:
    // 0x488744: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x488744u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x488748: 0x3c070057  lui         $a3, 0x57
    ctx->pc = 0x488748u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)87 << 16));
    // 0x48874c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x48874cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x488750: 0x3c060057  lui         $a2, 0x57
    ctx->pc = 0x488750u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)87 << 16));
    // 0x488754: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x488754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x488758: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x488758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x48875c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x48875cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x488760: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x488760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x488764: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x488764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x488768: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x488768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x48876c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x48876cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x488770: 0xaca2ced4  sw          $v0, -0x312C($a1)
    ctx->pc = 0x488770u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x56CED4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x56CED4u, _value); } while (0);
    // 0x488774: 0xace3cb40  sw          $v1, -0x34C0($a3)
    ctx->pc = 0x488774u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x56CB40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x56CB40u, _value); } while (0);
    // 0x488778: 0xacc4cea8  sw          $a0, -0x3158($a2)
    ctx->pc = 0x488778u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x56CEA8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x56CEA8u, _value); } while (0);
    // 0x48877c: 0x3e00008  jr          $ra
    ctx->pc = 0x48877Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x488780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48877Cu;
        // 0x488780: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48877Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x488784u;
    // 0x488784: 0x0  nop
    ctx->pc = 0x488784u;
    // NOP
    ctx->pc = 0x488788u;
}
