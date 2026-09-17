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

// Function: sub_0024E3D8
// Address: 0x24e3d8 - 0x24e848
void sub_0024E3D8_0x24e3d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024E3D8_0x24e3d8");
#endif

    switch (ctx->pc) {
        case 0x24e50cu: goto label_24e50c;
        case 0x24e544u: goto label_24e544;
        case 0x24e7f8u: goto label_24e7f8;
        case 0x24e820u: goto label_24e820;
        default: break;
    }

    ctx->pc = 0x24e3d8u;

    // 0x24e3d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x24e3d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x24e3dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24e3dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24e3e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24e3e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e3e4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x24e3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x24e3e8: 0x261300c0  addiu       $s3, $s0, 0xC0
    ctx->pc = 0x24e3e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x24e3ec: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x24e3ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x24e3f0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x24e3f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e3f4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x24e3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x24e3f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24e3f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24e3fc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x24e3fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x24e400: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x24e400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x24e404: 0x8202011b  lb          $v0, 0x11B($s0)
    ctx->pc = 0x24e404u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 283)));
    // 0x24e408: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x24e408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24e40c: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x24E40Cu;
    {
        const bool branch_taken_0x24e40c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E40Cu;
        // 0x24e410: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e40c) {
            ctx->pc = 0x24E4B8u;
            goto label_24e4b8;
        }
    }
    ctx->pc = 0x24E414u;
    // 0x24e414: 0x92020059  lbu         $v0, 0x59($s0)
    ctx->pc = 0x24e414u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 89)));
    // 0x24e418: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x24e418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x24e41c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x24E41Cu;
    {
        const bool branch_taken_0x24e41c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E41Cu;
        // 0x24e420: 0x8e060060  lw          $a2, 0x60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e41c) {
            ctx->pc = 0x24E428u;
            goto label_24e428;
        }
    }
    ctx->pc = 0x24E424u;
    // 0x24e424: 0x8cc60004  lw          $a2, 0x4($a2)
    ctx->pc = 0x24e424u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_24e428:
    // 0x24e428: 0x84c20006  lh          $v0, 0x6($a2)
    ctx->pc = 0x24e428u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x24e42c: 0x86050064  lh          $a1, 0x64($s0)
    ctx->pc = 0x24e42cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x24e430: 0x80c40001  lb          $a0, 0x1($a2)
    ctx->pc = 0x24e430u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x24e434: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x24e434u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x24e438: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x24e438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x24e43c: 0x8603004c  lh          $v1, 0x4C($s0)
    ctx->pc = 0x24e43cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x24e440: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x24e440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x24e444: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x24e444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24e448: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x24e448u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x24e44c: 0xc6020024  lwc1        $f2, 0x24($s0)
    ctx->pc = 0x24e44cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24e450: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x24e450u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x24e454: 0xc6030028  lwc1        $f3, 0x28($s0)
    ctx->pc = 0x24e454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24e458: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24e458u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24e45c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x24e45cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x24e460: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x24e460u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x24e464: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24e464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24e468: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x24e468u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x24e46c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x24e46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x24e470: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x24e470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x24e474: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x24e474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24e478: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x24e478u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x24e47c: 0xe6010030  swc1        $f1, 0x30($s0)
    ctx->pc = 0x24e47cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x24e480: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x24e480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24e484: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x24e484u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x24e488: 0xe6020034  swc1        $f2, 0x34($s0)
    ctx->pc = 0x24e488u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x24e48c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x24e48cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24e490: 0xe604003c  swc1        $f4, 0x3C($s0)
    ctx->pc = 0x24e490u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x24e494: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x24e494u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x24e498: 0xe6030038  swc1        $f3, 0x38($s0)
    ctx->pc = 0x24e498u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x24e49c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x24e49cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24e4a0: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x24e4a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x24e4a4: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x24e4a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24e4a8: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x24e4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x24e4ac: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x24E4ACu;
    {
        const bool branch_taken_0x24e4ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E4ACu;
        // 0x24e4b0: 0xe6010044  swc1        $f1, 0x44($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e4ac) {
            ctx->pc = 0x24E754u;
            goto label_24e754;
        }
    }
    ctx->pc = 0x24E4B4u;
    // 0x24e4b4: 0x0  nop
    ctx->pc = 0x24e4b4u;
    // NOP
label_24e4b8:
    // 0x24e4b8: 0x92030059  lbu         $v1, 0x59($s0)
    ctx->pc = 0x24e4b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 89)));
    // 0x24e4bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24e4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24e4c0: 0x8e110060  lw          $s1, 0x60($s0)
    ctx->pc = 0x24e4c0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x24e4c4: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x24E4C4u;
    {
        const bool branch_taken_0x24e4c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24E4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E4C4u;
        // 0x24e4c8: 0x86120064  lh          $s2, 0x64($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e4c4) {
            ctx->pc = 0x24E518u;
            goto label_24e518;
        }
    }
    ctx->pc = 0x24E4CCu;
    // 0x24e4cc: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x24e4ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x24e4d0: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x24E4D0u;
    {
        const bool branch_taken_0x24e4d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E4D0u;
        // 0x24e4d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e4d0) {
            ctx->pc = 0x24E554u;
            goto label_24e554;
        }
    }
    ctx->pc = 0x24E4D8u;
    // 0x24e4d8: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x24E4D8u;
    {
        const bool branch_taken_0x24e4d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x24e4d8) {
            ctx->pc = 0x24E554u;
            goto label_24e554;
        }
    }
    ctx->pc = 0x24E4E0u;
    // 0x24e4e0: 0x8f82a9dc  lw          $v0, -0x5624($gp)
    ctx->pc = 0x24e4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945244)));
    // 0x24e4e4: 0x14510003  bne         $v0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24E4E4u;
    {
        const bool branch_taken_0x24e4e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x24E4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E4E4u;
        // 0x24e4e8: 0x8f82a9e4  lw          $v0, -0x561C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945252)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e4e4) {
            ctx->pc = 0x24E4F4u;
            goto label_24e4f4;
        }
    }
    ctx->pc = 0x24E4ECu;
    // 0x24e4ec: 0x12420019  beq         $s2, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x24E4ECu;
    {
        const bool branch_taken_0x24e4ec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x24E4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E4ECu;
        // 0x24e4f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e4ec) {
            ctx->pc = 0x24E554u;
            goto label_24e554;
        }
    }
    ctx->pc = 0x24E4F4u;
label_24e4f4:
    // 0x24e4f4: 0x44926000  mtc1        $s2, $f12
    ctx->pc = 0x24e4f4u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x24e4f8: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x24e4f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x24e4fc: 0x8f84a9d4  lw          $a0, -0x562C($gp)
    ctx->pc = 0x24e4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945236)));
    // 0x24e500: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x24e500u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e504: 0xc097550  jal         func_25D540
    ctx->pc = 0x24E504u;
    SET_GPR_U32(ctx, 31, 0x24E50Cu);
    ctx->pc = 0x24E508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E504u;
    // 0x24e508: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D540u, 0x24E504u, 0x24E50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E50Cu;
label_24e50c:
    // 0x24e50c: 0xaf91a9dc  sw          $s1, -0x5624($gp)
    ctx->pc = 0x24e50cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294945244), GPR_U32(ctx, 17));
    // 0x24e510: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x24E510u;
    {
        const bool branch_taken_0x24e510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E510u;
        // 0x24e514: 0xaf92a9e4  sw          $s2, -0x561C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294945252), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e510) {
            ctx->pc = 0x24E54Cu;
            goto label_24e54c;
        }
    }
    ctx->pc = 0x24E518u;
label_24e518:
    // 0x24e518: 0x8f82a9e0  lw          $v0, -0x5620($gp)
    ctx->pc = 0x24e518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945248)));
    // 0x24e51c: 0x14510003  bne         $v0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24E51Cu;
    {
        const bool branch_taken_0x24e51c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x24E520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E51Cu;
        // 0x24e520: 0x8f82a9e8  lw          $v0, -0x5618($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e51c) {
            ctx->pc = 0x24E52Cu;
            goto label_24e52c;
        }
    }
    ctx->pc = 0x24E524u;
    // 0x24e524: 0x5242000a  beql        $s2, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x24E524u;
    {
        const bool branch_taken_0x24e524 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x24e524) {
            ctx->pc = 0x24E528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E524u;
            // 0x24e528: 0x92030059  lbu         $v1, 0x59($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 89)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E550u;
            goto label_24e550;
        }
    }
    ctx->pc = 0x24E52Cu;
label_24e52c:
    // 0x24e52c: 0x44926000  mtc1        $s2, $f12
    ctx->pc = 0x24e52cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x24e530: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x24e530u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x24e534: 0x8f84a9d8  lw          $a0, -0x5628($gp)
    ctx->pc = 0x24e534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945240)));
    // 0x24e538: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x24e538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e53c: 0xc097550  jal         func_25D540
    ctx->pc = 0x24E53Cu;
    SET_GPR_U32(ctx, 31, 0x24E544u);
    ctx->pc = 0x24E540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E53Cu;
    // 0x24e540: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D540u, 0x24E53Cu, 0x24E544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E544u;
label_24e544:
    // 0x24e544: 0xaf91a9e0  sw          $s1, -0x5620($gp)
    ctx->pc = 0x24e544u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294945248), GPR_U32(ctx, 17));
    // 0x24e548: 0xaf92a9e8  sw          $s2, -0x5618($gp)
    ctx->pc = 0x24e548u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294945256), GPR_U32(ctx, 18));
label_24e54c:
    // 0x24e54c: 0x92030059  lbu         $v1, 0x59($s0)
    ctx->pc = 0x24e54cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 89)));
label_24e550:
    // 0x24e550: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24e550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24e554:
    // 0x24e554: 0x10620024  beq         $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x24E554u;
    {
        const bool branch_taken_0x24e554 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24E558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E554u;
        // 0x24e558: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e554) {
            ctx->pc = 0x24E5E8u;
            goto label_24e5e8;
        }
    }
    ctx->pc = 0x24E55Cu;
    // 0x24e55c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24E55Cu;
    {
        const bool branch_taken_0x24e55c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E55Cu;
        // 0x24e560: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e55c) {
            ctx->pc = 0x24E578u;
            goto label_24e578;
        }
    }
    ctx->pc = 0x24E564u;
    // 0x24e564: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x24E564u;
    {
        const bool branch_taken_0x24e564 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e564) {
            ctx->pc = 0x24E568u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E564u;
            // 0x24e568: 0x8603004c  lh          $v1, 0x4C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E590u;
            goto label_24e590;
        }
    }
    ctx->pc = 0x24E56Cu;
    // 0x24e56c: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x24E56Cu;
    {
        const bool branch_taken_0x24e56c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E56Cu;
        // 0x24e570: 0x8602011c  lh          $v0, 0x11C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 284)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e56c) {
            ctx->pc = 0x24E758u;
            goto label_24e758;
        }
    }
    ctx->pc = 0x24E574u;
    // 0x24e574: 0x0  nop
    ctx->pc = 0x24e574u;
    // NOP
label_24e578:
    // 0x24e578: 0x10620035  beq         $v1, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x24E578u;
    {
        const bool branch_taken_0x24e578 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24E57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E578u;
        // 0x24e57c: 0x24020081  addiu       $v0, $zero, 0x81 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e578) {
            ctx->pc = 0x24E650u;
            goto label_24e650;
        }
    }
    ctx->pc = 0x24E580u;
    // 0x24e580: 0x50620051  beql        $v1, $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x24E580u;
    {
        const bool branch_taken_0x24e580 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x24e580) {
            ctx->pc = 0x24E584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E580u;
            // 0x24e584: 0x8e060060  lw          $a2, 0x60($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E6C8u;
            goto label_24e6c8;
        }
    }
    ctx->pc = 0x24E588u;
    // 0x24e588: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x24E588u;
    {
        const bool branch_taken_0x24e588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E588u;
        // 0x24e58c: 0x8602011c  lh          $v0, 0x11C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 284)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e588) {
            ctx->pc = 0x24E758u;
            goto label_24e758;
        }
    }
    ctx->pc = 0x24E590u;
label_24e590:
    // 0x24e590: 0x26060030  addiu       $a2, $s0, 0x30
    ctx->pc = 0x24e590u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x24e594: 0x8f85a9d4  lw          $a1, -0x562C($gp)
    ctx->pc = 0x24e594u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945236)));
    // 0x24e598: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x24e598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x24e59c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x24e59cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x24e5a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24e5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24e5a4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x24e5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x24e5a8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x24e5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x24e5ac: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x24e5acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e5b0: 0xd8900000  lqc2        $vf16, 0x0($a0)
    ctx->pc = 0x24e5b0u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24e5b4: 0xd87f0000  lqc2        $vf31, 0x0($v1)
    ctx->pc = 0x24e5b4u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24e5b8: 0x4bdf842a  vmul.xyz    $vf16, $vf16, $vf31
    ctx->pc = 0x24e5b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x24e5bc: 0xf8d00000  sqc2        $vf16, 0x0($a2)
    ctx->pc = 0x24e5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x24e5c0: 0xc7808874  lwc1        $f0, -0x778C($gp)
    ctx->pc = 0x24e5c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24e5c4: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x24e5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24e5c8: 0xc7838878  lwc1        $f3, -0x7788($gp)
    ctx->pc = 0x24e5c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24e5cc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x24e5ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x24e5d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24e5d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24e5d4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x24e5d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x24e5d8: 0xe6010040  swc1        $f1, 0x40($s0)
    ctx->pc = 0x24e5d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x24e5dc: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x24E5DCu;
    {
        const bool branch_taken_0x24e5dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E5DCu;
        // 0x24e5e0: 0xc4600020  lwc1        $f0, 0x20($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e5dc) {
            ctx->pc = 0x24E6B4u;
            goto label_24e6b4;
        }
    }
    ctx->pc = 0x24E5E4u;
    // 0x24e5e4: 0x0  nop
    ctx->pc = 0x24e5e4u;
    // NOP
label_24e5e8:
    // 0x24e5e8: 0x8602004c  lh          $v0, 0x4C($s0)
    ctx->pc = 0x24e5e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x24e5ec: 0x26060030  addiu       $a2, $s0, 0x30
    ctx->pc = 0x24e5ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x24e5f0: 0x8f85a9d8  lw          $a1, -0x5628($gp)
    ctx->pc = 0x24e5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945240)));
    // 0x24e5f4: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x24e5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x24e5f8: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x24e5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x24e5fc: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x24e5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x24e600: 0xd8700000  lqc2        $vf16, 0x0($v1)
    ctx->pc = 0x24e600u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24e604: 0xd89f0000  lqc2        $vf31, 0x0($a0)
    ctx->pc = 0x24e604u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24e608: 0x4bdf842a  vmul.xyz    $vf16, $vf16, $vf31
    ctx->pc = 0x24e608u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x24e60c: 0xf8d00000  sqc2        $vf16, 0x0($a2)
    ctx->pc = 0x24e60cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x24e610: 0xc780887c  lwc1        $f0, -0x7784($gp)
    ctx->pc = 0x24e610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24e614: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x24e614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24e618: 0xc7838880  lwc1        $f3, -0x7780($gp)
    ctx->pc = 0x24e618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24e61c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x24e61cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x24e620: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24e620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24e624: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x24e624u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x24e628: 0x3c014700  lui         $at, 0x4700
    ctx->pc = 0x24e628u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18176 << 16));
    // 0x24e62c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x24e62cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x24e630: 0xc7858884  lwc1        $f5, -0x777C($gp)
    ctx->pc = 0x24e630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x24e634: 0xe6010040  swc1        $f1, 0x40($s0)
    ctx->pc = 0x24e634u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x24e638: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x24e638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24e63c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x24e63cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x24e640: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x24e640u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x24e644: 0xe6020044  swc1        $f2, 0x44($s0)
    ctx->pc = 0x24e644u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x24e648: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x24E648u;
    {
        const bool branch_taken_0x24e648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E648u;
        // 0x24e64c: 0xc4800030  lwc1        $f0, 0x30($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e648) {
            ctx->pc = 0x24E740u;
            goto label_24e740;
        }
    }
    ctx->pc = 0x24E650u;
label_24e650:
    // 0x24e650: 0x8e050060  lw          $a1, 0x60($s0)
    ctx->pc = 0x24e650u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x24e654: 0x26080030  addiu       $t0, $s0, 0x30
    ctx->pc = 0x24e654u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x24e658: 0x86020064  lh          $v0, 0x64($s0)
    ctx->pc = 0x24e658u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x24e65c: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x24e65cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x24e660: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x24e660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x24e664: 0x8604004c  lh          $a0, 0x4C($s0)
    ctx->pc = 0x24e664u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x24e668: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x24e668u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x24e66c: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x24e66cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x24e670: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x24e670u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x24e674: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x24e674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x24e678: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x24e678u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x24e67c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24e67cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24e680: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x24e680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x24e684: 0xd8f00000  lqc2        $vf16, 0x0($a3)
    ctx->pc = 0x24e684u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x24e688: 0xd85f0000  lqc2        $vf31, 0x0($v0)
    ctx->pc = 0x24e688u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24e68c: 0x4bdf842a  vmul.xyz    $vf16, $vf16, $vf31
    ctx->pc = 0x24e68cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x24e690: 0xf9100000  sqc2        $vf16, 0x0($t0)
    ctx->pc = 0x24e690u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x24e694: 0xc7808888  lwc1        $f0, -0x7778($gp)
    ctx->pc = 0x24e694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24e698: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x24e698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24e69c: 0xc783888c  lwc1        $f3, -0x7774($gp)
    ctx->pc = 0x24e69cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24e6a0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x24e6a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x24e6a4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24e6a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24e6a8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x24e6a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x24e6ac: 0xe6010040  swc1        $f1, 0x40($s0)
    ctx->pc = 0x24e6acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x24e6b0: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x24e6b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24e6b4:
    // 0x24e6b4: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x24e6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x24e6b8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x24e6b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x24e6bc: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x24e6bcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x24e6c0: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x24E6C0u;
    {
        const bool branch_taken_0x24e6c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E6C0u;
        // 0x24e6c4: 0xe6020044  swc1        $f2, 0x44($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e6c0) {
            ctx->pc = 0x24E754u;
            goto label_24e754;
        }
    }
    ctx->pc = 0x24E6C8u;
label_24e6c8:
    // 0x24e6c8: 0x26080030  addiu       $t0, $s0, 0x30
    ctx->pc = 0x24e6c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x24e6cc: 0x86050064  lh          $a1, 0x64($s0)
    ctx->pc = 0x24e6ccu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x24e6d0: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x24e6d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x24e6d4: 0x8cc20014  lw          $v0, 0x14($a2)
    ctx->pc = 0x24e6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x24e6d8: 0x8603004c  lh          $v1, 0x4C($s0)
    ctx->pc = 0x24e6d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x24e6dc: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x24e6dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x24e6e0: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x24e6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x24e6e4: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x24e6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x24e6e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24e6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24e6ec: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x24e6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x24e6f0: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x24e6f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e6f4: 0xd8f00000  lqc2        $vf16, 0x0($a3)
    ctx->pc = 0x24e6f4u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x24e6f8: 0xd87f0000  lqc2        $vf31, 0x0($v1)
    ctx->pc = 0x24e6f8u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24e6fc: 0x4bdf842a  vmul.xyz    $vf16, $vf16, $vf31
    ctx->pc = 0x24e6fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x24e700: 0xf9100000  sqc2        $vf16, 0x0($t0)
    ctx->pc = 0x24e700u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x24e704: 0xc7808890  lwc1        $f0, -0x7770($gp)
    ctx->pc = 0x24e704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24e708: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x24e708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24e70c: 0xc7838894  lwc1        $f3, -0x776C($gp)
    ctx->pc = 0x24e70cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24e710: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x24e710u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x24e714: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24e714u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24e718: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x24e718u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x24e71c: 0x3c014700  lui         $at, 0x4700
    ctx->pc = 0x24e71cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18176 << 16));
    // 0x24e720: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x24e720u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x24e724: 0xc7858898  lwc1        $f5, -0x7768($gp)
    ctx->pc = 0x24e724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x24e728: 0xe6010040  swc1        $f1, 0x40($s0)
    ctx->pc = 0x24e728u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x24e72c: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x24e72cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24e730: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x24e730u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x24e734: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x24e734u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x24e738: 0xe6020044  swc1        $f2, 0x44($s0)
    ctx->pc = 0x24e738u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x24e73c: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x24e73cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24e740:
    // 0x24e740: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x24e740u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x24e744: 0x0  nop
    ctx->pc = 0x24e744u;
    // NOP
    // 0x24e748: 0x0  nop
    ctx->pc = 0x24e748u;
    // NOP
    // 0x24e74c: 0x46050003  div.s       $f0, $f0, $f5
    ctx->pc = 0x24e74cu;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[5];
    // 0x24e750: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x24e750u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
label_24e754:
    // 0x24e754: 0x8602011c  lh          $v0, 0x11C($s0)
    ctx->pc = 0x24e754u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 284)));
label_24e758:
    // 0x24e758: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x24E758u;
    {
        const bool branch_taken_0x24e758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24E75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E758u;
        // 0x24e75c: 0x9603011c  lhu         $v1, 0x11C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 284)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e758) {
            ctx->pc = 0x24E7C0u;
            goto label_24e7c0;
        }
    }
    ctx->pc = 0x24E760u;
    // 0x24e760: 0x52800012  beql        $s4, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x24E760u;
    {
        const bool branch_taken_0x24e760 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e760) {
            ctx->pc = 0x24E764u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E760u;
            // 0x24e764: 0x96020064  lhu         $v0, 0x64($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E7ACu;
            goto label_24e7ac;
        }
    }
    ctx->pc = 0x24E768u;
    // 0x24e768: 0x8602006c  lh          $v0, 0x6C($s0)
    ctx->pc = 0x24e768u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x24e76c: 0x86030066  lh          $v1, 0x66($s0)
    ctx->pc = 0x24e76cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 102)));
    // 0x24e770: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24e770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24e774: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x24e774u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24e778: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x24e778u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x24e77c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24e77cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24e780: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x24e780u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x24e784: 0x0  nop
    ctx->pc = 0x24e784u;
    // NOP
    // 0x24e788: 0x0  nop
    ctx->pc = 0x24e788u;
    // NOP
    // 0x24e78c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x24e78cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x24e790: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x24e790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x24e794: 0x8602006a  lh          $v0, 0x6A($s0)
    ctx->pc = 0x24e794u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 106)));
    // 0x24e798: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24e798u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24e79c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x24e79cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x24e7a0: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x24e7a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x24e7a4: 0x9603011c  lhu         $v1, 0x11C($s0)
    ctx->pc = 0x24e7a4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x24e7a8: 0x96020064  lhu         $v0, 0x64($s0)
    ctx->pc = 0x24e7a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 100)));
label_24e7ac:
    // 0x24e7ac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x24e7acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x24e7b0: 0xa603011c  sh          $v1, 0x11C($s0)
    ctx->pc = 0x24e7b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 284), (uint16_t)GPR_U32(ctx, 3));
    // 0x24e7b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24e7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24e7b8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x24E7B8u;
    {
        const bool branch_taken_0x24e7b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E7B8u;
        // 0x24e7bc: 0xa6020064  sh          $v0, 0x64($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 100), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e7b8) {
            ctx->pc = 0x24E7F8u;
            goto label_24e7f8;
        }
    }
    ctx->pc = 0x24E7C0u;
label_24e7c0:
    // 0x24e7c0: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x24e7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x24e7c4: 0x8c6288ac  lw          $v0, -0x7754($v1)
    ctx->pc = 0x24e7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A88ACu));
    // 0x24e7c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24E7C8u;
    {
        const bool branch_taken_0x24e7c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E7C8u;
        // 0x24e7cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e7c8) {
            ctx->pc = 0x24E7E0u;
            goto label_24e7e0;
        }
    }
    ctx->pc = 0x24E7D0u;
    // 0x24e7d0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x24e7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x24e7d4: 0x8c4323b4  lw          $v1, 0x23B4($v0)
    ctx->pc = 0x24e7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3B23B4u));
    // 0x24e7d8: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x24e7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x24e7dc: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x24e7dcu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_24e7e0:
    // 0x24e7e0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24E7E0u;
    {
        const bool branch_taken_0x24e7e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E7E0u;
        // 0x24e7e4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e7e0) {
            ctx->pc = 0x24E7F8u;
            goto label_24e7f8;
        }
    }
    ctx->pc = 0x24E7E8u;
    // 0x24e7e8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x24e7e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e7ec: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x24e7ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e7f0: 0xc0938d6  jal         func_24E358
    ctx->pc = 0x24E7F0u;
    SET_GPR_U32(ctx, 31, 0x24E7F8u);
    ctx->pc = 0x24E7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E7F0u;
    // 0x24e7f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24E358u, 0x24E7F0u, 0x24E7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E7F8u;
label_24e7f8:
    // 0x24e7f8: 0x86020064  lh          $v0, 0x64($s0)
    ctx->pc = 0x24e7f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x24e7fc: 0x86030066  lh          $v1, 0x66($s0)
    ctx->pc = 0x24e7fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 102)));
    // 0x24e800: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x24e800u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x24e804: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24E804u;
    {
        const bool branch_taken_0x24e804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24E808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E804u;
        // 0x24e808: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e804) {
            ctx->pc = 0x24E818u;
            goto label_24e818;
        }
    }
    ctx->pc = 0x24E80Cu;
    // 0x24e80c: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x24e80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x24e810: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x24e810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x24e814: 0xae020118  sw          $v0, 0x118($s0)
    ctx->pc = 0x24e814u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 2));
label_24e818:
    // 0x24e818: 0xc0947f6  jal         func_251FD8
    ctx->pc = 0x24E818u;
    SET_GPR_U32(ctx, 31, 0x24E820u);
    ctx->pc = 0x24E81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E818u;
    // 0x24e81c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251FD8u, 0x24E818u, 0x24E820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E820u;
label_24e820:
    // 0x24e820: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24e820u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24e824: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24e824u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24e828: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x24e828u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24e82c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x24e82cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24e830: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x24e830u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24e834: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x24e834u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24e838: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x24e838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24e83c: 0x3e00008  jr          $ra
    ctx->pc = 0x24E83Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24E840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E83Cu;
        // 0x24e840: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24E83Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24E844u;
    // 0x24e844: 0x0  nop
    ctx->pc = 0x24e844u;
    // NOP
    ctx->pc = 0x24e848u;
}
