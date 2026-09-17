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

// Function: sub_002BC4B0
// Address: 0x2bc4b0 - 0x2bc6f8
void sub_002BC4B0_0x2bc4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BC4B0_0x2bc4b0");
#endif

    switch (ctx->pc) {
        case 0x2bc4c8u: goto label_2bc4c8;
        case 0x2bc580u: goto label_2bc580;
        case 0x2bc5dcu: goto label_2bc5dc;
        case 0x2bc5ecu: goto label_2bc5ec;
        default: break;
    }

    ctx->pc = 0x2bc4b0u;

    // 0x2bc4b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bc4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bc4b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2bc4b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2bc4b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2bc4b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc4bc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2bc4bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2bc4c0: 0xc0846f6  jal         func_211BD8
    ctx->pc = 0x2BC4C0u;
    SET_GPR_U32(ctx, 31, 0x2BC4C8u);
    ctx->pc = 0x2BC4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC4C0u;
    // 0x2bc4c4: 0xe7b40010  swc1        $f20, 0x10($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x211BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211BD8u, 0x2BC4C0u, 0x2BC4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC4C8u;
label_2bc4c8:
    // 0x2bc4c8: 0x920301b4  lbu         $v1, 0x1B4($s0)
    ctx->pc = 0x2bc4c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 436)));
    // 0x2bc4cc: 0x38440001  xori        $a0, $v0, 0x1
    ctx->pc = 0x2bc4ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2bc4d0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BC4D0u;
    {
        const bool branch_taken_0x2bc4d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC4D0u;
        // 0x2bc4d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc4d0) {
            ctx->pc = 0x2BC4E0u;
            goto label_2bc4e0;
        }
    }
    ctx->pc = 0x2BC4D8u;
    // 0x2bc4d8: 0x92020187  lbu         $v0, 0x187($s0)
    ctx->pc = 0x2bc4d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 391)));
    // 0x2bc4dc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2bc4dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2bc4e0:
    // 0x2bc4e0: 0x86030148  lh          $v1, 0x148($s0)
    ctx->pc = 0x2bc4e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x2bc4e4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BC4E4u;
    {
        const bool branch_taken_0x2bc4e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bc4e4) {
            ctx->pc = 0x2BC4F4u;
            goto label_2bc4f4;
        }
    }
    ctx->pc = 0x2BC4ECu;
    // 0x2bc4ec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BC4ECu;
    {
        const bool branch_taken_0x2bc4ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc4ec) {
            ctx->pc = 0x2BC4FCu;
            goto label_2bc4fc;
        }
    }
    ctx->pc = 0x2BC4F4u;
label_2bc4f4:
    // 0x2bc4f4: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2BC4F4u;
    {
        const bool branch_taken_0x2bc4f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc4f4) {
            ctx->pc = 0x2BC548u;
            goto label_2bc548;
        }
    }
    ctx->pc = 0x2BC4FCu;
label_2bc4fc:
    // 0x2bc4fc: 0xc60206d0  lwc1        $f2, 0x6D0($s0)
    ctx->pc = 0x2bc4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bc500: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2bc500u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2bc504: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2bc504u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x2bc508: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2bc508u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2bc50c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bc50cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bc510: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2bc510u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2bc514: 0xc60106c0  lwc1        $f1, 0x6C0($s0)
    ctx->pc = 0x2bc514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc518: 0xc60006cc  lwc1        $f0, 0x6CC($s0)
    ctx->pc = 0x2bc518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc51c: 0x0  nop
    ctx->pc = 0x2bc51cu;
    // NOP
    // 0x2bc520: 0x0  nop
    ctx->pc = 0x2bc520u;
    // NOP
    // 0x2bc524: 0x46041083  div.s       $f2, $f2, $f4
    ctx->pc = 0x2bc524u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[4];
    // 0x2bc528: 0xe60106c4  swc1        $f1, 0x6C4($s0)
    ctx->pc = 0x2bc528u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1732), bits); }
    // 0x2bc52c: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x2bc52cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x2bc530: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2bc530u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2bc534: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2bc534u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2bc538: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bc538u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bc53c: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x2BC53Cu;
    {
        const bool branch_taken_0x2bc53c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC53Cu;
        // 0x2bc540: 0xe60006c8  swc1        $f0, 0x6C8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1736), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc53c) {
            ctx->pc = 0x2BC6E0u;
            goto label_2bc6e0;
        }
    }
    ctx->pc = 0x2BC544u;
    // 0x2bc544: 0x0  nop
    ctx->pc = 0x2bc544u;
    // NOP
label_2bc548:
    // 0x2bc548: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2BC548u;
    {
        const bool branch_taken_0x2bc548 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BC54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC548u;
        // 0x2bc54c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc548) {
            ctx->pc = 0x2BC578u;
            goto label_2bc578;
        }
    }
    ctx->pc = 0x2BC550u;
    // 0x2bc550: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BC550u;
    {
        const bool branch_taken_0x2bc550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC550u;
        // 0x2bc554: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc550) {
            ctx->pc = 0x2BC578u;
            goto label_2bc578;
        }
    }
    ctx->pc = 0x2BC558u;
    // 0x2bc558: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bc558u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bc55c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bc55cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bc560: 0xae0206d0  sw          $v0, 0x6D0($s0)
    ctx->pc = 0x2bc560u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1744), GPR_U32(ctx, 2));
    // 0x2bc564: 0xe60006cc  swc1        $f0, 0x6CC($s0)
    ctx->pc = 0x2bc564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1740), bits); }
    // 0x2bc568: 0xe60006c8  swc1        $f0, 0x6C8($s0)
    ctx->pc = 0x2bc568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1736), bits); }
    // 0x2bc56c: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x2BC56Cu;
    {
        const bool branch_taken_0x2bc56c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC56Cu;
        // 0x2bc570: 0xe60006c4  swc1        $f0, 0x6C4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1732), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc56c) {
            ctx->pc = 0x2BC6E0u;
            goto label_2bc6e0;
        }
    }
    ctx->pc = 0x2BC574u;
    // 0x2bc574: 0x0  nop
    ctx->pc = 0x2bc574u;
    // NOP
label_2bc578:
    // 0x2bc578: 0xc0af122  jal         func_2BC488
    ctx->pc = 0x2BC578u;
    SET_GPR_U32(ctx, 31, 0x2BC580u);
    ctx->pc = 0x2BC57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC578u;
    // 0x2bc57c: 0xc61406c0  lwc1        $f20, 0x6C0($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC488u, 0x2BC578u, 0x2BC580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC580u;
label_2bc580:
    // 0x2bc580: 0xc44206c0  lwc1        $f2, 0x6C0($v0)
    ctx->pc = 0x2bc580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bc584: 0x4602a034  c.lt.s      $f20, $f2
    ctx->pc = 0x2bc584u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bc588: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2BC588u;
    {
        const bool branch_taken_0x2bc588 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bc588) {
            ctx->pc = 0x2BC5A0u;
            goto label_2bc5a0;
        }
    }
    ctx->pc = 0x2BC590u;
    // 0x2bc590: 0xc78191b4  lwc1        $f1, -0x6E4C($gp)
    ctx->pc = 0x2bc590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939060)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc594: 0xc78091b8  lwc1        $f0, -0x6E48($gp)
    ctx->pc = 0x2bc594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc598: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2BC598u;
    {
        const bool branch_taken_0x2bc598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC598u;
        // 0x2bc59c: 0x4601a042  mul.s       $f1, $f20, $f1 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc598) {
            ctx->pc = 0x2BC5ACu;
            goto label_2bc5ac;
        }
    }
    ctx->pc = 0x2BC5A0u;
label_2bc5a0:
    // 0x2bc5a0: 0xc78191bc  lwc1        $f1, -0x6E44($gp)
    ctx->pc = 0x2bc5a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939068)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc5a4: 0xc78091c0  lwc1        $f0, -0x6E40($gp)
    ctx->pc = 0x2bc5a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939072)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc5a8: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x2bc5a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
label_2bc5ac:
    // 0x2bc5ac: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2bc5acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2bc5b0: 0x86020148  lh          $v0, 0x148($s0)
    ctx->pc = 0x2bc5b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x2bc5b4: 0x1840002e  blez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x2BC5B4u;
    {
        const bool branch_taken_0x2bc5b4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2BC5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC5B4u;
        // 0x2bc5b8: 0x46000d00  add.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc5b4) {
            ctx->pc = 0x2BC670u;
            goto label_2bc670;
        }
    }
    ctx->pc = 0x2BC5BCu;
    // 0x2bc5bc: 0x8602014a  lh          $v0, 0x14A($s0)
    ctx->pc = 0x2bc5bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 330)));
    // 0x2bc5c0: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BC5C0u;
    {
        const bool branch_taken_0x2bc5c0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2bc5c0) {
            ctx->pc = 0x2BC5C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC5C0u;
            // 0x2bc5c4: 0xc60006c0  lwc1        $f0, 0x6C0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BC5D0u;
            goto label_2bc5d0;
        }
    }
    ctx->pc = 0x2BC5C8u;
    // 0x2bc5c8: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x2bc5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2bc5cc: 0xc44006c0  lwc1        $f0, 0x6C0($v0)
    ctx->pc = 0x2bc5ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2bc5d0:
    // 0x2bc5d0: 0xe60006c4  swc1        $f0, 0x6C4($s0)
    ctx->pc = 0x2bc5d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1732), bits); }
    // 0x2bc5d4: 0xc099118  jal         func_264460
    ctx->pc = 0x2BC5D4u;
    SET_GPR_U32(ctx, 31, 0x2BC5DCu);
    ctx->pc = 0x2BC5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC5D4u;
    // 0x2bc5d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264460u, 0x2BC5D4u, 0x2BC5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC5DCu;
label_2bc5dc:
    // 0x2bc5dc: 0x50400028  beql        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x2BC5DCu;
    {
        const bool branch_taken_0x2bc5dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc5dc) {
            ctx->pc = 0x2BC5E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC5DCu;
            // 0x2bc5e0: 0x920301af  lbu         $v1, 0x1AF($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 431)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BC680u;
            goto label_2bc680;
        }
    }
    ctx->pc = 0x2BC5E4u;
    // 0x2bc5e4: 0xc0af122  jal         func_2BC488
    ctx->pc = 0x2BC5E4u;
    SET_GPR_U32(ctx, 31, 0x2BC5ECu);
    ctx->pc = 0x2BC5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC5E4u;
    // 0x2bc5e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC488u, 0x2BC5E4u, 0x2BC5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC5ECu;
label_2bc5ec:
    // 0x2bc5ec: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x2bc5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2bc5f0: 0x84430040  lh          $v1, 0x40($v0)
    ctx->pc = 0x2bc5f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x2bc5f4: 0x54640034  bnel        $v1, $a0, . + 4 + (0x34 << 2)
    ctx->pc = 0x2BC5F4u;
    {
        const bool branch_taken_0x2bc5f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2bc5f4) {
            ctx->pc = 0x2BC5F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC5F4u;
            // 0x2bc5f8: 0x920301af  lbu         $v1, 0x1AF($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 431)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BC6C8u;
            goto label_2bc6c8;
        }
    }
    ctx->pc = 0x2BC5FCu;
    // 0x2bc5fc: 0x3c014260  lui         $at, 0x4260
    ctx->pc = 0x2bc5fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16992 << 16));
    // 0x2bc600: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2bc600u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2bc604: 0xc60100a8  lwc1        $f1, 0xA8($s0)
    ctx->pc = 0x2bc604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc608: 0x3c013e00  lui         $at, 0x3E00
    ctx->pc = 0x2bc608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15872 << 16));
    // 0x2bc60c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2bc60cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2bc610: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x2bc610u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2bc614: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2bc614u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bc618: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x2bc618u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x2bc61c: 0x460308c2  mul.s       $f3, $f1, $f3
    ctx->pc = 0x2bc61cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2bc620: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x2bc620u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bc624: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2BC624u;
    {
        const bool branch_taken_0x2bc624 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bc624) {
            ctx->pc = 0x2BC628u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC624u;
            // 0x2bc628: 0x46001886  mov.s       $f2, $f3 (Delay Slot)
            ctx->f[2] = FPU_MOV_S(ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BC62Cu;
            goto label_2bc62c;
        }
    }
    ctx->pc = 0x2BC62Cu;
label_2bc62c:
    // 0x2bc62c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bc62cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bc630: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bc630u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bc634: 0x460010c6  mov.s       $f3, $f2
    ctx->pc = 0x2bc634u;
    ctx->f[3] = FPU_MOV_S(ctx->f[2]);
    // 0x2bc638: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2bc638u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2bc63c: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x2bc63cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bc640: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x2BC640u;
    {
        const bool branch_taken_0x2bc640 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bc640) {
            ctx->pc = 0x2BC644u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC640u;
            // 0x2bc644: 0x46001846  mov.s       $f1, $f3 (Delay Slot)
            ctx->f[1] = FPU_MOV_S(ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BC650u;
            goto label_2bc650;
        }
    }
    ctx->pc = 0x2BC648u;
    // 0x2bc648: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bc648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bc64c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bc64cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2bc650:
    // 0x2bc650: 0x460008c6  mov.s       $f3, $f1
    ctx->pc = 0x2bc650u;
    ctx->f[3] = FPU_MOV_S(ctx->f[1]);
    // 0x2bc654: 0xc78291c4  lwc1        $f2, -0x6E3C($gp)
    ctx->pc = 0x2bc654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939076)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bc658: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2bc658u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2bc65c: 0xc60106c0  lwc1        $f1, 0x6C0($s0)
    ctx->pc = 0x2bc65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc660: 0x920301af  lbu         $v1, 0x1AF($s0)
    ctx->pc = 0x2bc660u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 431)));
    // 0x2bc664: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2bc664u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2bc668: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2BC668u;
    {
        const bool branch_taken_0x2bc668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC668u;
        // 0x2bc66c: 0x46020002  mul.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc668) {
            ctx->pc = 0x2BC6C0u;
            goto label_2bc6c0;
        }
    }
    ctx->pc = 0x2BC670u;
label_2bc670:
    // 0x2bc670: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x2bc670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2bc674: 0x920301af  lbu         $v1, 0x1AF($s0)
    ctx->pc = 0x2bc674u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 431)));
    // 0x2bc678: 0xc44006c0  lwc1        $f0, 0x6C0($v0)
    ctx->pc = 0x2bc678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc67c: 0xe60006c4  swc1        $f0, 0x6C4($s0)
    ctx->pc = 0x2bc67cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1732), bits); }
label_2bc680:
    // 0x2bc680: 0x50600011  beql        $v1, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2BC680u;
    {
        const bool branch_taken_0x2bc680 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc680) {
            ctx->pc = 0x2BC684u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC680u;
            // 0x2bc684: 0xe61406c8  swc1        $f20, 0x6C8($s0) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1736), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BC6C8u;
            goto label_2bc6c8;
        }
    }
    ctx->pc = 0x2BC688u;
    // 0x2bc688: 0xc60206d0  lwc1        $f2, 0x6D0($s0)
    ctx->pc = 0x2bc688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bc68c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2bc68cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2bc690: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2bc690u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x2bc694: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2bc694u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2bc698: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bc698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bc69c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2bc69cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2bc6a0: 0xc60006cc  lwc1        $f0, 0x6CC($s0)
    ctx->pc = 0x2bc6a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc6a4: 0xc60106c0  lwc1        $f1, 0x6C0($s0)
    ctx->pc = 0x2bc6a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc6a8: 0x0  nop
    ctx->pc = 0x2bc6a8u;
    // NOP
    // 0x2bc6ac: 0x0  nop
    ctx->pc = 0x2bc6acu;
    // NOP
    // 0x2bc6b0: 0x46041083  div.s       $f2, $f2, $f4
    ctx->pc = 0x2bc6b0u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[4];
    // 0x2bc6b4: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x2bc6b4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x2bc6b8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2bc6b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2bc6bc: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2bc6bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_2bc6c0:
    // 0x2bc6c0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bc6c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bc6c4: 0xe60006c8  swc1        $f0, 0x6C8($s0)
    ctx->pc = 0x2bc6c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1736), bits); }
label_2bc6c8:
    // 0x2bc6c8: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BC6C8u;
    {
        const bool branch_taken_0x2bc6c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bc6c8) {
            ctx->pc = 0x2BC6CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC6C8u;
            // 0x2bc6cc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BC6E4u;
            goto label_2bc6e4;
        }
    }
    ctx->pc = 0x2BC6D0u;
    // 0x2bc6d0: 0xc60006c8  lwc1        $f0, 0x6C8($s0)
    ctx->pc = 0x2bc6d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc6d4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2bc6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2bc6d8: 0xae0206d0  sw          $v0, 0x6D0($s0)
    ctx->pc = 0x2bc6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1744), GPR_U32(ctx, 2));
    // 0x2bc6dc: 0xe60006cc  swc1        $f0, 0x6CC($s0)
    ctx->pc = 0x2bc6dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1740), bits); }
label_2bc6e0:
    // 0x2bc6e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bc6e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2bc6e4:
    // 0x2bc6e4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2bc6e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bc6e8: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x2bc6e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2bc6ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2BC6ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BC6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC6ECu;
        // 0x2bc6f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BC6ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BC6F4u;
    // 0x2bc6f4: 0x0  nop
    ctx->pc = 0x2bc6f4u;
    // NOP
    ctx->pc = 0x2bc6f8u;
}
