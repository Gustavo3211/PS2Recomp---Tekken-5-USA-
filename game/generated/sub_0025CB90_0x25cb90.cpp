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

// Function: sub_0025CB90
// Address: 0x25cb90 - 0x25d4d8
void sub_0025CB90_0x25cb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025CB90_0x25cb90");
#endif

    switch (ctx->pc) {
        case 0x25cc08u: goto label_25cc08;
        case 0x25ccb4u: goto label_25ccb4;
        case 0x25ccd8u: goto label_25ccd8;
        case 0x25ced8u: goto label_25ced8;
        case 0x25cf74u: goto label_25cf74;
        case 0x25cfa0u: goto label_25cfa0;
        case 0x25cfc0u: goto label_25cfc0;
        case 0x25d1bcu: goto label_25d1bc;
        case 0x25d3b4u: goto label_25d3b4;
        case 0x25d3f0u: goto label_25d3f0;
        default: break;
    }

    ctx->pc = 0x25cb90u;

    // 0x25cb90: 0x27bdf310  addiu       $sp, $sp, -0xCF0
    ctx->pc = 0x25cb90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294963984));
    // 0x25cb94: 0xffb00c70  sd          $s0, 0xC70($sp)
    ctx->pc = 0x25cb94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 3184), GPR_U64(ctx, 16));
    // 0x25cb98: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x25cb98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cb9c: 0xffb10c78  sd          $s1, 0xC78($sp)
    ctx->pc = 0x25cb9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 3192), GPR_U64(ctx, 17));
    // 0x25cba0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x25cba0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cba4: 0xffb20c80  sd          $s2, 0xC80($sp)
    ctx->pc = 0x25cba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 3200), GPR_U64(ctx, 18));
    // 0x25cba8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x25cba8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cbac: 0xe7b40cc0  swc1        $f20, 0xCC0($sp)
    ctx->pc = 0x25cbacu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 3264), bits); }
    // 0x25cbb0: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x25cbb0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x25cbb4: 0xffb30c88  sd          $s3, 0xC88($sp)
    ctx->pc = 0x25cbb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 3208), GPR_U64(ctx, 19));
    // 0x25cbb8: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x25cbb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x25cbbc: 0xffb40c90  sd          $s4, 0xC90($sp)
    ctx->pc = 0x25cbbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 3216), GPR_U64(ctx, 20));
    // 0x25cbc0: 0xffb50c98  sd          $s5, 0xC98($sp)
    ctx->pc = 0x25cbc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 3224), GPR_U64(ctx, 21));
    // 0x25cbc4: 0xffb60ca0  sd          $s6, 0xCA0($sp)
    ctx->pc = 0x25cbc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 3232), GPR_U64(ctx, 22));
    // 0x25cbc8: 0xffb70ca8  sd          $s7, 0xCA8($sp)
    ctx->pc = 0x25cbc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 3240), GPR_U64(ctx, 23));
    // 0x25cbcc: 0xffbe0cb0  sd          $fp, 0xCB0($sp)
    ctx->pc = 0x25cbccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 3248), GPR_U64(ctx, 30));
    // 0x25cbd0: 0xffbf0cb8  sd          $ra, 0xCB8($sp)
    ctx->pc = 0x25cbd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 3256), GPR_U64(ctx, 31));
    // 0x25cbd4: 0xe7b90ce8  swc1        $f25, 0xCE8($sp)
    ctx->pc = 0x25cbd4u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 3304), bits); }
    // 0x25cbd8: 0xe7b80ce0  swc1        $f24, 0xCE0($sp)
    ctx->pc = 0x25cbd8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 3296), bits); }
    // 0x25cbdc: 0xe7b70cd8  swc1        $f23, 0xCD8($sp)
    ctx->pc = 0x25cbdcu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 3288), bits); }
    // 0x25cbe0: 0xe7b60cd0  swc1        $f22, 0xCD0($sp)
    ctx->pc = 0x25cbe0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 3280), bits); }
    // 0x25cbe4: 0xe7b50cc8  swc1        $f21, 0xCC8($sp)
    ctx->pc = 0x25cbe4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 3272), bits); }
    // 0x25cbe8: 0x144000e4  bnez        $v0, . + 4 + (0xE4 << 2)
    ctx->pc = 0x25CBE8u;
    {
        const bool branch_taken_0x25cbe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25CBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CBE8u;
        // 0x25cbec: 0x96170004  lhu         $s7, 0x4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 23, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cbe8) {
            ctx->pc = 0x25CF7Cu;
            goto label_25cf7c;
        }
    }
    ctx->pc = 0x25CBF0u;
    // 0x25cbf0: 0x96020006  lhu         $v0, 0x6($s0)
    ctx->pc = 0x25cbf0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x25cbf4: 0x2e2102a  slt         $v0, $s7, $v0
    ctx->pc = 0x25cbf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x25cbf8: 0x54400224  bnel        $v0, $zero, . + 4 + (0x224 << 2)
    ctx->pc = 0x25CBF8u;
    {
        const bool branch_taken_0x25cbf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25cbf8) {
            ctx->pc = 0x25CBFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25CBF8u;
            // 0x25cbfc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25D48Cu;
            goto label_25d48c;
        }
    }
    ctx->pc = 0x25CC00u;
    // 0x25cc00: 0xc0474ac  jal         func_11D2B0
    ctx->pc = 0x25CC00u;
    SET_GPR_U32(ctx, 31, 0x25CC08u);
    ctx->pc = 0x25CC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CC00u;
    // 0x25cc04: 0x27a40c60  addiu       $a0, $sp, 0xC60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 3168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D2B0u, 0x25CC00u, 0x25CC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CC08u;
label_25cc08:
    // 0x25cc08: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x25cc08u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x25cc0c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x25cc0cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x25cc10: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25cc10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25cc14: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25cc14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25cc18: 0xc7a10c60  lwc1        $f1, 0xC60($sp)
    ctx->pc = 0x25cc18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 3168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25cc1c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x25cc1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x25cc20: 0x46150601  sub.s       $f24, $f0, $f21
    ctx->pc = 0x25cc20u;
    ctx->f[24] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x25cc24: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x25cc24u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x25cc28: 0x44130000  mfc1        $s3, $f0
    ctx->pc = 0x25cc28u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
    // 0x25cc2c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x25CC2Cu;
    {
        const bool branch_taken_0x25cc2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25cc2c) {
            ctx->pc = 0x25CC30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25CC2Cu;
            // 0x25cc30: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25CC40u;
            goto label_25cc40;
        }
    }
    ctx->pc = 0x25CC34u;
    // 0x25cc34: 0x6210003  bgez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x25CC34u;
    {
        const bool branch_taken_0x25cc34 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x25CC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CC34u;
        // 0x25cc38: 0x171040  sll         $v0, $s7, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cc34) {
            ctx->pc = 0x25CC44u;
            goto label_25cc44;
        }
    }
    ctx->pc = 0x25CC3Cu;
    // 0x25cc3c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x25cc3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25cc40:
    // 0x25cc40: 0x171040  sll         $v0, $s7, 1
    ctx->pc = 0x25cc40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 1));
label_25cc44:
    // 0x25cc44: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x25cc44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x25cc48: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x25cc48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x25cc4c: 0xc7808b20  lwc1        $f0, -0x74E0($gp)
    ctx->pc = 0x25cc4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25cc50: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x25cc50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x25cc54: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x25cc54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x25cc58: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x25cc58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x25cc5c: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x25cc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x25cc60: 0xaf82ca14  sw          $v0, -0x35EC($gp)
    ctx->pc = 0x25cc60u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953492), GPR_U32(ctx, 2));
    // 0x25cc64: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x25cc64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x25cc68: 0xaf83ca18  sw          $v1, -0x35E8($gp)
    ctx->pc = 0x25cc68u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953496), GPR_U32(ctx, 3));
    // 0x25cc6c: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x25cc6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25cc70: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x25cc70u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x25cc74: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x25cc74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x25cc78: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x25cc78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25cc7c: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x25cc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x25cc80: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x25cc80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x25cc84: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x25cc84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x25cc88: 0x247e0008  addiu       $fp, $v1, 0x8
    ctx->pc = 0x25cc88u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x25cc8c: 0x450000b2  bc1f        . + 4 + (0xB2 << 2)
    ctx->pc = 0x25CC8Cu;
    {
        const bool branch_taken_0x25cc8c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25CC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CC8Cu;
        // 0x25cc90: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cc8c) {
            ctx->pc = 0x25CF58u;
            goto label_25cf58;
        }
    }
    ctx->pc = 0x25CC94u;
    // 0x25cc94: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x25cc94u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x25cc98: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x25cc98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x25cc9c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25cc9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cca0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x25cca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cca4: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x25cca4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cca8: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x25cca8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ccac: 0xc097210  jal         func_25C840
    ctx->pc = 0x25CCACu;
    SET_GPR_U32(ctx, 31, 0x25CCB4u);
    ctx->pc = 0x25CCB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CCACu;
    // 0x25ccb0: 0x3a0882d  daddu       $s1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C840u, 0x25CCACu, 0x25CCB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CCB4u;
label_25ccb4:
    // 0x25ccb4: 0x144001f5  bnez        $v0, . + 4 + (0x1F5 << 2)
    ctx->pc = 0x25CCB4u;
    {
        const bool branch_taken_0x25ccb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25CCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CCB4u;
        // 0x25ccb8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ccb4) {
            ctx->pc = 0x25D48Cu;
            goto label_25d48c;
        }
    }
    ctx->pc = 0x25CCBCu;
    // 0x25ccbc: 0x12e001f2  beqz        $s7, . + 4 + (0x1F2 << 2)
    ctx->pc = 0x25CCBCu;
    {
        const bool branch_taken_0x25ccbc = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CCBCu;
        // 0x25ccc0: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ccbc) {
            ctx->pc = 0x25D488u;
            goto label_25d488;
        }
    }
    ctx->pc = 0x25CCC4u;
    // 0x25ccc4: 0xc7958b24  lwc1        $f21, -0x74DC($gp)
    ctx->pc = 0x25ccc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x25ccc8: 0x27b30c40  addiu       $s3, $sp, 0xC40
    ctx->pc = 0x25ccc8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 3136));
    // 0x25cccc: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x25ccccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x25ccd0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25ccd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25ccd4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x25ccd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_25ccd8:
    // 0x25ccd8: 0x161040  sll         $v0, $s6, 1
    ctx->pc = 0x25ccd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 1));
    // 0x25ccdc: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x25ccdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x25cce0: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x25cce0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25cce4: 0x28430009  slti        $v1, $v0, 0x9
    ctx->pc = 0x25cce4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x25cce8: 0x50600087  beql        $v1, $zero, . + 4 + (0x87 << 2)
    ctx->pc = 0x25CCE8u;
    {
        const bool branch_taken_0x25cce8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25cce8) {
            ctx->pc = 0x25CCECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25CCE8u;
            // 0x25ccec: 0x86220000  lh          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25CF08u;
            goto label_25cf08;
        }
    }
    ctx->pc = 0x25CCF0u;
    // 0x25ccf0: 0x28420005  slti        $v0, $v0, 0x5
    ctx->pc = 0x25ccf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x25ccf4: 0x14400084  bnez        $v0, . + 4 + (0x84 << 2)
    ctx->pc = 0x25CCF4u;
    {
        const bool branch_taken_0x25ccf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25CCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CCF4u;
        // 0x25ccf8: 0x86220000  lh          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ccf4) {
            ctx->pc = 0x25CF08u;
            goto label_25cf08;
        }
    }
    ctx->pc = 0x25CCFCu;
    // 0x25ccfc: 0xc7818b28  lwc1        $f1, -0x74D8($gp)
    ctx->pc = 0x25ccfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25cd00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25cd00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25cd04: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x25cd04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x25cd08: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x25cd08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x25cd0c: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x25cd0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25cd10: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x25CD10u;
    {
        const bool branch_taken_0x25cd10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25CD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CD10u;
        // 0x25cd14: 0x27a40c20  addiu       $a0, $sp, 0xC20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 3104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cd10) {
            ctx->pc = 0x25CD28u;
            goto label_25cd28;
        }
    }
    ctx->pc = 0x25CD18u;
    // 0x25cd18: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x25cd18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x25cd1c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x25CD1Cu;
    {
        const bool branch_taken_0x25cd1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CD1Cu;
        // 0x25cd20: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cd1c) {
            ctx->pc = 0x25CD30u;
            goto label_25cd30;
        }
    }
    ctx->pc = 0x25CD24u;
    // 0x25cd24: 0x0  nop
    ctx->pc = 0x25cd24u;
    // NOP
label_25cd28:
    // 0x25cd28: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x25cd28u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x25cd2c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x25cd2cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25cd30:
    // 0x25cd30: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x25cd30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x25cd34: 0x48a2f800  qmtc2.ni    $v0, $vf31
    ctx->pc = 0x25cd34u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x25cd38: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x25cd38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x25cd3c: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x25cd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x25cd40: 0xd85d0000  lqc2        $vf29, 0x0($v0)
    ctx->pc = 0x25cd40u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(FAST_READ128(0x3AB6E0u));
    // 0x25cd44: 0x4a3ffb3d  vmr32.w     $vf31, $vf31
    ctx->pc = 0x25cd44u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x25cd48: 0x4a9f0700  vaddx.y     $vf28, $vf0, $vf31x
    ctx->pc = 0x25cd48u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x25cd4c: 0x4b1fffea  vmul.x      $vf31, $vf31, $vf31
    ctx->pc = 0x25cd4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x25cd50: 0x4bffef5b  vmulw.xyzw  $vf29, $vf29, $vf31w
    ctx->pc = 0x25cd50u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x25cd54: 0x4bffef58  vmulx.xyzw  $vf29, $vf29, $vf31x
    ctx->pc = 0x25cd54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x25cd58: 0x4bdfef58  vmulx.xyz   $vf29, $vf29, $vf31x
    ctx->pc = 0x25cd58u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x25cd5c: 0x4a9de703  vaddw.y     $vf28, $vf28, $vf29w
    ctx->pc = 0x25cd5cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x25cd60: 0x4b9fef58  vmulx.xy    $vf29, $vf29, $vf31x
    ctx->pc = 0x25cd60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x25cd64: 0x4a9de702  vaddz.y     $vf28, $vf28, $vf29z
    ctx->pc = 0x25cd64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x25cd68: 0x4b1fef58  vmulx.x     $vf29, $vf29, $vf31x
    ctx->pc = 0x25cd68u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x25cd6c: 0x4a9de701  vaddy.y     $vf28, $vf28, $vf29y
    ctx->pc = 0x25cd6cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x25cd70: 0x4a9de700  vaddx.y     $vf28, $vf28, $vf29x
    ctx->pc = 0x25cd70u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x25cd74: 0x4a80003f  vaddaw.y    $ACC, $vf0, $vf0w
    ctx->pc = 0x25cd74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x25cd78: 0x4a9ce74d  vmsuby.y    $vf29, $vf28, $vf28y
    ctx->pc = 0x25cd78u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x25cd7c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x25CD7Cu;
    {
        const bool branch_taken_0x25cd7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CD7Cu;
        // 0x25cd80: 0x4abd03bd  .word       0x4ABD03BD                   # vsqrt       $Q, $vf29y # 00200000 <InstrIdType: R5900_COP2_SPECIAL2> (Delay Slot)
        { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,1))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cd7c) {
            ctx->pc = 0x25CD90u;
            goto label_25cd90;
        }
    }
    ctx->pc = 0x25CD84u;
    // 0x25cd84: 0x4a0003bf  vwaitq
    ctx->pc = 0x25cd84u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x25cd88: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25CD88u;
    {
        const bool branch_taken_0x25cd88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CD88u;
        // 0x25cd8c: 0x4b000724  vsubq.x     $vf28, $vf0, $Q (Delay Slot)
        { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cd88) {
            ctx->pc = 0x25CD98u;
            goto label_25cd98;
        }
    }
    ctx->pc = 0x25CD90u;
label_25cd90:
    // 0x25cd90: 0x4a0003bf  vwaitq
    ctx->pc = 0x25cd90u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x25cd94: 0x4b000720  vaddq.x     $vf28, $vf0, $Q
    ctx->pc = 0x25cd94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_25cd98:
    // 0x25cd98: 0x4ae0012c  vsub.yzw    $vf4, $vf0, $vf0
    ctx->pc = 0x25cd98u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x25cd9c: 0x4b20016c  vsub.xw     $vf5, $vf0, $vf0
    ctx->pc = 0x25cd9cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x25cda0: 0x4b2001ac  vsub.xw     $vf6, $vf0, $vf0
    ctx->pc = 0x25cda0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x25cda4: 0x4b000103  vaddw.x     $vf4, $vf0, $vf0w
    ctx->pc = 0x25cda4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x25cda8: 0x4a9c0168  vadd.y      $vf5, $vf0, $vf28
    ctx->pc = 0x25cda8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[28]); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x25cdac: 0x4a9c0184  vsubx.y     $vf6, $vf0, $vf28x
    ctx->pc = 0x25cdacu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x25cdb0: 0x4a5c0140  vaddx.z     $vf5, $vf0, $vf28x
    ctx->pc = 0x25cdb0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x25cdb4: 0x4a5c0181  vaddy.z     $vf6, $vf0, $vf28y
    ctx->pc = 0x25cdb4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x25cdb8: 0xf8800030  sqc2        $vf0, 0x30($a0)
    ctx->pc = 0x25cdb8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x25cdbc: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x25cdbcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x25cdc0: 0xf8850010  sqc2        $vf5, 0x10($a0)
    ctx->pc = 0x25cdc0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x25cdc4: 0xf8860020  sqc2        $vf6, 0x20($a0)
    ctx->pc = 0x25cdc4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x25cdc8: 0x86220002  lh          $v0, 0x2($s1)
    ctx->pc = 0x25cdc8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x25cdcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25cdccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25cdd0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x25cdd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x25cdd4: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x25cdd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x25cdd8: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x25cdd8u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x25cddc: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x25cddcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25cde0: 0xd8850010  lqc2        $vf5, 0x10($a0)
    ctx->pc = 0x25cde0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x25cde4: 0xd8860020  lqc2        $vf6, 0x20($a0)
    ctx->pc = 0x25cde4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x25cde8: 0xd8870030  lqc2        $vf7, 0x30($a0)
    ctx->pc = 0x25cde8u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x25cdec: 0x46160834  c.lt.s      $f1, $f22
    ctx->pc = 0x25cdecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25cdf0: 0xc7818b2c  lwc1        $f1, -0x74D4($gp)
    ctx->pc = 0x25cdf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25cdf4: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x25CDF4u;
    {
        const bool branch_taken_0x25cdf4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25cdf4) {
            ctx->pc = 0x25CDF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25CDF4u;
            // 0x25cdf8: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x25CE08u;
            goto label_25ce08;
        }
    }
    ctx->pc = 0x25CDFCu;
    // 0x25cdfc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x25cdfcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x25ce00: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x25CE00u;
    {
        const bool branch_taken_0x25ce00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CE00u;
        // 0x25ce04: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ce00) {
            ctx->pc = 0x25CE0Cu;
            goto label_25ce0c;
        }
    }
    ctx->pc = 0x25CE08u;
label_25ce08:
    // 0x25ce08: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x25ce08u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25ce0c:
    // 0x25ce0c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x25ce0cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x25ce10: 0x48a2f800  qmtc2.ni    $v0, $vf31
    ctx->pc = 0x25ce10u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x25ce14: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x25ce14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x25ce18: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x25ce18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x25ce1c: 0xd85d0000  lqc2        $vf29, 0x0($v0)
    ctx->pc = 0x25ce1cu;
    ctx->vu0_vf[29] = _mm_castsi128_ps(FAST_READ128(0x3AB6E0u));
    // 0x25ce20: 0x4a3ffb3d  vmr32.w     $vf31, $vf31
    ctx->pc = 0x25ce20u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x25ce24: 0x4a9f0700  vaddx.y     $vf28, $vf0, $vf31x
    ctx->pc = 0x25ce24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x25ce28: 0x4b1fffea  vmul.x      $vf31, $vf31, $vf31
    ctx->pc = 0x25ce28u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x25ce2c: 0x4bffef5b  vmulw.xyzw  $vf29, $vf29, $vf31w
    ctx->pc = 0x25ce2cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x25ce30: 0x4bffef58  vmulx.xyzw  $vf29, $vf29, $vf31x
    ctx->pc = 0x25ce30u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x25ce34: 0x4bdfef58  vmulx.xyz   $vf29, $vf29, $vf31x
    ctx->pc = 0x25ce34u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x25ce38: 0x4a9de703  vaddw.y     $vf28, $vf28, $vf29w
    ctx->pc = 0x25ce38u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x25ce3c: 0x4b9fef58  vmulx.xy    $vf29, $vf29, $vf31x
    ctx->pc = 0x25ce3cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x25ce40: 0x4a9de702  vaddz.y     $vf28, $vf28, $vf29z
    ctx->pc = 0x25ce40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x25ce44: 0x4b1fef58  vmulx.x     $vf29, $vf29, $vf31x
    ctx->pc = 0x25ce44u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x25ce48: 0x4a9de701  vaddy.y     $vf28, $vf28, $vf29y
    ctx->pc = 0x25ce48u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x25ce4c: 0x4a9de700  vaddx.y     $vf28, $vf28, $vf29x
    ctx->pc = 0x25ce4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x25ce50: 0x4a80003f  vaddaw.y    $ACC, $vf0, $vf0w
    ctx->pc = 0x25ce50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x25ce54: 0x4a9ce74d  vmsuby.y    $vf29, $vf28, $vf28y
    ctx->pc = 0x25ce54u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x25ce58: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x25CE58u;
    {
        const bool branch_taken_0x25ce58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CE58u;
        // 0x25ce5c: 0x4abd03bd  .word       0x4ABD03BD                   # vsqrt       $Q, $vf29y # 00200000 <InstrIdType: R5900_COP2_SPECIAL2> (Delay Slot)
        { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,1))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ce58) {
            ctx->pc = 0x25CE70u;
            goto label_25ce70;
        }
    }
    ctx->pc = 0x25CE60u;
    // 0x25ce60: 0x4a0003bf  vwaitq
    ctx->pc = 0x25ce60u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x25ce64: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x25CE64u;
    {
        const bool branch_taken_0x25ce64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CE64u;
        // 0x25ce68: 0x4b000724  vsubq.x     $vf28, $vf0, $Q (Delay Slot)
        { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ce64) {
            ctx->pc = 0x25CE78u;
            goto label_25ce78;
        }
    }
    ctx->pc = 0x25CE6Cu;
    // 0x25ce6c: 0x0  nop
    ctx->pc = 0x25ce6cu;
    // NOP
label_25ce70:
    // 0x25ce70: 0x4a0003bf  vwaitq
    ctx->pc = 0x25ce70u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x25ce74: 0x4b000720  vaddq.x     $vf28, $vf0, $Q
    ctx->pc = 0x25ce74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_25ce78:
    // 0x25ce78: 0x4a5c0701  vaddy.z     $vf28, $vf0, $vf28y
    ctx->pc = 0x25ce78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x25ce7c: 0x4b1c0741  vaddy.x     $vf29, $vf0, $vf28y
    ctx->pc = 0x25ce7cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x25ce80: 0x4a5c0744  vsubx.z     $vf29, $vf0, $vf28x
    ctx->pc = 0x25ce80u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x25ce84: 0x4b44e1be  vmulaz.xz   $ACC, $vf28, $vf4z
    ctx->pc = 0x25ce84u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x25ce88: 0x4b44e908  vmaddx.xz   $vf4, $vf29, $vf4x
    ctx->pc = 0x25ce88u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x25ce8c: 0x4b45e1be  vmulaz.xz   $ACC, $vf28, $vf5z
    ctx->pc = 0x25ce8cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x25ce90: 0x4b45e948  vmaddx.xz   $vf5, $vf29, $vf5x
    ctx->pc = 0x25ce90u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x25ce94: 0x4b46e1be  vmulaz.xz   $ACC, $vf28, $vf6z
    ctx->pc = 0x25ce94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x25ce98: 0x4b46e988  vmaddx.xz   $vf6, $vf29, $vf6x
    ctx->pc = 0x25ce98u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x25ce9c: 0x4b47e1be  vmulaz.xz   $ACC, $vf28, $vf7z
    ctx->pc = 0x25ce9cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x25cea0: 0x4b47e9c8  vmaddx.xz   $vf7, $vf29, $vf7x
    ctx->pc = 0x25cea0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x25cea4: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x25cea4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x25cea8: 0xf8850010  sqc2        $vf5, 0x10($a0)
    ctx->pc = 0x25cea8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x25ceac: 0xf8860020  sqc2        $vf6, 0x20($a0)
    ctx->pc = 0x25ceacu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x25ceb0: 0xf8870030  sqc2        $vf7, 0x30($a0)
    ctx->pc = 0x25ceb0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x25ceb4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x25ceb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x25ceb8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25ceb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25cebc: 0x86220004  lh          $v0, 0x4($s1)
    ctx->pc = 0x25cebcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x25cec0: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x25cec0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cec4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x25cec4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x25cec8: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x25cec8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x25cecc: 0x46156302  mul.s       $f12, $f12, $f21
    ctx->pc = 0x25ceccu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
    // 0x25ced0: 0xc0474d0  jal         func_11D340
    ctx->pc = 0x25CED0u;
    SET_GPR_U32(ctx, 31, 0x25CED8u);
    ctx->pc = 0x25CED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CED0u;
    // 0x25ced4: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D340u, 0x25CED0u, 0x25CED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CED8u;
label_25ced8:
    // 0x25ced8: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x25ced8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cedc: 0xda700000  lqc2        $vf16, 0x0($s3)
    ctx->pc = 0x25cedcu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x25cee0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x25cee0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x25cee4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x25cee4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x25cee8: 0x4bc18418  vmulx.xyz   $vf16, $vf16, $vf1x
    ctx->pc = 0x25cee8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x25ceec: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x25ceecu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x25cef0: 0x4614a01a  mula.s      $f20, $f20
    ctx->pc = 0x25cef0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[20], ctx->f[20]));
    // 0x25cef4: 0x4600001d  msub.s      $f0, $f0, $f0
    ctx->pc = 0x25cef4u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x25cef8: 0x46000004  c1          0x4
    ctx->pc = 0x25cef8u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x25cefc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x25CEFCu;
    {
        const bool branch_taken_0x25cefc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CEFCu;
        // 0x25cf00: 0xe600000c  swc1        $f0, 0xC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cefc) {
            ctx->pc = 0x25CF38u;
            goto label_25cf38;
        }
    }
    ctx->pc = 0x25CF04u;
    // 0x25cf04: 0x0  nop
    ctx->pc = 0x25cf04u;
    // NOP
label_25cf08:
    // 0x25cf08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25cf08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25cf0c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x25cf0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x25cf10: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x25cf10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x25cf14: 0x86220002  lh          $v0, 0x2($s1)
    ctx->pc = 0x25cf14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x25cf18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25cf18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25cf1c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x25cf1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x25cf20: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x25cf20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x25cf24: 0x86220004  lh          $v0, 0x4($s1)
    ctx->pc = 0x25cf24u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x25cf28: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x25cf28u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x25cf2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25cf2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25cf30: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x25cf30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x25cf34: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x25cf34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_25cf38:
    // 0x25cf38: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x25cf38u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x25cf3c: 0x26310006  addiu       $s1, $s1, 0x6
    ctx->pc = 0x25cf3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 6));
    // 0x25cf40: 0x2d7102a  slt         $v0, $s6, $s7
    ctx->pc = 0x25cf40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x25cf44: 0x1440ff64  bnez        $v0, . + 4 + (-0x9C << 2)
    ctx->pc = 0x25CF44u;
    {
        const bool branch_taken_0x25cf44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25CF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CF44u;
        // 0x25cf48: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cf44) {
            ctx->pc = 0x25CCD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25ccd8;
        }
    }
    ctx->pc = 0x25CF4Cu;
    // 0x25cf4c: 0x1000014f  b           . + 4 + (0x14F << 2)
    ctx->pc = 0x25CF4Cu;
    {
        const bool branch_taken_0x25cf4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CF4Cu;
        // 0x25cf50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cf4c) {
            ctx->pc = 0x25D48Cu;
            goto label_25d48c;
        }
    }
    ctx->pc = 0x25CF54u;
    // 0x25cf54: 0x0  nop
    ctx->pc = 0x25cf54u;
    // NOP
label_25cf58:
    // 0x25cf58: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x25cf58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cf5c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25cf5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cf60: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x25cf60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cf64: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x25cf64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cf68: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x25cf68u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cf6c: 0xc097210  jal         func_25C840
    ctx->pc = 0x25CF6Cu;
    SET_GPR_U32(ctx, 31, 0x25CF74u);
    ctx->pc = 0x25CF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CF6Cu;
    // 0x25cf70: 0x3a0882d  daddu       $s1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C840u, 0x25CF6Cu, 0x25CF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CF74u;
label_25cf74:
    // 0x25cf74: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25CF74u;
    {
        const bool branch_taken_0x25cf74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CF74u;
        // 0x25cf78: 0x27b40600  addiu       $s4, $sp, 0x600 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 1536));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cf74) {
            ctx->pc = 0x25CF88u;
            goto label_25cf88;
        }
    }
    ctx->pc = 0x25CF7Cu;
label_25cf7c:
    // 0x25cf7c: 0x10000143  b           . + 4 + (0x143 << 2)
    ctx->pc = 0x25CF7Cu;
    {
        const bool branch_taken_0x25cf7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CF7Cu;
        // 0x25cf80: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cf7c) {
            ctx->pc = 0x25D48Cu;
            goto label_25d48c;
        }
    }
    ctx->pc = 0x25CF84u;
    // 0x25cf84: 0x0  nop
    ctx->pc = 0x25cf84u;
    // NOP
label_25cf88:
    // 0x25cf88: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25cf88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cf8c: 0x26670001  addiu       $a3, $s3, 0x1
    ctx->pc = 0x25cf8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x25cf90: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x25cf90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cf94: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x25cf94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cf98: 0xc097210  jal         func_25C840
    ctx->pc = 0x25CF98u;
    SET_GPR_U32(ctx, 31, 0x25CFA0u);
    ctx->pc = 0x25CF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CF98u;
    // 0x25cf9c: 0x2e0402d  daddu       $t0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C840u, 0x25CF98u, 0x25CFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CFA0u;
label_25cfa0:
    // 0x25cfa0: 0x12e00139  beqz        $s7, . + 4 + (0x139 << 2)
    ctx->pc = 0x25CFA0u;
    {
        const bool branch_taken_0x25cfa0 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CFA0u;
        // 0x25cfa4: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cfa0) {
            ctx->pc = 0x25D488u;
            goto label_25d488;
        }
    }
    ctx->pc = 0x25CFA8u;
    // 0x25cfa8: 0xc7968b30  lwc1        $f22, -0x74D0($gp)
    ctx->pc = 0x25cfa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x25cfac: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x25cfacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x25cfb0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x25cfb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x25cfb4: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x25cfb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x25cfb8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25cfb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25cfbc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x25cfbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_25cfc0:
    // 0x25cfc0: 0x161040  sll         $v0, $s6, 1
    ctx->pc = 0x25cfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 1));
    // 0x25cfc4: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x25cfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x25cfc8: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x25cfc8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25cfcc: 0x28430009  slti        $v1, $v0, 0x9
    ctx->pc = 0x25cfccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x25cfd0: 0x50600109  beql        $v1, $zero, . + 4 + (0x109 << 2)
    ctx->pc = 0x25CFD0u;
    {
        const bool branch_taken_0x25cfd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25cfd0) {
            ctx->pc = 0x25CFD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25CFD0u;
            // 0x25cfd4: 0x86220000  lh          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25D3F8u;
            goto label_25d3f8;
        }
    }
    ctx->pc = 0x25CFD8u;
    // 0x25cfd8: 0x28420005  slti        $v0, $v0, 0x5
    ctx->pc = 0x25cfd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x25cfdc: 0x14400106  bnez        $v0, . + 4 + (0x106 << 2)
    ctx->pc = 0x25CFDCu;
    {
        const bool branch_taken_0x25cfdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25CFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CFDCu;
        // 0x25cfe0: 0x86220000  lh          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cfdc) {
            ctx->pc = 0x25D3F8u;
            goto label_25d3f8;
        }
    }
    ctx->pc = 0x25CFE4u;
    // 0x25cfe4: 0xc7818b34  lwc1        $f1, -0x74CC($gp)
    ctx->pc = 0x25cfe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25cfe8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25cfe8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25cfec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x25cfecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x25cff0: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x25cff0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x25cff4: 0x46170034  c.lt.s      $f0, $f23
    ctx->pc = 0x25cff4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25cff8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x25CFF8u;
    {
        const bool branch_taken_0x25cff8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25CFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CFF8u;
        // 0x25cffc: 0x27b00c20  addiu       $s0, $sp, 0xC20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 3104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cff8) {
            ctx->pc = 0x25D010u;
            goto label_25d010;
        }
    }
    ctx->pc = 0x25D000u;
    // 0x25d000: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x25d000u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x25d004: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x25D004u;
    {
        const bool branch_taken_0x25d004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D004u;
        // 0x25d008: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d004) {
            ctx->pc = 0x25D018u;
            goto label_25d018;
        }
    }
    ctx->pc = 0x25D00Cu;
    // 0x25d00c: 0x0  nop
    ctx->pc = 0x25d00cu;
    // NOP
label_25d010:
    // 0x25d010: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x25d010u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x25d014: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x25d014u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25d018:
    // 0x25d018: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x25d018u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x25d01c: 0x48a2f800  qmtc2.ni    $v0, $vf31
    ctx->pc = 0x25d01cu;
    ctx->vu0_vf[31] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x25d020: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x25d020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x25d024: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x25d024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x25d028: 0xd85d0000  lqc2        $vf29, 0x0($v0)
    ctx->pc = 0x25d028u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(FAST_READ128(0x3AB6E0u));
    // 0x25d02c: 0x4a3ffb3d  vmr32.w     $vf31, $vf31
    ctx->pc = 0x25d02cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x25d030: 0x4a9f0700  vaddx.y     $vf28, $vf0, $vf31x
    ctx->pc = 0x25d030u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x25d034: 0x4b1fffea  vmul.x      $vf31, $vf31, $vf31
    ctx->pc = 0x25d034u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x25d038: 0x4bffef5b  vmulw.xyzw  $vf29, $vf29, $vf31w
    ctx->pc = 0x25d038u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x25d03c: 0x4bffef58  vmulx.xyzw  $vf29, $vf29, $vf31x
    ctx->pc = 0x25d03cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x25d040: 0x4bdfef58  vmulx.xyz   $vf29, $vf29, $vf31x
    ctx->pc = 0x25d040u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x25d044: 0x4a9de703  vaddw.y     $vf28, $vf28, $vf29w
    ctx->pc = 0x25d044u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x25d048: 0x4b9fef58  vmulx.xy    $vf29, $vf29, $vf31x
    ctx->pc = 0x25d048u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x25d04c: 0x4a9de702  vaddz.y     $vf28, $vf28, $vf29z
    ctx->pc = 0x25d04cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x25d050: 0x4b1fef58  vmulx.x     $vf29, $vf29, $vf31x
    ctx->pc = 0x25d050u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x25d054: 0x4a9de701  vaddy.y     $vf28, $vf28, $vf29y
    ctx->pc = 0x25d054u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x25d058: 0x4a9de700  vaddx.y     $vf28, $vf28, $vf29x
    ctx->pc = 0x25d058u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x25d05c: 0x4a80003f  vaddaw.y    $ACC, $vf0, $vf0w
    ctx->pc = 0x25d05cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x25d060: 0x4a9ce74d  vmsuby.y    $vf29, $vf28, $vf28y
    ctx->pc = 0x25d060u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x25d064: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x25D064u;
    {
        const bool branch_taken_0x25d064 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D064u;
        // 0x25d068: 0x4abd03bd  .word       0x4ABD03BD                   # vsqrt       $Q, $vf29y # 00200000 <InstrIdType: R5900_COP2_SPECIAL2> (Delay Slot)
        { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,1))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d064) {
            ctx->pc = 0x25D078u;
            goto label_25d078;
        }
    }
    ctx->pc = 0x25D06Cu;
    // 0x25d06c: 0x4a0003bf  vwaitq
    ctx->pc = 0x25d06cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x25d070: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25D070u;
    {
        const bool branch_taken_0x25d070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D070u;
        // 0x25d074: 0x4b000724  vsubq.x     $vf28, $vf0, $Q (Delay Slot)
        { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d070) {
            ctx->pc = 0x25D080u;
            goto label_25d080;
        }
    }
    ctx->pc = 0x25D078u;
label_25d078:
    // 0x25d078: 0x4a0003bf  vwaitq
    ctx->pc = 0x25d078u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x25d07c: 0x4b000720  vaddq.x     $vf28, $vf0, $Q
    ctx->pc = 0x25d07cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_25d080:
    // 0x25d080: 0x4ae0012c  vsub.yzw    $vf4, $vf0, $vf0
    ctx->pc = 0x25d080u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x25d084: 0x4b20016c  vsub.xw     $vf5, $vf0, $vf0
    ctx->pc = 0x25d084u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x25d088: 0x4b2001ac  vsub.xw     $vf6, $vf0, $vf0
    ctx->pc = 0x25d088u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x25d08c: 0x4b000103  vaddw.x     $vf4, $vf0, $vf0w
    ctx->pc = 0x25d08cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x25d090: 0x4a9c0168  vadd.y      $vf5, $vf0, $vf28
    ctx->pc = 0x25d090u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[28]); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x25d094: 0x4a9c0184  vsubx.y     $vf6, $vf0, $vf28x
    ctx->pc = 0x25d094u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x25d098: 0x4a5c0140  vaddx.z     $vf5, $vf0, $vf28x
    ctx->pc = 0x25d098u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x25d09c: 0x4a5c0181  vaddy.z     $vf6, $vf0, $vf28y
    ctx->pc = 0x25d09cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x25d0a0: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x25d0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x25d0a4: 0xfa040000  sqc2        $vf4, 0x0($s0)
    ctx->pc = 0x25d0a4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x25d0a8: 0xfa050010  sqc2        $vf5, 0x10($s0)
    ctx->pc = 0x25d0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x25d0ac: 0xfa060020  sqc2        $vf6, 0x20($s0)
    ctx->pc = 0x25d0acu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x25d0b0: 0x86220002  lh          $v0, 0x2($s1)
    ctx->pc = 0x25d0b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x25d0b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25d0b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25d0b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x25d0b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x25d0bc: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x25d0bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x25d0c0: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x25d0c0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x25d0c4: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x25d0c4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25d0c8: 0xda050010  lqc2        $vf5, 0x10($s0)
    ctx->pc = 0x25d0c8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x25d0cc: 0xda060020  lqc2        $vf6, 0x20($s0)
    ctx->pc = 0x25d0ccu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x25d0d0: 0xda070030  lqc2        $vf7, 0x30($s0)
    ctx->pc = 0x25d0d0u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x25d0d4: 0x46170834  c.lt.s      $f1, $f23
    ctx->pc = 0x25d0d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25d0d8: 0xc7818b38  lwc1        $f1, -0x74C8($gp)
    ctx->pc = 0x25d0d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25d0dc: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x25D0DCu;
    {
        const bool branch_taken_0x25d0dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25d0dc) {
            ctx->pc = 0x25D0E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25D0DCu;
            // 0x25d0e0: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x25D0F0u;
            goto label_25d0f0;
        }
    }
    ctx->pc = 0x25D0E4u;
    // 0x25d0e4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x25d0e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x25d0e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x25D0E8u;
    {
        const bool branch_taken_0x25d0e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D0E8u;
        // 0x25d0ec: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d0e8) {
            ctx->pc = 0x25D0F4u;
            goto label_25d0f4;
        }
    }
    ctx->pc = 0x25D0F0u;
label_25d0f0:
    // 0x25d0f0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x25d0f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25d0f4:
    // 0x25d0f4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x25d0f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x25d0f8: 0x48a2f800  qmtc2.ni    $v0, $vf31
    ctx->pc = 0x25d0f8u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x25d0fc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x25d0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x25d100: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x25d100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x25d104: 0xd85d0000  lqc2        $vf29, 0x0($v0)
    ctx->pc = 0x25d104u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(FAST_READ128(0x3AB6E0u));
    // 0x25d108: 0x4a3ffb3d  vmr32.w     $vf31, $vf31
    ctx->pc = 0x25d108u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x25d10c: 0x4a9f0700  vaddx.y     $vf28, $vf0, $vf31x
    ctx->pc = 0x25d10cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x25d110: 0x4b1fffea  vmul.x      $vf31, $vf31, $vf31
    ctx->pc = 0x25d110u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x25d114: 0x4bffef5b  vmulw.xyzw  $vf29, $vf29, $vf31w
    ctx->pc = 0x25d114u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x25d118: 0x4bffef58  vmulx.xyzw  $vf29, $vf29, $vf31x
    ctx->pc = 0x25d118u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x25d11c: 0x4bdfef58  vmulx.xyz   $vf29, $vf29, $vf31x
    ctx->pc = 0x25d11cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x25d120: 0x4a9de703  vaddw.y     $vf28, $vf28, $vf29w
    ctx->pc = 0x25d120u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x25d124: 0x4b9fef58  vmulx.xy    $vf29, $vf29, $vf31x
    ctx->pc = 0x25d124u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x25d128: 0x4a9de702  vaddz.y     $vf28, $vf28, $vf29z
    ctx->pc = 0x25d128u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x25d12c: 0x4b1fef58  vmulx.x     $vf29, $vf29, $vf31x
    ctx->pc = 0x25d12cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x25d130: 0x4a9de701  vaddy.y     $vf28, $vf28, $vf29y
    ctx->pc = 0x25d130u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x25d134: 0x4a9de700  vaddx.y     $vf28, $vf28, $vf29x
    ctx->pc = 0x25d134u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x25d138: 0x4a80003f  vaddaw.y    $ACC, $vf0, $vf0w
    ctx->pc = 0x25d138u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x25d13c: 0x4a9ce74d  vmsuby.y    $vf29, $vf28, $vf28y
    ctx->pc = 0x25d13cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x25d140: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x25D140u;
    {
        const bool branch_taken_0x25d140 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D140u;
        // 0x25d144: 0x4abd03bd  .word       0x4ABD03BD                   # vsqrt       $Q, $vf29y # 00200000 <InstrIdType: R5900_COP2_SPECIAL2> (Delay Slot)
        { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,1))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d140) {
            ctx->pc = 0x25D158u;
            goto label_25d158;
        }
    }
    ctx->pc = 0x25D148u;
    // 0x25d148: 0x4a0003bf  vwaitq
    ctx->pc = 0x25d148u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x25d14c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x25D14Cu;
    {
        const bool branch_taken_0x25d14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D14Cu;
        // 0x25d150: 0x4b000724  vsubq.x     $vf28, $vf0, $Q (Delay Slot)
        { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d14c) {
            ctx->pc = 0x25D160u;
            goto label_25d160;
        }
    }
    ctx->pc = 0x25D154u;
    // 0x25d154: 0x0  nop
    ctx->pc = 0x25d154u;
    // NOP
label_25d158:
    // 0x25d158: 0x4a0003bf  vwaitq
    ctx->pc = 0x25d158u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x25d15c: 0x4b000720  vaddq.x     $vf28, $vf0, $Q
    ctx->pc = 0x25d15cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_25d160:
    // 0x25d160: 0x4a5c0701  vaddy.z     $vf28, $vf0, $vf28y
    ctx->pc = 0x25d160u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x25d164: 0x4b1c0741  vaddy.x     $vf29, $vf0, $vf28y
    ctx->pc = 0x25d164u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x25d168: 0x4a5c0744  vsubx.z     $vf29, $vf0, $vf28x
    ctx->pc = 0x25d168u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x25d16c: 0x4b44e1be  vmulaz.xz   $ACC, $vf28, $vf4z
    ctx->pc = 0x25d16cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x25d170: 0x4b44e908  vmaddx.xz   $vf4, $vf29, $vf4x
    ctx->pc = 0x25d170u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x25d174: 0x4b45e1be  vmulaz.xz   $ACC, $vf28, $vf5z
    ctx->pc = 0x25d174u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x25d178: 0x4b45e948  vmaddx.xz   $vf5, $vf29, $vf5x
    ctx->pc = 0x25d178u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x25d17c: 0x4b46e1be  vmulaz.xz   $ACC, $vf28, $vf6z
    ctx->pc = 0x25d17cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x25d180: 0x4b46e988  vmaddx.xz   $vf6, $vf29, $vf6x
    ctx->pc = 0x25d180u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x25d184: 0x4b47e1be  vmulaz.xz   $ACC, $vf28, $vf7z
    ctx->pc = 0x25d184u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x25d188: 0x4b47e9c8  vmaddx.xz   $vf7, $vf29, $vf7x
    ctx->pc = 0x25d188u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x25d18c: 0xfa040000  sqc2        $vf4, 0x0($s0)
    ctx->pc = 0x25d18cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x25d190: 0xfa050010  sqc2        $vf5, 0x10($s0)
    ctx->pc = 0x25d190u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x25d194: 0xfa060020  sqc2        $vf6, 0x20($s0)
    ctx->pc = 0x25d194u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x25d198: 0xfa070030  sqc2        $vf7, 0x30($s0)
    ctx->pc = 0x25d198u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x25d19c: 0x86220004  lh          $v0, 0x4($s1)
    ctx->pc = 0x25d19cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x25d1a0: 0x27b50c00  addiu       $s5, $sp, 0xC00
    ctx->pc = 0x25d1a0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 3072));
    // 0x25d1a4: 0x27b30c40  addiu       $s3, $sp, 0xC40
    ctx->pc = 0x25d1a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 3136));
    // 0x25d1a8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x25d1a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x25d1ac: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x25d1acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x25d1b0: 0x46166302  mul.s       $f12, $f12, $f22
    ctx->pc = 0x25d1b0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[22]);
    // 0x25d1b4: 0xc0474d0  jal         func_11D340
    ctx->pc = 0x25D1B4u;
    SET_GPR_U32(ctx, 31, 0x25D1BCu);
    ctx->pc = 0x25D1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D1B4u;
    // 0x25d1b8: 0x46196302  mul.s       $f12, $f12, $f25 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[25]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D340u, 0x25D1B4u, 0x25D1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D1BCu;
label_25d1bc:
    // 0x25d1bc: 0x2a0182d  daddu       $v1, $s5, $zero
    ctx->pc = 0x25d1bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d1c0: 0xda700000  lqc2        $vf16, 0x0($s3)
    ctx->pc = 0x25d1c0u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x25d1c4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x25d1c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x25d1c8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x25d1c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x25d1cc: 0x4bc18418  vmulx.xyz   $vf16, $vf16, $vf1x
    ctx->pc = 0x25d1ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x25d1d0: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x25d1d0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x25d1d4: 0x4614a01a  mula.s      $f20, $f20
    ctx->pc = 0x25d1d4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[20], ctx->f[20]));
    // 0x25d1d8: 0x4600001d  msub.s      $f0, $f0, $f0
    ctx->pc = 0x25d1d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x25d1dc: 0x46000004  c1          0x4
    ctx->pc = 0x25d1dcu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x25d1e0: 0xc7818b3c  lwc1        $f1, -0x74C4($gp)
    ctx->pc = 0x25d1e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25d1e4: 0xe6a0000c  swc1        $f0, 0xC($s5)
    ctx->pc = 0x25d1e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
    // 0x25d1e8: 0x86820000  lh          $v0, 0x0($s4)
    ctx->pc = 0x25d1e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x25d1ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25d1ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25d1f0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x25d1f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x25d1f4: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x25d1f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x25d1f8: 0x46170034  c.lt.s      $f0, $f23
    ctx->pc = 0x25d1f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25d1fc: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x25D1FCu;
    {
        const bool branch_taken_0x25d1fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25d1fc) {
            ctx->pc = 0x25D200u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25D1FCu;
            // 0x25d200: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x25D210u;
            goto label_25d210;
        }
    }
    ctx->pc = 0x25D204u;
    // 0x25d204: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x25d204u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x25d208: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x25D208u;
    {
        const bool branch_taken_0x25d208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D208u;
        // 0x25d20c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d208) {
            ctx->pc = 0x25D214u;
            goto label_25d214;
        }
    }
    ctx->pc = 0x25D210u;
label_25d210:
    // 0x25d210: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x25d210u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25d214:
    // 0x25d214: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x25d214u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x25d218: 0x48a2f800  qmtc2.ni    $v0, $vf31
    ctx->pc = 0x25d218u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x25d21c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x25d21cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x25d220: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x25d220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x25d224: 0xd85d0000  lqc2        $vf29, 0x0($v0)
    ctx->pc = 0x25d224u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(FAST_READ128(0x3AB6E0u));
    // 0x25d228: 0x4a3ffb3d  vmr32.w     $vf31, $vf31
    ctx->pc = 0x25d228u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x25d22c: 0x4a9f0700  vaddx.y     $vf28, $vf0, $vf31x
    ctx->pc = 0x25d22cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x25d230: 0x4b1fffea  vmul.x      $vf31, $vf31, $vf31
    ctx->pc = 0x25d230u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x25d234: 0x4bffef5b  vmulw.xyzw  $vf29, $vf29, $vf31w
    ctx->pc = 0x25d234u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x25d238: 0x4bffef58  vmulx.xyzw  $vf29, $vf29, $vf31x
    ctx->pc = 0x25d238u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x25d23c: 0x4bdfef58  vmulx.xyz   $vf29, $vf29, $vf31x
    ctx->pc = 0x25d23cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x25d240: 0x4a9de703  vaddw.y     $vf28, $vf28, $vf29w
    ctx->pc = 0x25d240u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x25d244: 0x4b9fef58  vmulx.xy    $vf29, $vf29, $vf31x
    ctx->pc = 0x25d244u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x25d248: 0x4a9de702  vaddz.y     $vf28, $vf28, $vf29z
    ctx->pc = 0x25d248u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x25d24c: 0x4b1fef58  vmulx.x     $vf29, $vf29, $vf31x
    ctx->pc = 0x25d24cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x25d250: 0x4a9de701  vaddy.y     $vf28, $vf28, $vf29y
    ctx->pc = 0x25d250u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x25d254: 0x4a9de700  vaddx.y     $vf28, $vf28, $vf29x
    ctx->pc = 0x25d254u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x25d258: 0x4a80003f  vaddaw.y    $ACC, $vf0, $vf0w
    ctx->pc = 0x25d258u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x25d25c: 0x4a9ce74d  vmsuby.y    $vf29, $vf28, $vf28y
    ctx->pc = 0x25d25cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x25d260: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x25D260u;
    {
        const bool branch_taken_0x25d260 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D260u;
        // 0x25d264: 0x4abd03bd  .word       0x4ABD03BD                   # vsqrt       $Q, $vf29y # 00200000 <InstrIdType: R5900_COP2_SPECIAL2> (Delay Slot)
        { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,1))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d260) {
            ctx->pc = 0x25D278u;
            goto label_25d278;
        }
    }
    ctx->pc = 0x25D268u;
    // 0x25d268: 0x4a0003bf  vwaitq
    ctx->pc = 0x25d268u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x25d26c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x25D26Cu;
    {
        const bool branch_taken_0x25d26c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D26Cu;
        // 0x25d270: 0x4b000724  vsubq.x     $vf28, $vf0, $Q (Delay Slot)
        { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d26c) {
            ctx->pc = 0x25D280u;
            goto label_25d280;
        }
    }
    ctx->pc = 0x25D274u;
    // 0x25d274: 0x0  nop
    ctx->pc = 0x25d274u;
    // NOP
label_25d278:
    // 0x25d278: 0x4a0003bf  vwaitq
    ctx->pc = 0x25d278u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x25d27c: 0x4b000720  vaddq.x     $vf28, $vf0, $Q
    ctx->pc = 0x25d27cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_25d280:
    // 0x25d280: 0x4ae0012c  vsub.yzw    $vf4, $vf0, $vf0
    ctx->pc = 0x25d280u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x25d284: 0x4b20016c  vsub.xw     $vf5, $vf0, $vf0
    ctx->pc = 0x25d284u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x25d288: 0x4b2001ac  vsub.xw     $vf6, $vf0, $vf0
    ctx->pc = 0x25d288u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x25d28c: 0x4b000103  vaddw.x     $vf4, $vf0, $vf0w
    ctx->pc = 0x25d28cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x25d290: 0x4a9c0168  vadd.y      $vf5, $vf0, $vf28
    ctx->pc = 0x25d290u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[28]); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x25d294: 0x4a9c0184  vsubx.y     $vf6, $vf0, $vf28x
    ctx->pc = 0x25d294u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x25d298: 0x4a5c0140  vaddx.z     $vf5, $vf0, $vf28x
    ctx->pc = 0x25d298u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x25d29c: 0x4a5c0181  vaddy.z     $vf6, $vf0, $vf28y
    ctx->pc = 0x25d29cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x25d2a0: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x25d2a0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x25d2a4: 0xfa040000  sqc2        $vf4, 0x0($s0)
    ctx->pc = 0x25d2a4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x25d2a8: 0xfa050010  sqc2        $vf5, 0x10($s0)
    ctx->pc = 0x25d2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x25d2ac: 0xfa060020  sqc2        $vf6, 0x20($s0)
    ctx->pc = 0x25d2acu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x25d2b0: 0x86820002  lh          $v0, 0x2($s4)
    ctx->pc = 0x25d2b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x25d2b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25d2b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25d2b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x25d2b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x25d2bc: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x25d2bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x25d2c0: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x25d2c0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x25d2c4: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x25d2c4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25d2c8: 0xda050010  lqc2        $vf5, 0x10($s0)
    ctx->pc = 0x25d2c8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x25d2cc: 0xda060020  lqc2        $vf6, 0x20($s0)
    ctx->pc = 0x25d2ccu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x25d2d0: 0xda070030  lqc2        $vf7, 0x30($s0)
    ctx->pc = 0x25d2d0u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x25d2d4: 0x46170834  c.lt.s      $f1, $f23
    ctx->pc = 0x25d2d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25d2d8: 0xc7818b40  lwc1        $f1, -0x74C0($gp)
    ctx->pc = 0x25d2d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25d2dc: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x25D2DCu;
    {
        const bool branch_taken_0x25d2dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25d2dc) {
            ctx->pc = 0x25D2E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25D2DCu;
            // 0x25d2e0: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x25D2F0u;
            goto label_25d2f0;
        }
    }
    ctx->pc = 0x25D2E4u;
    // 0x25d2e4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x25d2e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x25d2e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x25D2E8u;
    {
        const bool branch_taken_0x25d2e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D2E8u;
        // 0x25d2ec: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d2e8) {
            ctx->pc = 0x25D2F4u;
            goto label_25d2f4;
        }
    }
    ctx->pc = 0x25D2F0u;
label_25d2f0:
    // 0x25d2f0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x25d2f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25d2f4:
    // 0x25d2f4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x25d2f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x25d2f8: 0x48a2f800  qmtc2.ni    $v0, $vf31
    ctx->pc = 0x25d2f8u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x25d2fc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x25d2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x25d300: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x25d300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x25d304: 0xd85d0000  lqc2        $vf29, 0x0($v0)
    ctx->pc = 0x25d304u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(FAST_READ128(0x3AB6E0u));
    // 0x25d308: 0x4a3ffb3d  vmr32.w     $vf31, $vf31
    ctx->pc = 0x25d308u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x25d30c: 0x4a9f0700  vaddx.y     $vf28, $vf0, $vf31x
    ctx->pc = 0x25d30cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x25d310: 0x4b1fffea  vmul.x      $vf31, $vf31, $vf31
    ctx->pc = 0x25d310u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x25d314: 0x4bffef5b  vmulw.xyzw  $vf29, $vf29, $vf31w
    ctx->pc = 0x25d314u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x25d318: 0x4bffef58  vmulx.xyzw  $vf29, $vf29, $vf31x
    ctx->pc = 0x25d318u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x25d31c: 0x4bdfef58  vmulx.xyz   $vf29, $vf29, $vf31x
    ctx->pc = 0x25d31cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x25d320: 0x4a9de703  vaddw.y     $vf28, $vf28, $vf29w
    ctx->pc = 0x25d320u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x25d324: 0x4b9fef58  vmulx.xy    $vf29, $vf29, $vf31x
    ctx->pc = 0x25d324u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x25d328: 0x4a9de702  vaddz.y     $vf28, $vf28, $vf29z
    ctx->pc = 0x25d328u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x25d32c: 0x4b1fef58  vmulx.x     $vf29, $vf29, $vf31x
    ctx->pc = 0x25d32cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x25d330: 0x4a9de701  vaddy.y     $vf28, $vf28, $vf29y
    ctx->pc = 0x25d330u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x25d334: 0x4a9de700  vaddx.y     $vf28, $vf28, $vf29x
    ctx->pc = 0x25d334u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x25d338: 0x4a80003f  vaddaw.y    $ACC, $vf0, $vf0w
    ctx->pc = 0x25d338u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x25d33c: 0x4a9ce74d  vmsuby.y    $vf29, $vf28, $vf28y
    ctx->pc = 0x25d33cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x25d340: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x25D340u;
    {
        const bool branch_taken_0x25d340 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D340u;
        // 0x25d344: 0x4abd03bd  .word       0x4ABD03BD                   # vsqrt       $Q, $vf29y # 00200000 <InstrIdType: R5900_COP2_SPECIAL2> (Delay Slot)
        { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,1))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d340) {
            ctx->pc = 0x25D358u;
            goto label_25d358;
        }
    }
    ctx->pc = 0x25D348u;
    // 0x25d348: 0x4a0003bf  vwaitq
    ctx->pc = 0x25d348u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x25d34c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x25D34Cu;
    {
        const bool branch_taken_0x25d34c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D34Cu;
        // 0x25d350: 0x4b000724  vsubq.x     $vf28, $vf0, $Q (Delay Slot)
        { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d34c) {
            ctx->pc = 0x25D360u;
            goto label_25d360;
        }
    }
    ctx->pc = 0x25D354u;
    // 0x25d354: 0x0  nop
    ctx->pc = 0x25d354u;
    // NOP
label_25d358:
    // 0x25d358: 0x4a0003bf  vwaitq
    ctx->pc = 0x25d358u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x25d35c: 0x4b000720  vaddq.x     $vf28, $vf0, $Q
    ctx->pc = 0x25d35cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_25d360:
    // 0x25d360: 0x4a5c0701  vaddy.z     $vf28, $vf0, $vf28y
    ctx->pc = 0x25d360u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x25d364: 0x4b1c0741  vaddy.x     $vf29, $vf0, $vf28y
    ctx->pc = 0x25d364u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x25d368: 0x4a5c0744  vsubx.z     $vf29, $vf0, $vf28x
    ctx->pc = 0x25d368u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x25d36c: 0x4b44e1be  vmulaz.xz   $ACC, $vf28, $vf4z
    ctx->pc = 0x25d36cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x25d370: 0x4b44e908  vmaddx.xz   $vf4, $vf29, $vf4x
    ctx->pc = 0x25d370u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x25d374: 0x4b45e1be  vmulaz.xz   $ACC, $vf28, $vf5z
    ctx->pc = 0x25d374u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x25d378: 0x4b45e948  vmaddx.xz   $vf5, $vf29, $vf5x
    ctx->pc = 0x25d378u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x25d37c: 0x4b46e1be  vmulaz.xz   $ACC, $vf28, $vf6z
    ctx->pc = 0x25d37cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x25d380: 0x4b46e988  vmaddx.xz   $vf6, $vf29, $vf6x
    ctx->pc = 0x25d380u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x25d384: 0x4b47e1be  vmulaz.xz   $ACC, $vf28, $vf7z
    ctx->pc = 0x25d384u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x25d388: 0x4b47e9c8  vmaddx.xz   $vf7, $vf29, $vf7x
    ctx->pc = 0x25d388u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x25d38c: 0xfa040000  sqc2        $vf4, 0x0($s0)
    ctx->pc = 0x25d38cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x25d390: 0xfa050010  sqc2        $vf5, 0x10($s0)
    ctx->pc = 0x25d390u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x25d394: 0xfa060020  sqc2        $vf6, 0x20($s0)
    ctx->pc = 0x25d394u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x25d398: 0xfa070030  sqc2        $vf7, 0x30($s0)
    ctx->pc = 0x25d398u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x25d39c: 0x86820004  lh          $v0, 0x4($s4)
    ctx->pc = 0x25d39cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x25d3a0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x25d3a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x25d3a4: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x25d3a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x25d3a8: 0x46166302  mul.s       $f12, $f12, $f22
    ctx->pc = 0x25d3a8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[22]);
    // 0x25d3ac: 0xc0474d0  jal         func_11D340
    ctx->pc = 0x25D3ACu;
    SET_GPR_U32(ctx, 31, 0x25D3B4u);
    ctx->pc = 0x25D3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D3ACu;
    // 0x25d3b0: 0x46196302  mul.s       $f12, $f12, $f25 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[25]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D340u, 0x25D3ACu, 0x25D3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D3B4u;
label_25d3b4:
    // 0x25d3b4: 0xda700000  lqc2        $vf16, 0x0($s3)
    ctx->pc = 0x25d3b4u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x25d3b8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x25d3b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x25d3bc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x25d3bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x25d3c0: 0x4bc18418  vmulx.xyz   $vf16, $vf16, $vf1x
    ctx->pc = 0x25d3c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x25d3c4: 0x27a20c10  addiu       $v0, $sp, 0xC10
    ctx->pc = 0x25d3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 3088));
    // 0x25d3c8: 0xf8500000  sqc2        $vf16, 0x0($v0)
    ctx->pc = 0x25d3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x25d3cc: 0x4614a01a  mula.s      $f20, $f20
    ctx->pc = 0x25d3ccu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[20], ctx->f[20]));
    // 0x25d3d0: 0x4600001d  msub.s      $f0, $f0, $f0
    ctx->pc = 0x25d3d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x25d3d4: 0x46000004  c1          0x4
    ctx->pc = 0x25d3d4u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x25d3d8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x25d3d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d3dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25d3dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d3e0: 0x27a60c10  addiu       $a2, $sp, 0xC10
    ctx->pc = 0x25d3e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 3088));
    // 0x25d3e4: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x25d3e4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x25d3e8: 0xc0970a6  jal         func_25C298
    ctx->pc = 0x25D3E8u;
    SET_GPR_U32(ctx, 31, 0x25D3F0u);
    ctx->pc = 0x25D3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D3E8u;
    // 0x25d3ec: 0xe7a00c1c  swc1        $f0, 0xC1C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 3100), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C298u, 0x25D3E8u, 0x25D3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D3F0u;
label_25d3f0:
    // 0x25d3f0: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x25D3F0u;
    {
        const bool branch_taken_0x25d3f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D3F0u;
        // 0x25d3f4: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d3f0) {
            ctx->pc = 0x25D474u;
            goto label_25d474;
        }
    }
    ctx->pc = 0x25D3F8u;
label_25d3f8:
    // 0x25d3f8: 0x86830000  lh          $v1, 0x0($s4)
    ctx->pc = 0x25d3f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x25d3fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x25d3fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25d400: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x25d400u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x25d404: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x25d404u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25d408: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x25d408u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x25d40c: 0x46180842  mul.s       $f1, $f1, $f24
    ctx->pc = 0x25d40cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[24]);
    // 0x25d410: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x25d410u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x25d414: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x25d414u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x25d418: 0xe6410000  swc1        $f1, 0x0($s2)
    ctx->pc = 0x25d418u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x25d41c: 0x86220002  lh          $v0, 0x2($s1)
    ctx->pc = 0x25d41cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x25d420: 0x86830002  lh          $v1, 0x2($s4)
    ctx->pc = 0x25d420u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x25d424: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x25d424u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25d428: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x25d428u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x25d42c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x25d42cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25d430: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x25d430u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x25d434: 0x46180842  mul.s       $f1, $f1, $f24
    ctx->pc = 0x25d434u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[24]);
    // 0x25d438: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x25d438u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x25d43c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x25d43cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x25d440: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x25d440u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x25d444: 0x86220004  lh          $v0, 0x4($s1)
    ctx->pc = 0x25d444u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x25d448: 0x86830004  lh          $v1, 0x4($s4)
    ctx->pc = 0x25d448u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x25d44c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x25d44cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25d450: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x25d450u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x25d454: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x25d454u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x25d458: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x25d458u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25d45c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x25d45cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x25d460: 0x46180842  mul.s       $f1, $f1, $f24
    ctx->pc = 0x25d460u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[24]);
    // 0x25d464: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x25d464u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x25d468: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x25d468u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x25d46c: 0xe6410008  swc1        $f1, 0x8($s2)
    ctx->pc = 0x25d46cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x25d470: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x25d470u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_25d474:
    // 0x25d474: 0x26310006  addiu       $s1, $s1, 0x6
    ctx->pc = 0x25d474u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 6));
    // 0x25d478: 0x2d7102a  slt         $v0, $s6, $s7
    ctx->pc = 0x25d478u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x25d47c: 0x26940006  addiu       $s4, $s4, 0x6
    ctx->pc = 0x25d47cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 6));
    // 0x25d480: 0x1440fecf  bnez        $v0, . + 4 + (-0x131 << 2)
    ctx->pc = 0x25D480u;
    {
        const bool branch_taken_0x25d480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25D484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D480u;
        // 0x25d484: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d480) {
            ctx->pc = 0x25CFC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25cfc0;
        }
    }
    ctx->pc = 0x25D488u;
label_25d488:
    // 0x25d488: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25d488u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25d48c:
    // 0x25d48c: 0xdfb00c70  ld          $s0, 0xC70($sp)
    ctx->pc = 0x25d48cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 3184)));
    // 0x25d490: 0xdfb10c78  ld          $s1, 0xC78($sp)
    ctx->pc = 0x25d490u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 3192)));
    // 0x25d494: 0xdfb20c80  ld          $s2, 0xC80($sp)
    ctx->pc = 0x25d494u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 3200)));
    // 0x25d498: 0xdfb30c88  ld          $s3, 0xC88($sp)
    ctx->pc = 0x25d498u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 3208)));
    // 0x25d49c: 0xdfb40c90  ld          $s4, 0xC90($sp)
    ctx->pc = 0x25d49cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 3216)));
    // 0x25d4a0: 0xdfb50c98  ld          $s5, 0xC98($sp)
    ctx->pc = 0x25d4a0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 3224)));
    // 0x25d4a4: 0xdfb60ca0  ld          $s6, 0xCA0($sp)
    ctx->pc = 0x25d4a4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 3232)));
    // 0x25d4a8: 0xdfb70ca8  ld          $s7, 0xCA8($sp)
    ctx->pc = 0x25d4a8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 3240)));
    // 0x25d4ac: 0xdfbe0cb0  ld          $fp, 0xCB0($sp)
    ctx->pc = 0x25d4acu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 3248)));
    // 0x25d4b0: 0xdfbf0cb8  ld          $ra, 0xCB8($sp)
    ctx->pc = 0x25d4b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 3256)));
    // 0x25d4b4: 0xc7b90ce8  lwc1        $f25, 0xCE8($sp)
    ctx->pc = 0x25d4b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 3304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x25d4b8: 0xc7b80ce0  lwc1        $f24, 0xCE0($sp)
    ctx->pc = 0x25d4b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 3296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x25d4bc: 0xc7b70cd8  lwc1        $f23, 0xCD8($sp)
    ctx->pc = 0x25d4bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 3288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x25d4c0: 0xc7b60cd0  lwc1        $f22, 0xCD0($sp)
    ctx->pc = 0x25d4c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 3280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x25d4c4: 0xc7b50cc8  lwc1        $f21, 0xCC8($sp)
    ctx->pc = 0x25d4c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 3272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x25d4c8: 0xc7b40cc0  lwc1        $f20, 0xCC0($sp)
    ctx->pc = 0x25d4c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 3264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25d4cc: 0x3e00008  jr          $ra
    ctx->pc = 0x25D4CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25D4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D4CCu;
        // 0x25d4d0: 0x27bd0cf0  addiu       $sp, $sp, 0xCF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 3312));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D4CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25D4D4u;
    // 0x25d4d4: 0x0  nop
    ctx->pc = 0x25d4d4u;
    // NOP
    ctx->pc = 0x25d4d8u;
}
