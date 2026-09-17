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

// Function: sub_00297D18
// Address: 0x297d18 - 0x297d68
void sub_00297D18_0x297d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00297D18_0x297d18");
#endif

    switch (ctx->pc) {
        case 0x297d3cu: goto label_297d3c;
        case 0x297d5cu: goto label_297d5c;
        default: break;
    }

    ctx->pc = 0x297d18u;

    // 0x297d18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x297d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x297d1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x297d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x297d20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x297d20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297d24: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x297d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x297d28: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x297d28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x297d2c: 0x2442e390  addiu       $v0, $v0, -0x1C70
    ctx->pc = 0x297d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960016));
    // 0x297d30: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x297d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x297d34: 0xc0a604a  jal         func_298128
    ctx->pc = 0x297D34u;
    SET_GPR_U32(ctx, 31, 0x297D3Cu);
    ctx->pc = 0x297D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297D34u;
    // 0x297d38: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298128u, 0x297D34u, 0x297D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297D3Cu;
label_297d3c:
    // 0x297d3c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x297d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x297d40: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x297d40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x297d44: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x297d44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
    // 0x297d48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x297d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297d4c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x297d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x297d50: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x297d50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297d54: 0xc0b79f8  jal         func_2DE7E0
    ctx->pc = 0x297D54u;
    SET_GPR_U32(ctx, 31, 0x297D5Cu);
    ctx->pc = 0x297D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297D54u;
    // 0x297d58: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE7E0u, 0x297D54u, 0x297D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297D5Cu;
label_297d5c:
    // 0x297d5c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x297D5Cu;
    {
        const bool branch_taken_0x297d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297D5Cu;
        // 0x297d60: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297d5c) {
            ctx->pc = 0x297D80u;
            return;
        }
    }
    ctx->pc = 0x297D64u;
    // 0x297d64: 0x0  nop
    ctx->pc = 0x297d64u;
    // NOP
    ctx->pc = 0x297d68u;
}
