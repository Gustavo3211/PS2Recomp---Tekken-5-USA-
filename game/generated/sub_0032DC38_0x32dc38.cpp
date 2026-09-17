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

// Function: sub_0032DC38
// Address: 0x32dc38 - 0x32ddf8
void sub_0032DC38_0x32dc38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032DC38_0x32dc38");
#endif

    switch (ctx->pc) {
        case 0x32dcd8u: goto label_32dcd8;
        case 0x32dcfcu: goto label_32dcfc;
        case 0x32dd30u: goto label_32dd30;
        default: break;
    }

    ctx->pc = 0x32dc38u;

    // 0x32dc38: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x32dc38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x32dc3c: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x32dc3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x32dc40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32dc40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32dc44: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x32dc44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x32dc48: 0xfbbc0000  sqc2        $vf28, 0x0($sp)
    ctx->pc = 0x32dc48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x32dc4c: 0xfbbd0010  sqc2        $vf29, 0x10($sp)
    ctx->pc = 0x32dc4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x32dc50: 0xfbbe0020  sqc2        $vf30, 0x20($sp)
    ctx->pc = 0x32dc50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x32dc54: 0xfbbf0030  sqc2        $vf31, 0x30($sp)
    ctx->pc = 0x32dc54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x32dc58: 0xda1c0010  lqc2        $vf28, 0x10($s0)
    ctx->pc = 0x32dc58u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x32dc5c: 0xda1d0020  lqc2        $vf29, 0x20($s0)
    ctx->pc = 0x32dc5cu;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x32dc60: 0xda1e0030  lqc2        $vf30, 0x30($s0)
    ctx->pc = 0x32dc60u;
    ctx->vu0_vf[30] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x32dc64: 0xda1f0040  lqc2        $vf31, 0x40($s0)
    ctx->pc = 0x32dc64u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x32dc68: 0xda180050  lqc2        $vf24, 0x50($s0)
    ctx->pc = 0x32dc68u;
    ctx->vu0_vf[24] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x32dc6c: 0xda190060  lqc2        $vf25, 0x60($s0)
    ctx->pc = 0x32dc6cu;
    ctx->vu0_vf[25] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x32dc70: 0xda1a0070  lqc2        $vf26, 0x70($s0)
    ctx->pc = 0x32dc70u;
    ctx->vu0_vf[26] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x32dc74: 0xda1b0080  lqc2        $vf27, 0x80($s0)
    ctx->pc = 0x32dc74u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x32dc78: 0x4a006038  vcallms     0xC00
    ctx->pc = 0x32dc78u;
    {     ctx->vu0_tpc = 0xC00;     runtime->executeVU0Microprogram(rdram, ctx, 0xC00); }
    // 0x32dc7c: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x32dc7cu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x32dc80: 0xdbb80000  lqc2        $vf24, 0x0($sp)
    ctx->pc = 0x32dc80u;
    ctx->vu0_vf[24] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32dc84: 0xdbb90010  lqc2        $vf25, 0x10($sp)
    ctx->pc = 0x32dc84u;
    ctx->vu0_vf[25] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32dc88: 0xdbba0020  lqc2        $vf26, 0x20($sp)
    ctx->pc = 0x32dc88u;
    ctx->vu0_vf[26] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32dc8c: 0xdbbb0030  lqc2        $vf27, 0x30($sp)
    ctx->pc = 0x32dc8cu;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32dc90: 0x4a006038  vcallms     0xC00
    ctx->pc = 0x32dc90u;
    {     ctx->vu0_tpc = 0xC00;     runtime->executeVU0Microprogram(rdram, ctx, 0xC00); }
    // 0x32dc94: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x32dc94u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x32dc98: 0xfa1c0090  sqc2        $vf28, 0x90($s0)
    ctx->pc = 0x32dc98u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 144), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x32dc9c: 0xfa1d00a0  sqc2        $vf29, 0xA0($s0)
    ctx->pc = 0x32dc9cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 160), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x32dca0: 0xfa1e00b0  sqc2        $vf30, 0xB0($s0)
    ctx->pc = 0x32dca0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 176), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x32dca4: 0xfa1f00c0  sqc2        $vf31, 0xC0($s0)
    ctx->pc = 0x32dca4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 192), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x32dca8: 0xda1c0050  lqc2        $vf28, 0x50($s0)
    ctx->pc = 0x32dca8u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x32dcac: 0xda1d0060  lqc2        $vf29, 0x60($s0)
    ctx->pc = 0x32dcacu;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x32dcb0: 0xda1e0070  lqc2        $vf30, 0x70($s0)
    ctx->pc = 0x32dcb0u;
    ctx->vu0_vf[30] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x32dcb4: 0xda1f0080  lqc2        $vf31, 0x80($s0)
    ctx->pc = 0x32dcb4u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x32dcb8: 0xdbb80000  lqc2        $vf24, 0x0($sp)
    ctx->pc = 0x32dcb8u;
    ctx->vu0_vf[24] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32dcbc: 0xdbb90010  lqc2        $vf25, 0x10($sp)
    ctx->pc = 0x32dcbcu;
    ctx->vu0_vf[25] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32dcc0: 0xdbba0020  lqc2        $vf26, 0x20($sp)
    ctx->pc = 0x32dcc0u;
    ctx->vu0_vf[26] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32dcc4: 0xdbbb0030  lqc2        $vf27, 0x30($sp)
    ctx->pc = 0x32dcc4u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32dcc8: 0x4a006038  vcallms     0xC00
    ctx->pc = 0x32dcc8u;
    {     ctx->vu0_tpc = 0xC00;     runtime->executeVU0Microprogram(rdram, ctx, 0xC00); }
    // 0x32dccc: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x32dcccu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x32dcd0: 0xc0cb8fc  jal         func_32E3F0
    ctx->pc = 0x32DCD0u;
    SET_GPR_U32(ctx, 31, 0x32DCD8u);
    ctx->pc = 0x32E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E3F0u, 0x32DCD0u, 0x32DCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DCD8u;
label_32dcd8:
    // 0x32dcd8: 0x8e0200e4  lw          $v0, 0xE4($s0)
    ctx->pc = 0x32dcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x32dcdc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x32DCDCu;
    {
        const bool branch_taken_0x32dcdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32DCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DCDCu;
        // 0x32dce0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32dcdc) {
            ctx->pc = 0x32DD08u;
            goto label_32dd08;
        }
    }
    ctx->pc = 0x32DCE4u;
    // 0x32dce4: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x32DCE4u;
    {
        const bool branch_taken_0x32dce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x32dce4) {
            ctx->pc = 0x32DD0Cu;
            goto label_32dd0c;
        }
    }
    ctx->pc = 0x32DCECu;
    // 0x32dcec: 0xfa1e00d0  sqc2        $vf30, 0xD0($s0)
    ctx->pc = 0x32dcecu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 208), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x32dcf0: 0x260400d0  addiu       $a0, $s0, 0xD0
    ctx->pc = 0x32dcf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x32dcf4: 0xc0cbaa2  jal         func_32EA88
    ctx->pc = 0x32DCF4u;
    SET_GPR_U32(ctx, 31, 0x32DCFCu);
    ctx->pc = 0x32DCF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DCF4u;
    // 0x32dcf8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32EA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32EA88u, 0x32DCF4u, 0x32DCFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DCFCu;
label_32dcfc:
    // 0x32dcfc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x32DCFCu;
    {
        const bool branch_taken_0x32dcfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32dcfc) {
            ctx->pc = 0x32DD0Cu;
            goto label_32dd0c;
        }
    }
    ctx->pc = 0x32DD04u;
    // 0x32dd04: 0x0  nop
    ctx->pc = 0x32dd04u;
    // NOP
label_32dd08:
    // 0x32dd08: 0xfa1f00d0  sqc2        $vf31, 0xD0($s0)
    ctx->pc = 0x32dd08u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 208), _mm_castps_si128(ctx->vu0_vf[31]));
label_32dd0c:
    // 0x32dd0c: 0xdbbc0000  lqc2        $vf28, 0x0($sp)
    ctx->pc = 0x32dd0cu;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32dd10: 0xdbbd0010  lqc2        $vf29, 0x10($sp)
    ctx->pc = 0x32dd10u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32dd14: 0xdbbe0020  lqc2        $vf30, 0x20($sp)
    ctx->pc = 0x32dd14u;
    ctx->vu0_vf[30] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32dd18: 0xdbbf0030  lqc2        $vf31, 0x30($sp)
    ctx->pc = 0x32dd18u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32dd1c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x32dd1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32dd20: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x32dd20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x32dd24: 0x3e00008  jr          $ra
    ctx->pc = 0x32DD24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32DD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DD24u;
        // 0x32dd28: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32DD24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32DD2Cu;
    // 0x32dd2c: 0x0  nop
    ctx->pc = 0x32dd2cu;
    // NOP
label_32dd30:
    // 0x32dd30: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x32dd30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x32dd34: 0x3c070006  lui         $a3, 0x6
    ctx->pc = 0x32dd34u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)6 << 16));
    // 0x32dd38: 0x3c026c00  lui         $v0, 0x6C00
    ctx->pc = 0x32dd38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27648 << 16));
    // 0x32dd3c: 0x24080006  addiu       $t0, $zero, 0x6
    ctx->pc = 0x32dd3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x32dd40: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x32dd40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x32dd44: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x32dd44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x32dd48: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32dd48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32dd4c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x32dd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x32dd50: 0x34420006  ori         $v0, $v0, 0x6
    ctx->pc = 0x32dd50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x32dd54: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x32dd54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x32dd58: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x32dd58u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x32dd5c: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x32dd5cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x32dd60: 0x3c070039  lui         $a3, 0x39
    ctx->pc = 0x32dd60u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)57 << 16));
    // 0x32dd64: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x32dd64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x32dd68: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x32dd68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x32dd6c: 0x2442cb00  addiu       $v0, $v0, -0x3500
    ctx->pc = 0x32dd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953728));
    // 0x32dd70: 0x24e7d1a8  addiu       $a3, $a3, -0x2E58
    ctx->pc = 0x32dd70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955432));
    // 0x32dd74: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x32dd74u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x32dd78: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x32dd78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x32dd7c: 0x738c3  sra         $a3, $a3, 3
    ctx->pc = 0x32dd7cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 3));
    // 0x32dd80: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x32dd80u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x32dd84: 0xaca70010  sw          $a3, 0x10($a1)
    ctx->pc = 0x32dd84u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 7));
    // 0x32dd88: 0xc48000ec  lwc1        $f0, 0xEC($a0)
    ctx->pc = 0x32dd88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32dd8c: 0xe4a0001c  swc1        $f0, 0x1C($a1)
    ctx->pc = 0x32dd8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
    // 0x32dd90: 0xdc830090  ld          $v1, 0x90($a0)
    ctx->pc = 0x32dd90u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x32dd94: 0xfca30020  sd          $v1, 0x20($a1)
    ctx->pc = 0x32dd94u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 32), GPR_U64(ctx, 3));
    // 0x32dd98: 0xdc860098  ld          $a2, 0x98($a0)
    ctx->pc = 0x32dd98u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 152)));
    // 0x32dd9c: 0xfca60028  sd          $a2, 0x28($a1)
    ctx->pc = 0x32dd9cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 40), GPR_U64(ctx, 6));
    // 0x32dda0: 0xdc8300a0  ld          $v1, 0xA0($a0)
    ctx->pc = 0x32dda0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 160)));
    // 0x32dda4: 0xfca30030  sd          $v1, 0x30($a1)
    ctx->pc = 0x32dda4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 48), GPR_U64(ctx, 3));
    // 0x32dda8: 0xdc8600a8  ld          $a2, 0xA8($a0)
    ctx->pc = 0x32dda8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 168)));
    // 0x32ddac: 0xfca60038  sd          $a2, 0x38($a1)
    ctx->pc = 0x32ddacu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 56), GPR_U64(ctx, 6));
    // 0x32ddb0: 0xdc8300b0  ld          $v1, 0xB0($a0)
    ctx->pc = 0x32ddb0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 176)));
    // 0x32ddb4: 0xfca30040  sd          $v1, 0x40($a1)
    ctx->pc = 0x32ddb4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 64), GPR_U64(ctx, 3));
    // 0x32ddb8: 0xdc8600b8  ld          $a2, 0xB8($a0)
    ctx->pc = 0x32ddb8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 184)));
    // 0x32ddbc: 0xfca60048  sd          $a2, 0x48($a1)
    ctx->pc = 0x32ddbcu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 72), GPR_U64(ctx, 6));
    // 0x32ddc0: 0xdc8300c0  ld          $v1, 0xC0($a0)
    ctx->pc = 0x32ddc0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 192)));
    // 0x32ddc4: 0xfca30050  sd          $v1, 0x50($a1)
    ctx->pc = 0x32ddc4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 80), GPR_U64(ctx, 3));
    // 0x32ddc8: 0xdc8600c8  ld          $a2, 0xC8($a0)
    ctx->pc = 0x32ddc8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 200)));
    // 0x32ddcc: 0xfca60058  sd          $a2, 0x58($a1)
    ctx->pc = 0x32ddccu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 88), GPR_U64(ctx, 6));
    // 0x32ddd0: 0x688300d7  ldl         $v1, 0xD7($a0)
    ctx->pc = 0x32ddd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 215); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x32ddd4: 0x6c8300d0  ldr         $v1, 0xD0($a0)
    ctx->pc = 0x32ddd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 208); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x32ddd8: 0x688600df  ldl         $a2, 0xDF($a0)
    ctx->pc = 0x32ddd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 223); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x32dddc: 0x6c8600d8  ldr         $a2, 0xD8($a0)
    ctx->pc = 0x32dddcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 216); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x32dde0: 0xb0a30067  sdl         $v1, 0x67($a1)
    ctx->pc = 0x32dde0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x32dde4: 0xb4a30060  sdr         $v1, 0x60($a1)
    ctx->pc = 0x32dde4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x32dde8: 0xb0a6006f  sdl         $a2, 0x6F($a1)
    ctx->pc = 0x32dde8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 111); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x32ddec: 0xb4a60068  sdr         $a2, 0x68($a1)
    ctx->pc = 0x32ddecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 104); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x32ddf0: 0x3e00008  jr          $ra
    ctx->pc = 0x32DDF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32DDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DDF0u;
        // 0x32ddf4: 0x24a20070  addiu       $v0, $a1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32DDF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32DDF8u;
}
