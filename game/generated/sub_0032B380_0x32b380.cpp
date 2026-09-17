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

// Function: sub_0032B380
// Address: 0x32b380 - 0x32b8f0
void sub_0032B380_0x32b380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032B380_0x32b380");
#endif

    switch (ctx->pc) {
        case 0x32b4e0u: goto label_32b4e0;
        case 0x32b668u: goto label_32b668;
        case 0x32b7f8u: goto label_32b7f8;
        case 0x32b8e0u: goto label_32b8e0;
        default: break;
    }

    ctx->pc = 0x32b380u;

    // 0x32b380: 0x417c2  srl         $v0, $a0, 31
    ctx->pc = 0x32b380u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x32b384: 0x460d7000  add.s       $f0, $f14, $f13
    ctx->pc = 0x32b384u;
    ctx->f[0] = FPU_ADD_S(ctx->f[14], ctx->f[13]);
    // 0x32b388: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x32b388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x32b38c: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x32b38cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x32b390: 0x22843  sra         $a1, $v0, 1
    ctx->pc = 0x32b390u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 1));
    // 0x32b394: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x32b394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x32b398: 0x30a28000  andi        $v0, $a1, 0x8000
    ctx->pc = 0x32b398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
    // 0x32b39c: 0x24a34000  addiu       $v1, $a1, 0x4000
    ctx->pc = 0x32b39cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16384));
    // 0x32b3a0: 0x24400  sll         $t0, $v0, 16
    ctx->pc = 0x32b3a0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x32b3a4: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x32b3a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x32b3a8: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x32b3a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x32b3ac: 0x460d7181  sub.s       $f6, $f14, $f13
    ctx->pc = 0x32b3acu;
    ctx->f[6] = FPU_SUB_S(ctx->f[14], ctx->f[13]);
    // 0x32b3b0: 0x460000c7  neg.s       $f3, $f0
    ctx->pc = 0x32b3b0u;
    ctx->f[3] = FPU_NEG_S(ctx->f[0]);
    // 0x32b3b4: 0x23400  sll         $a2, $v0, 16
    ctx->pc = 0x32b3b4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x32b3b8: 0x30a74000  andi        $a3, $a1, 0x4000
    ctx->pc = 0x32b3b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16384);
    // 0x32b3bc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x32B3BCu;
    {
        const bool branch_taken_0x32b3bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B3BCu;
        // 0x32b3c0: 0x30a43fff  andi        $a0, $a1, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b3bc) {
            ctx->pc = 0x32B3CCu;
            goto label_32b3cc;
        }
    }
    ctx->pc = 0x32B3C4u;
    // 0x32b3c4: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x32b3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x32b3c8: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x32b3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_32b3cc:
    // 0x32b3cc: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x32b3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x32b3d0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x32b3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x32b3d4: 0x24640340  addiu       $a0, $v1, 0x340
    ctx->pc = 0x32b3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 832));
    // 0x32b3d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x32b3d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b3dc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x32b3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x32b3e0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x32b3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32b3e4: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x32b3e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x32b3e8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x32b3e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x32b3ec: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x32b3ecu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32b3f0: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x32B3F0u;
    {
        const bool branch_taken_0x32b3f0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x32B3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B3F0u;
        // 0x32b3f4: 0x3c020015  lui         $v0, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b3f0) {
            ctx->pc = 0x32B430u;
            goto label_32b430;
        }
    }
    ctx->pc = 0x32B3F8u;
    // 0x32b3f8: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x32B3F8u;
    {
        const bool branch_taken_0x32b3f8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B3F8u;
        // 0x32b3fc: 0x30a33fff  andi        $v1, $a1, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b3f8) {
            ctx->pc = 0x32B408u;
            goto label_32b408;
        }
    }
    ctx->pc = 0x32B400u;
    // 0x32b400: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x32b400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x32b404: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x32b404u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_32b408:
    // 0x32b408: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x32b408u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32b40c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x32b40cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x32b410: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x32b410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32b414: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x32b414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x32b418: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32b418u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b41c: 0x0  nop
    ctx->pc = 0x32b41cu;
    // NOP
    // 0x32b420: 0x0  nop
    ctx->pc = 0x32b420u;
    // NOP
    // 0x32b424: 0x46020143  div.s       $f5, $f0, $f2
    ctx->pc = 0x32b424u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[5] = ctx->f[0] / ctx->f[2];
    // 0x32b428: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x32B428u;
    {
        const bool branch_taken_0x32b428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b428) {
            ctx->pc = 0x32B434u;
            goto label_32b434;
        }
    }
    ctx->pc = 0x32B430u;
label_32b430:
    // 0x32b430: 0xc4454e40  lwc1        $f5, 0x4E40($v0)
    ctx->pc = 0x32b430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_32b434:
    // 0x32b434: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x32b434u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
    // 0x32b438: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x32b438u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b43c: 0x0  nop
    ctx->pc = 0x32b43cu;
    // NOP
    // 0x32b440: 0x0  nop
    ctx->pc = 0x32b440u;
    // NOP
    // 0x32b444: 0x460c2883  div.s       $f2, $f5, $f12
    ctx->pc = 0x32b444u;
    if (ctx->f[12] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[5] * 0.0f); } else ctx->f[2] = ctx->f[5] / ctx->f[12];
    // 0x32b448: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x32b448u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x32b44c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x32b44cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32b450: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x32b450u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x32b454: 0x46007002  mul.s       $f0, $f14, $f0
    ctx->pc = 0x32b454u;
    ctx->f[0] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    // 0x32b458: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x32b458u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x32b45c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x32b45cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x32b460: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x32b460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    // 0x32b464: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x32b464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b468: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x32b468u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x32b46c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x32b46cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x32b470: 0x460d0002  mul.s       $f0, $f0, $f13
    ctx->pc = 0x32b470u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x32b474: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x32b474u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x32b478: 0x0  nop
    ctx->pc = 0x32b478u;
    // NOP
    // 0x32b47c: 0x0  nop
    ctx->pc = 0x32b47cu;
    // NOP
    // 0x32b480: 0x460618c3  div.s       $f3, $f3, $f6
    ctx->pc = 0x32b480u;
    if (ctx->f[6] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[3] = ctx->f[3] / ctx->f[6];
    // 0x32b484: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x32b484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x32b488: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x32b488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x32b48c: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x32b48cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x32b490: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x32b490u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x32b494: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x32b494u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x32b498: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x32b498u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x32b49c: 0x0  nop
    ctx->pc = 0x32b49cu;
    // NOP
    // 0x32b4a0: 0x0  nop
    ctx->pc = 0x32b4a0u;
    // NOP
    // 0x32b4a4: 0x46020883  div.s       $f2, $f1, $f2
    ctx->pc = 0x32b4a4u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[2] = ctx->f[1] / ctx->f[2];
    // 0x32b4a8: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x32b4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x32b4ac: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x32b4acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x32b4b0: 0xe7a30028  swc1        $f3, 0x28($sp)
    ctx->pc = 0x32b4b0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x32b4b4: 0xe7a4002c  swc1        $f4, 0x2C($sp)
    ctx->pc = 0x32b4b4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x32b4b8: 0x0  nop
    ctx->pc = 0x32b4b8u;
    // NOP
    // 0x32b4bc: 0x0  nop
    ctx->pc = 0x32b4bcu;
    // NOP
    // 0x32b4c0: 0x46060003  div.s       $f0, $f0, $f6
    ctx->pc = 0x32b4c0u;
    if (ctx->f[6] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[6];
    // 0x32b4c4: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x32b4c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x32b4c8: 0x0  nop
    ctx->pc = 0x32b4c8u;
    // NOP
    // 0x32b4cc: 0x0  nop
    ctx->pc = 0x32b4ccu;
    // NOP
    // 0x32b4d0: 0x46050843  div.s       $f1, $f1, $f5
    ctx->pc = 0x32b4d0u;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[5];
    // 0x32b4d4: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x32b4d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x32b4d8: 0xc0ce51a  jal         func_339468
    ctx->pc = 0x32B4D8u;
    SET_GPR_U32(ctx, 31, 0x32B4E0u);
    ctx->pc = 0x32B4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B4D8u;
    // 0x32b4dc: 0xe7a10000  swc1        $f1, 0x0($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x339468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339468u, 0x32B4D8u, 0x32B4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B4E0u;
label_32b4e0:
    // 0x32b4e0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x32b4e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32b4e4: 0x3e00008  jr          $ra
    ctx->pc = 0x32B4E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32B4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B4E4u;
        // 0x32b4e8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32B4E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32B4ECu;
    // 0x32b4ec: 0x0  nop
    ctx->pc = 0x32b4ecu;
    // NOP
    // 0x32b4f0: 0x417c2  srl         $v0, $a0, 31
    ctx->pc = 0x32b4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x32b4f4: 0x46119000  add.s       $f0, $f18, $f17
    ctx->pc = 0x32b4f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[18], ctx->f[17]);
    // 0x32b4f8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x32b4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x32b4fc: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x32b4fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x32b500: 0x22843  sra         $a1, $v0, 1
    ctx->pc = 0x32b500u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 1));
    // 0x32b504: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x32b504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x32b508: 0x30a28000  andi        $v0, $a1, 0x8000
    ctx->pc = 0x32b508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
    // 0x32b50c: 0x24a34000  addiu       $v1, $a1, 0x4000
    ctx->pc = 0x32b50cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16384));
    // 0x32b510: 0x24400  sll         $t0, $v0, 16
    ctx->pc = 0x32b510u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x32b514: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x32b514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x32b518: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x32b518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x32b51c: 0x46119081  sub.s       $f2, $f18, $f17
    ctx->pc = 0x32b51cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[18], ctx->f[17]);
    // 0x32b520: 0x46000207  neg.s       $f8, $f0
    ctx->pc = 0x32b520u;
    ctx->f[8] = FPU_NEG_S(ctx->f[0]);
    // 0x32b524: 0x23400  sll         $a2, $v0, 16
    ctx->pc = 0x32b524u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x32b528: 0x30a74000  andi        $a3, $a1, 0x4000
    ctx->pc = 0x32b528u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16384);
    // 0x32b52c: 0x460e7140  add.s       $f5, $f14, $f14
    ctx->pc = 0x32b52cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[14], ctx->f[14]);
    // 0x32b530: 0x30a43fff  andi        $a0, $a1, 0x3FFF
    ctx->pc = 0x32b530u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16383);
    // 0x32b534: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x32B534u;
    {
        const bool branch_taken_0x32b534 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B534u;
        // 0x32b538: 0x46108400  add.s       $f16, $f16, $f16 (Delay Slot)
        ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b534) {
            ctx->pc = 0x32B544u;
            goto label_32b544;
        }
    }
    ctx->pc = 0x32B53Cu;
    // 0x32b53c: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x32b53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x32b540: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x32b540u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_32b544:
    // 0x32b544: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x32b544u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x32b548: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x32b548u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x32b54c: 0x24640340  addiu       $a0, $v1, 0x340
    ctx->pc = 0x32b54cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 832));
    // 0x32b550: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x32b550u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b554: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x32b554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x32b558: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x32b558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32b55c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x32b55cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x32b560: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x32b560u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x32b564: 0x46001832  c.eq.s      $f3, $f0
    ctx->pc = 0x32b564u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32b568: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x32B568u;
    {
        const bool branch_taken_0x32b568 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x32B56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B568u;
        // 0x32b56c: 0x3c020015  lui         $v0, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b568) {
            ctx->pc = 0x32B5A8u;
            goto label_32b5a8;
        }
    }
    ctx->pc = 0x32B570u;
    // 0x32b570: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x32B570u;
    {
        const bool branch_taken_0x32b570 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B570u;
        // 0x32b574: 0x30a33fff  andi        $v1, $a1, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b570) {
            ctx->pc = 0x32B580u;
            goto label_32b580;
        }
    }
    ctx->pc = 0x32B578u;
    // 0x32b578: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x32b578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x32b57c: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x32b57cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_32b580:
    // 0x32b580: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x32b580u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32b584: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x32b584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x32b588: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x32b588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32b58c: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x32b58cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x32b590: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32b590u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b594: 0x0  nop
    ctx->pc = 0x32b594u;
    // NOP
    // 0x32b598: 0x0  nop
    ctx->pc = 0x32b598u;
    // NOP
    // 0x32b59c: 0x460301c3  div.s       $f7, $f0, $f3
    ctx->pc = 0x32b59cu;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[7] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[7] = ctx->f[0] / ctx->f[3];
    // 0x32b5a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x32B5A0u;
    {
        const bool branch_taken_0x32b5a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b5a0) {
            ctx->pc = 0x32B5ACu;
            goto label_32b5ac;
        }
    }
    ctx->pc = 0x32B5A8u;
label_32b5a8:
    // 0x32b5a8: 0xc4474e44  lwc1        $f7, 0x4E44($v0)
    ctx->pc = 0x32b5a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_32b5ac:
    // 0x32b5ac: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x32b5acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
    // 0x32b5b0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x32b5b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32b5b4: 0x460c38c2  mul.s       $f3, $f7, $f12
    ctx->pc = 0x32b5b4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[12]);
    // 0x32b5b8: 0x460d2941  sub.s       $f5, $f5, $f13
    ctx->pc = 0x32b5b8u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[13]);
    // 0x32b5bc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x32b5bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x32b5c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x32b5c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b5c4: 0x46019042  mul.s       $f1, $f18, $f1
    ctx->pc = 0x32b5c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[18], ctx->f[1]);
    // 0x32b5c8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x32b5c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x32b5cc: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x32b5ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x32b5d0: 0x46107901  sub.s       $f4, $f15, $f16
    ctx->pc = 0x32b5d0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[15], ctx->f[16]);
    // 0x32b5d4: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x32b5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x32b5d8: 0x0  nop
    ctx->pc = 0x32b5d8u;
    // NOP
    // 0x32b5dc: 0x0  nop
    ctx->pc = 0x32b5dcu;
    // NOP
    // 0x32b5e0: 0x460300c3  div.s       $f3, $f0, $f3
    ctx->pc = 0x32b5e0u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[3] = ctx->f[0] / ctx->f[3];
    // 0x32b5e4: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x32b5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    // 0x32b5e8: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x32b5e8u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x32b5ec: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x32b5ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b5f0: 0x46110842  mul.s       $f1, $f1, $f17
    ctx->pc = 0x32b5f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[17]);
    // 0x32b5f4: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x32b5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x32b5f8: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x32b5f8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x32b5fc: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x32b5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x32b600: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x32b600u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x32b604: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x32b604u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x32b608: 0x0  nop
    ctx->pc = 0x32b608u;
    // NOP
    // 0x32b60c: 0x0  nop
    ctx->pc = 0x32b60cu;
    // NOP
    // 0x32b610: 0x46070003  div.s       $f0, $f0, $f7
    ctx->pc = 0x32b610u;
    if (ctx->f[7] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[7];
    // 0x32b614: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x32b614u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x32b618: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x32b618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x32b61c: 0x460d18c2  mul.s       $f3, $f3, $f13
    ctx->pc = 0x32b61cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[13]);
    // 0x32b620: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x32b620u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x32b624: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x32b624u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x32b628: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x32b628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x32b62c: 0xe7a50020  swc1        $f5, 0x20($sp)
    ctx->pc = 0x32b62cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x32b630: 0x0  nop
    ctx->pc = 0x32b630u;
    // NOP
    // 0x32b634: 0x0  nop
    ctx->pc = 0x32b634u;
    // NOP
    // 0x32b638: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x32b638u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x32b63c: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x32b63cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x32b640: 0xe7a40024  swc1        $f4, 0x24($sp)
    ctx->pc = 0x32b640u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x32b644: 0x460f0002  mul.s       $f0, $f0, $f15
    ctx->pc = 0x32b644u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[15]);
    // 0x32b648: 0xe7a6002c  swc1        $f6, 0x2C($sp)
    ctx->pc = 0x32b648u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x32b64c: 0x0  nop
    ctx->pc = 0x32b64cu;
    // NOP
    // 0x32b650: 0x0  nop
    ctx->pc = 0x32b650u;
    // NOP
    // 0x32b654: 0x46024083  div.s       $f2, $f8, $f2
    ctx->pc = 0x32b654u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[8] * 0.0f); } else ctx->f[2] = ctx->f[8] / ctx->f[2];
    // 0x32b658: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x32b658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x32b65c: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x32b65cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x32b660: 0xc0ce51a  jal         func_339468
    ctx->pc = 0x32B660u;
    SET_GPR_U32(ctx, 31, 0x32B668u);
    ctx->pc = 0x32B664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B660u;
    // 0x32b664: 0xe7a20028  swc1        $f2, 0x28($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x339468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339468u, 0x32B660u, 0x32B668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B668u;
label_32b668:
    // 0x32b668: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x32b668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32b66c: 0x3e00008  jr          $ra
    ctx->pc = 0x32B66Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32B670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B66Cu;
        // 0x32b670: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32B66Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32B674u;
    // 0x32b674: 0x0  nop
    ctx->pc = 0x32b674u;
    // NOP
    // 0x32b678: 0x417c2  srl         $v0, $a0, 31
    ctx->pc = 0x32b678u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x32b67c: 0x46119000  add.s       $f0, $f18, $f17
    ctx->pc = 0x32b67cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[18], ctx->f[17]);
    // 0x32b680: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x32b680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x32b684: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x32b684u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x32b688: 0x22843  sra         $a1, $v0, 1
    ctx->pc = 0x32b688u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 1));
    // 0x32b68c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x32b68cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x32b690: 0x30a28000  andi        $v0, $a1, 0x8000
    ctx->pc = 0x32b690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
    // 0x32b694: 0x24a34000  addiu       $v1, $a1, 0x4000
    ctx->pc = 0x32b694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16384));
    // 0x32b698: 0x24400  sll         $t0, $v0, 16
    ctx->pc = 0x32b698u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x32b69c: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x32b69cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x32b6a0: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x32b6a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x32b6a4: 0x46119201  sub.s       $f8, $f18, $f17
    ctx->pc = 0x32b6a4u;
    ctx->f[8] = FPU_SUB_S(ctx->f[18], ctx->f[17]);
    // 0x32b6a8: 0x46000147  neg.s       $f5, $f0
    ctx->pc = 0x32b6a8u;
    ctx->f[5] = FPU_NEG_S(ctx->f[0]);
    // 0x32b6ac: 0x23400  sll         $a2, $v0, 16
    ctx->pc = 0x32b6acu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x32b6b0: 0x30a74000  andi        $a3, $a1, 0x4000
    ctx->pc = 0x32b6b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16384);
    // 0x32b6b4: 0x460e7100  add.s       $f4, $f14, $f14
    ctx->pc = 0x32b6b4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[14], ctx->f[14]);
    // 0x32b6b8: 0x30a43fff  andi        $a0, $a1, 0x3FFF
    ctx->pc = 0x32b6b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16383);
    // 0x32b6bc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x32B6BCu;
    {
        const bool branch_taken_0x32b6bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B6BCu;
        // 0x32b6c0: 0x46108400  add.s       $f16, $f16, $f16 (Delay Slot)
        ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b6bc) {
            ctx->pc = 0x32B6CCu;
            goto label_32b6cc;
        }
    }
    ctx->pc = 0x32B6C4u;
    // 0x32b6c4: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x32b6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x32b6c8: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x32b6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_32b6cc:
    // 0x32b6cc: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x32b6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x32b6d0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x32b6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x32b6d4: 0x24640340  addiu       $a0, $v1, 0x340
    ctx->pc = 0x32b6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 832));
    // 0x32b6d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x32b6d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b6dc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x32b6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x32b6e0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x32b6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32b6e4: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x32b6e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x32b6e8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x32b6e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x32b6ec: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x32b6ecu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32b6f0: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x32B6F0u;
    {
        const bool branch_taken_0x32b6f0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x32B6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B6F0u;
        // 0x32b6f4: 0x3c020015  lui         $v0, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b6f0) {
            ctx->pc = 0x32B730u;
            goto label_32b730;
        }
    }
    ctx->pc = 0x32B6F8u;
    // 0x32b6f8: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x32B6F8u;
    {
        const bool branch_taken_0x32b6f8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B6F8u;
        // 0x32b6fc: 0x30a33fff  andi        $v1, $a1, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b6f8) {
            ctx->pc = 0x32B708u;
            goto label_32b708;
        }
    }
    ctx->pc = 0x32B700u;
    // 0x32b700: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x32b700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x32b704: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x32b704u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_32b708:
    // 0x32b708: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x32b708u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32b70c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x32b70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x32b710: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x32b710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32b714: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x32b714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x32b718: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32b718u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b71c: 0x0  nop
    ctx->pc = 0x32b71cu;
    // NOP
    // 0x32b720: 0x0  nop
    ctx->pc = 0x32b720u;
    // NOP
    // 0x32b724: 0x460201c3  div.s       $f7, $f0, $f2
    ctx->pc = 0x32b724u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[7] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[7] = ctx->f[0] / ctx->f[2];
    // 0x32b728: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x32B728u;
    {
        const bool branch_taken_0x32b728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b728) {
            ctx->pc = 0x32B734u;
            goto label_32b734;
        }
    }
    ctx->pc = 0x32B730u;
label_32b730:
    // 0x32b730: 0xc4474e48  lwc1        $f7, 0x4E48($v0)
    ctx->pc = 0x32b730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_32b734:
    // 0x32b734: 0x0  nop
    ctx->pc = 0x32b734u;
    // NOP
    // 0x32b738: 0x0  nop
    ctx->pc = 0x32b738u;
    // NOP
    // 0x32b73c: 0x460c3883  div.s       $f2, $f7, $f12
    ctx->pc = 0x32b73cu;
    if (ctx->f[12] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[7] * 0.0f); } else ctx->f[2] = ctx->f[7] / ctx->f[12];
    // 0x32b740: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x32b740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
    // 0x32b744: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x32b744u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32b748: 0x460d2101  sub.s       $f4, $f4, $f13
    ctx->pc = 0x32b748u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[13]);
    // 0x32b74c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x32b74cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x32b750: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x32b750u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b754: 0x46019042  mul.s       $f1, $f18, $f1
    ctx->pc = 0x32b754u;
    ctx->f[1] = FPU_MUL_S(ctx->f[18], ctx->f[1]);
    // 0x32b758: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x32b758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x32b75c: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x32b75cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x32b760: 0x461078c1  sub.s       $f3, $f15, $f16
    ctx->pc = 0x32b760u;
    ctx->f[3] = FPU_SUB_S(ctx->f[15], ctx->f[16]);
    // 0x32b764: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x32b764u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x32b768: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x32b768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    // 0x32b76c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x32b76cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b770: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x32b770u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x32b774: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x32b774u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x32b778: 0x46110842  mul.s       $f1, $f1, $f17
    ctx->pc = 0x32b778u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[17]);
    // 0x32b77c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x32b77cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x32b780: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x32b780u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x32b784: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x32b784u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x32b788: 0x0  nop
    ctx->pc = 0x32b788u;
    // NOP
    // 0x32b78c: 0x0  nop
    ctx->pc = 0x32b78cu;
    // NOP
    // 0x32b790: 0x46020083  div.s       $f2, $f0, $f2
    ctx->pc = 0x32b790u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[2] = ctx->f[0] / ctx->f[2];
    // 0x32b794: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x32b794u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x32b798: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x32b798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x32b79c: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x32b79cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x32b7a0: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x32b7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x32b7a4: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x32b7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x32b7a8: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x32b7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x32b7ac: 0x0  nop
    ctx->pc = 0x32b7acu;
    // NOP
    // 0x32b7b0: 0x0  nop
    ctx->pc = 0x32b7b0u;
    // NOP
    // 0x32b7b4: 0x46070003  div.s       $f0, $f0, $f7
    ctx->pc = 0x32b7b4u;
    if (ctx->f[7] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[7];
    // 0x32b7b8: 0xe7a40020  swc1        $f4, 0x20($sp)
    ctx->pc = 0x32b7b8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x32b7bc: 0xe7a30024  swc1        $f3, 0x24($sp)
    ctx->pc = 0x32b7bcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x32b7c0: 0x460f1082  mul.s       $f2, $f2, $f15
    ctx->pc = 0x32b7c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[15]);
    // 0x32b7c4: 0xe7a6002c  swc1        $f6, 0x2C($sp)
    ctx->pc = 0x32b7c4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x32b7c8: 0x0  nop
    ctx->pc = 0x32b7c8u;
    // NOP
    // 0x32b7cc: 0x0  nop
    ctx->pc = 0x32b7ccu;
    // NOP
    // 0x32b7d0: 0x46082943  div.s       $f5, $f5, $f8
    ctx->pc = 0x32b7d0u;
    if (ctx->f[8] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = copysignf(INFINITY, ctx->f[5] * 0.0f); } else ctx->f[5] = ctx->f[5] / ctx->f[8];
    // 0x32b7d4: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x32b7d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x32b7d8: 0x460d0002  mul.s       $f0, $f0, $f13
    ctx->pc = 0x32b7d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x32b7dc: 0x0  nop
    ctx->pc = 0x32b7dcu;
    // NOP
    // 0x32b7e0: 0x0  nop
    ctx->pc = 0x32b7e0u;
    // NOP
    // 0x32b7e4: 0x46080843  div.s       $f1, $f1, $f8
    ctx->pc = 0x32b7e4u;
    if (ctx->f[8] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[8];
    // 0x32b7e8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x32b7e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x32b7ec: 0xe7a50028  swc1        $f5, 0x28($sp)
    ctx->pc = 0x32b7ecu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x32b7f0: 0xc0ce51a  jal         func_339468
    ctx->pc = 0x32B7F0u;
    SET_GPR_U32(ctx, 31, 0x32B7F8u);
    ctx->pc = 0x32B7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B7F0u;
    // 0x32b7f4: 0xe7a10038  swc1        $f1, 0x38($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x339468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339468u, 0x32B7F0u, 0x32B7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B7F8u;
label_32b7f8:
    // 0x32b7f8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x32b7f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32b7fc: 0x3e00008  jr          $ra
    ctx->pc = 0x32B7FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32B800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B7FCu;
        // 0x32b800: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32B7FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32B804u;
    // 0x32b804: 0x0  nop
    ctx->pc = 0x32b804u;
    // NOP
    // 0x32b808: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x32b808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
    // 0x32b80c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x32b80cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b810: 0x46108880  add.s       $f2, $f17, $f16
    ctx->pc = 0x32b810u;
    ctx->f[2] = FPU_ADD_S(ctx->f[17], ctx->f[16]);
    // 0x32b814: 0x460c68c0  add.s       $f3, $f13, $f12
    ctx->pc = 0x32b814u;
    ctx->f[3] = FPU_ADD_S(ctx->f[13], ctx->f[12]);
    // 0x32b818: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x32b818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x32b81c: 0x46008802  mul.s       $f0, $f17, $f0
    ctx->pc = 0x32b81cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[17], ctx->f[0]);
    // 0x32b820: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x32b820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x32b824: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x32b824u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x32b828: 0x460e7900  add.s       $f4, $f15, $f14
    ctx->pc = 0x32b828u;
    ctx->f[4] = FPU_ADD_S(ctx->f[15], ctx->f[14]);
    // 0x32b82c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x32b82cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x32b830: 0x46108040  add.s       $f1, $f16, $f16
    ctx->pc = 0x32b830u;
    ctx->f[1] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
    // 0x32b834: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x32b834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    // 0x32b838: 0x460c6b41  sub.s       $f13, $f13, $f12
    ctx->pc = 0x32b838u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[12]);
    // 0x32b83c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x32b83cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b840: 0x460e7bc1  sub.s       $f15, $f15, $f14
    ctx->pc = 0x32b840u;
    ctx->f[15] = FPU_SUB_S(ctx->f[15], ctx->f[14]);
    // 0x32b844: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x32b844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x32b848: 0x46108c41  sub.s       $f17, $f17, $f16
    ctx->pc = 0x32b848u;
    ctx->f[17] = FPU_SUB_S(ctx->f[17], ctx->f[16]);
    // 0x32b84c: 0xe7a5002c  swc1        $f5, 0x2C($sp)
    ctx->pc = 0x32b84cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x32b850: 0x46100002  mul.s       $f0, $f0, $f16
    ctx->pc = 0x32b850u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[16]);
    // 0x32b854: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x32b854u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x32b858: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x32b858u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x32b85c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x32b85cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x32b860: 0x0  nop
    ctx->pc = 0x32b860u;
    // NOP
    // 0x32b864: 0x0  nop
    ctx->pc = 0x32b864u;
    // NOP
    // 0x32b868: 0x460f2103  div.s       $f4, $f4, $f15
    ctx->pc = 0x32b868u;
    if (ctx->f[15] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[4] = ctx->f[4] / ctx->f[15];
    // 0x32b86c: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x32b86cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x32b870: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x32b870u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x32b874: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x32b874u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x32b878: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x32b878u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x32b87c: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x32b87cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x32b880: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x32b880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x32b884: 0x0  nop
    ctx->pc = 0x32b884u;
    // NOP
    // 0x32b888: 0x0  nop
    ctx->pc = 0x32b888u;
    // NOP
    // 0x32b88c: 0x460f0bc3  div.s       $f15, $f1, $f15
    ctx->pc = 0x32b88cu;
    if (ctx->f[15] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[15] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[15] = ctx->f[1] / ctx->f[15];
    // 0x32b890: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x32b890u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x32b894: 0xe7a40024  swc1        $f4, 0x24($sp)
    ctx->pc = 0x32b894u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x32b898: 0x0  nop
    ctx->pc = 0x32b898u;
    // NOP
    // 0x32b89c: 0x0  nop
    ctx->pc = 0x32b89cu;
    // NOP
    // 0x32b8a0: 0x460d18c3  div.s       $f3, $f3, $f13
    ctx->pc = 0x32b8a0u;
    if (ctx->f[13] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[3] = ctx->f[3] / ctx->f[13];
    // 0x32b8a4: 0xe7af0014  swc1        $f15, 0x14($sp)
    ctx->pc = 0x32b8a4u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x32b8a8: 0x0  nop
    ctx->pc = 0x32b8a8u;
    // NOP
    // 0x32b8ac: 0x0  nop
    ctx->pc = 0x32b8acu;
    // NOP
    // 0x32b8b0: 0x46110003  div.s       $f0, $f0, $f17
    ctx->pc = 0x32b8b0u;
    if (ctx->f[17] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[17];
    // 0x32b8b4: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x32b8b4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x32b8b8: 0x0  nop
    ctx->pc = 0x32b8b8u;
    // NOP
    // 0x32b8bc: 0x0  nop
    ctx->pc = 0x32b8bcu;
    // NOP
    // 0x32b8c0: 0x46111083  div.s       $f2, $f2, $f17
    ctx->pc = 0x32b8c0u;
    if (ctx->f[17] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[17];
    // 0x32b8c4: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x32b8c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x32b8c8: 0x0  nop
    ctx->pc = 0x32b8c8u;
    // NOP
    // 0x32b8cc: 0x0  nop
    ctx->pc = 0x32b8ccu;
    // NOP
    // 0x32b8d0: 0x460d0843  div.s       $f1, $f1, $f13
    ctx->pc = 0x32b8d0u;
    if (ctx->f[13] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[13];
    // 0x32b8d4: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x32b8d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x32b8d8: 0xc0ce51a  jal         func_339468
    ctx->pc = 0x32B8D8u;
    SET_GPR_U32(ctx, 31, 0x32B8E0u);
    ctx->pc = 0x32B8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B8D8u;
    // 0x32b8dc: 0xe7a10000  swc1        $f1, 0x0($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x339468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339468u, 0x32B8D8u, 0x32B8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B8E0u;
label_32b8e0:
    // 0x32b8e0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x32b8e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32b8e4: 0x3e00008  jr          $ra
    ctx->pc = 0x32B8E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32B8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B8E4u;
        // 0x32b8e8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32B8E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32B8ECu;
    // 0x32b8ec: 0x0  nop
    ctx->pc = 0x32b8ecu;
    // NOP
    ctx->pc = 0x32b8f0u;
}
