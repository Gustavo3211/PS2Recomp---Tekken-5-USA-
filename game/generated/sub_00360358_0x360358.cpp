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

// Function: sub_00360358
// Address: 0x360358 - 0x360398
void sub_00360358_0x360358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00360358_0x360358");
#endif

    ctx->pc = 0x360358u;

    // 0x360358: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x360358u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x36035c: 0x3c014496  lui         $at, 0x4496
    ctx->pc = 0x36035cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17558 << 16));
    // 0x360360: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x360360u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x360364: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x360364u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x360368: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x360368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36036c: 0x44846800  mtc1        $a0, $f13
    ctx->pc = 0x36036cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x360370: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x360370u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x360374: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x360374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x360378: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x360378u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x36037c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x36037cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x360380: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x360380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x360384: 0x0  nop
    ctx->pc = 0x360384u;
    // NOP
    // 0x360388: 0x0  nop
    ctx->pc = 0x360388u;
    // NOP
    // 0x36038c: 0x46006b43  div.s       $f13, $f13, $f0
    ctx->pc = 0x36038cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[13] * 0.0f); } else ctx->f[13] = ctx->f[13] / ctx->f[0];
    // 0x360390: 0x8047546  j           func_11D518
    ctx->pc = 0x360390u;
    ctx->pc = 0x360394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360390u;
    // 0x360394: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D518u;
    sub_0011D518_0x11d518(rdram, ctx, runtime); return;
    ctx->pc = 0x360398u;
}
