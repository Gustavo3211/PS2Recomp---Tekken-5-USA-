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

// Function: sub_0032B218
// Address: 0x32b218 - 0x32b380
void sub_0032B218_0x32b218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032B218_0x32b218");
#endif

    switch (ctx->pc) {
        case 0x32b370u: goto label_32b370;
        default: break;
    }

    ctx->pc = 0x32b218u;

    // 0x32b218: 0x417c2  srl         $v0, $a0, 31
    ctx->pc = 0x32b218u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x32b21c: 0x460d7000  add.s       $f0, $f14, $f13
    ctx->pc = 0x32b21cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[14], ctx->f[13]);
    // 0x32b220: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x32b220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x32b224: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x32b224u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x32b228: 0x22843  sra         $a1, $v0, 1
    ctx->pc = 0x32b228u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 1));
    // 0x32b22c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x32b22cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x32b230: 0x30a28000  andi        $v0, $a1, 0x8000
    ctx->pc = 0x32b230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
    // 0x32b234: 0x24a34000  addiu       $v1, $a1, 0x4000
    ctx->pc = 0x32b234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16384));
    // 0x32b238: 0x24400  sll         $t0, $v0, 16
    ctx->pc = 0x32b238u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x32b23c: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x32b23cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x32b240: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x32b240u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x32b244: 0x460d7181  sub.s       $f6, $f14, $f13
    ctx->pc = 0x32b244u;
    ctx->f[6] = FPU_SUB_S(ctx->f[14], ctx->f[13]);
    // 0x32b248: 0x46000107  neg.s       $f4, $f0
    ctx->pc = 0x32b248u;
    ctx->f[4] = FPU_NEG_S(ctx->f[0]);
    // 0x32b24c: 0x23400  sll         $a2, $v0, 16
    ctx->pc = 0x32b24cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x32b250: 0x30a74000  andi        $a3, $a1, 0x4000
    ctx->pc = 0x32b250u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16384);
    // 0x32b254: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x32B254u;
    {
        const bool branch_taken_0x32b254 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B254u;
        // 0x32b258: 0x30a43fff  andi        $a0, $a1, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b254) {
            ctx->pc = 0x32B264u;
            goto label_32b264;
        }
    }
    ctx->pc = 0x32B25Cu;
    // 0x32b25c: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x32b25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x32b260: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x32b260u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_32b264:
    // 0x32b264: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x32b264u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x32b268: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x32b268u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x32b26c: 0x24640340  addiu       $a0, $v1, 0x340
    ctx->pc = 0x32b26cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 832));
    // 0x32b270: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x32b270u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b274: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x32b274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x32b278: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x32b278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32b27c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x32b27cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x32b280: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x32b280u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x32b284: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x32b284u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32b288: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x32B288u;
    {
        const bool branch_taken_0x32b288 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x32B28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B288u;
        // 0x32b28c: 0x3c020015  lui         $v0, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b288) {
            ctx->pc = 0x32B2C8u;
            goto label_32b2c8;
        }
    }
    ctx->pc = 0x32B290u;
    // 0x32b290: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x32B290u;
    {
        const bool branch_taken_0x32b290 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B290u;
        // 0x32b294: 0x30a33fff  andi        $v1, $a1, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b290) {
            ctx->pc = 0x32B2A0u;
            goto label_32b2a0;
        }
    }
    ctx->pc = 0x32B298u;
    // 0x32b298: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x32b298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x32b29c: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x32b29cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_32b2a0:
    // 0x32b2a0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x32b2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32b2a4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x32b2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x32b2a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x32b2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32b2ac: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x32b2acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x32b2b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32b2b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b2b4: 0x0  nop
    ctx->pc = 0x32b2b4u;
    // NOP
    // 0x32b2b8: 0x0  nop
    ctx->pc = 0x32b2b8u;
    // NOP
    // 0x32b2bc: 0x46020143  div.s       $f5, $f0, $f2
    ctx->pc = 0x32b2bcu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[5] = ctx->f[0] / ctx->f[2];
    // 0x32b2c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x32B2C0u;
    {
        const bool branch_taken_0x32b2c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b2c0) {
            ctx->pc = 0x32B2CCu;
            goto label_32b2cc;
        }
    }
    ctx->pc = 0x32B2C8u;
label_32b2c8:
    // 0x32b2c8: 0xc4454e3c  lwc1        $f5, 0x4E3C($v0)
    ctx->pc = 0x32b2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_32b2cc:
    // 0x32b2cc: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x32b2ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
    // 0x32b2d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x32b2d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b2d4: 0x460c2882  mul.s       $f2, $f5, $f12
    ctx->pc = 0x32b2d4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[12]);
    // 0x32b2d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x32b2d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x32b2dc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x32b2dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32b2e0: 0x0  nop
    ctx->pc = 0x32b2e0u;
    // NOP
    // 0x32b2e4: 0x0  nop
    ctx->pc = 0x32b2e4u;
    // NOP
    // 0x32b2e8: 0x46062103  div.s       $f4, $f4, $f6
    ctx->pc = 0x32b2e8u;
    if (ctx->f[6] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[4] = ctx->f[4] / ctx->f[6];
    // 0x32b2ec: 0x46007002  mul.s       $f0, $f14, $f0
    ctx->pc = 0x32b2ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    // 0x32b2f0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x32b2f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x32b2f4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x32b2f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x32b2f8: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x32b2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x32b2fc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x32b2fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b300: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x32b300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    // 0x32b304: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x32b304u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x32b308: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x32b308u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x32b30c: 0x460d0002  mul.s       $f0, $f0, $f13
    ctx->pc = 0x32b30cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x32b310: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x32b310u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x32b314: 0x0  nop
    ctx->pc = 0x32b314u;
    // NOP
    // 0x32b318: 0x0  nop
    ctx->pc = 0x32b318u;
    // NOP
    // 0x32b31c: 0x46020883  div.s       $f2, $f1, $f2
    ctx->pc = 0x32b31cu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[2] = ctx->f[1] / ctx->f[2];
    // 0x32b320: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x32b320u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x32b324: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x32b324u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x32b328: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x32b328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x32b32c: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x32b32cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x32b330: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x32b330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x32b334: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x32b334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x32b338: 0x0  nop
    ctx->pc = 0x32b338u;
    // NOP
    // 0x32b33c: 0x0  nop
    ctx->pc = 0x32b33cu;
    // NOP
    // 0x32b340: 0x46060003  div.s       $f0, $f0, $f6
    ctx->pc = 0x32b340u;
    if (ctx->f[6] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[6];
    // 0x32b344: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x32b344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x32b348: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x32b348u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x32b34c: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x32b34cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x32b350: 0xe7a40028  swc1        $f4, 0x28($sp)
    ctx->pc = 0x32b350u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x32b354: 0xe7a3002c  swc1        $f3, 0x2C($sp)
    ctx->pc = 0x32b354u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x32b358: 0x0  nop
    ctx->pc = 0x32b358u;
    // NOP
    // 0x32b35c: 0x0  nop
    ctx->pc = 0x32b35cu;
    // NOP
    // 0x32b360: 0x46050843  div.s       $f1, $f1, $f5
    ctx->pc = 0x32b360u;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[5];
    // 0x32b364: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x32b364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x32b368: 0xc0ce51a  jal         func_339468
    ctx->pc = 0x32B368u;
    SET_GPR_U32(ctx, 31, 0x32B370u);
    ctx->pc = 0x32B36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B368u;
    // 0x32b36c: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x339468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339468u, 0x32B368u, 0x32B370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B370u;
label_32b370:
    // 0x32b370: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x32b370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32b374: 0x3e00008  jr          $ra
    ctx->pc = 0x32B374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32B378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B374u;
        // 0x32b378: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32B374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32B37Cu;
    // 0x32b37c: 0x0  nop
    ctx->pc = 0x32b37cu;
    // NOP
    ctx->pc = 0x32b380u;
}
