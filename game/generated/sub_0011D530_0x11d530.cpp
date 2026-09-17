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

// Function: sub_0011D530
// Address: 0x11d530 - 0x11eb80
void sub_0011D530_0x11d530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011D530_0x11d530");
#endif

    switch (ctx->pc) {
        case 0x11d548u: goto label_11d548;
        case 0x11d7dcu: goto label_11d7dc;
        case 0x11d840u: goto label_11d840;
        case 0x11d970u: goto label_11d970;
        case 0x11db38u: goto label_11db38;
        case 0x11dc1cu: goto label_11dc1c;
        case 0x11dd10u: goto label_11dd10;
        case 0x11de34u: goto label_11de34;
        case 0x11de3cu: goto label_11de3c;
        case 0x11def0u: goto label_11def0;
        case 0x11dfc8u: goto label_11dfc8;
        case 0x11e058u: goto label_11e058;
        case 0x11e0c0u: goto label_11e0c0;
        case 0x11e3a0u: goto label_11e3a0;
        case 0x11e4d8u: goto label_11e4d8;
        case 0x11eb48u: goto label_11eb48;
        default: break;
    }

    ctx->pc = 0x11d530u;

    // 0x11d530: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11d530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11d534: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11d534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11d538: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11d538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11d53c: 0x8047bcc  j           func_11EF30
    ctx->pc = 0x11D53Cu;
    ctx->pc = 0x11D540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D53Cu;
    // 0x11d540: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EF30u;
    sub_0011EF30_0x11ef30(rdram, ctx, runtime); return;
    ctx->pc = 0x11D544u;
    // 0x11d544: 0x0  nop
    ctx->pc = 0x11d544u;
    // NOP
label_11d548:
    // 0x11d548: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11d548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11d54c: 0x460062c6  mov.s       $f11, $f12
    ctx->pc = 0x11d54cu;
    ctx->f[11] = FPU_MOV_S(ctx->f[12]);
    // 0x11d550: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11d550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11d554: 0xe7b60028  swc1        $f22, 0x28($sp)
    ctx->pc = 0x11d554u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x11d558: 0xe7b50020  swc1        $f21, 0x20($sp)
    ctx->pc = 0x11d558u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x11d55c: 0x44045800  mfc1        $a0, $f11
    ctx->pc = 0x11d55cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[11], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x11d560: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x11d560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x11d564: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x11d564u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x11d568: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11d568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11d56c: 0x821824  and         $v1, $a0, $v0
    ctx->pc = 0x11d56cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x11d570: 0x14650009  bne         $v1, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x11D570u;
    {
        const bool branch_taken_0x11d570 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x11D574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D570u;
        // 0x11d574: 0xe7b40018  swc1        $f20, 0x18($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d570) {
            ctx->pc = 0x11D598u;
            goto label_11d598;
        }
    }
    ctx->pc = 0x11D578u;
    // 0x11d578: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x11d578u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11d57c: 0x1c8000f6  bgtz        $a0, . + 4 + (0xF6 << 2)
    ctx->pc = 0x11D57Cu;
    {
        const bool branch_taken_0x11d57c = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x11D580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D57Cu;
        // 0x11d580: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d57c) {
            ctx->pc = 0x11D958u;
            goto label_11d958;
        }
    }
    ctx->pc = 0x11D584u;
    // 0x11d584: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x11d584u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x11d588: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x11d588u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x11d58c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11d58cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11d590: 0x100000f2  b           . + 4 + (0xF2 << 2)
    ctx->pc = 0x11D590u;
    {
        const bool branch_taken_0x11d590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D590u;
        // 0x11d594: 0xc7b60028  lwc1        $f22, 0x28($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d590) {
            ctx->pc = 0x11D95Cu;
            goto label_11d95c;
        }
    }
    ctx->pc = 0x11D598u;
label_11d598:
    // 0x11d598: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x11d598u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x11d59c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11D59Cu;
    {
        const bool branch_taken_0x11d59c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D59Cu;
        // 0x11d5a0: 0x3c023eff  lui         $v0, 0x3EFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d59c) {
            ctx->pc = 0x11D5C0u;
            goto label_11d5c0;
        }
    }
    ctx->pc = 0x11D5A4u;
    // 0x11d5a4: 0x460b5801  sub.s       $f0, $f11, $f11
    ctx->pc = 0x11d5a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[11], ctx->f[11]);
    // 0x11d5a8: 0x0  nop
    ctx->pc = 0x11d5a8u;
    // NOP
    // 0x11d5ac: 0x0  nop
    ctx->pc = 0x11d5acu;
    // NOP
    // 0x11d5b0: 0x46000003  div.s       $f0, $f0, $f0
    ctx->pc = 0x11d5b0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[0];
    // 0x11d5b4: 0x100000e8  b           . + 4 + (0xE8 << 2)
    ctx->pc = 0x11D5B4u;
    {
        const bool branch_taken_0x11d5b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D5B4u;
        // 0x11d5b8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d5b4) {
            ctx->pc = 0x11D958u;
            goto label_11d958;
        }
    }
    ctx->pc = 0x11D5BCu;
    // 0x11d5bc: 0x0  nop
    ctx->pc = 0x11d5bcu;
    // NOP
label_11d5c0:
    // 0x11d5c0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11d5c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11d5c4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x11d5c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x11d5c8: 0x14400049  bnez        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x11D5C8u;
    {
        const bool branch_taken_0x11d5c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D5C8u;
        // 0x11d5cc: 0x3c022300  lui         $v0, 0x2300 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8960 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d5c8) {
            ctx->pc = 0x11D6F0u;
            goto label_11d6f0;
        }
    }
    ctx->pc = 0x11D5D0u;
    // 0x11d5d0: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x11d5d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x11d5d4: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x11d5d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x11d5d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11d5d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11d5dc: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x11d5dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x11d5e0: 0x104000dd  beqz        $v0, . + 4 + (0xDD << 2)
    ctx->pc = 0x11D5E0u;
    {
        const bool branch_taken_0x11d5e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D5E0u;
        // 0x11d5e4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d5e0) {
            ctx->pc = 0x11D958u;
            goto label_11d958;
        }
    }
    ctx->pc = 0x11D5E8u;
    // 0x11d5e8: 0x460b5d42  mul.s       $f21, $f11, $f11
    ctx->pc = 0x11d5e8u;
    ctx->f[21] = FPU_MUL_S(ctx->f[11], ctx->f[11]);
    // 0x11d5ec: 0x3c013811  lui         $at, 0x3811
    ctx->pc = 0x11d5ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14353 << 16));
    // 0x11d5f0: 0x3421ef08  ori         $at, $at, 0xEF08
    ctx->pc = 0x11d5f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61192);
    // 0x11d5f4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11d5f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11d5f8: 0x3c013a4f  lui         $at, 0x3A4F
    ctx->pc = 0x11d5f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14927 << 16));
    // 0x11d5fc: 0x34217f04  ori         $at, $at, 0x7F04
    ctx->pc = 0x11d5fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32516);
    // 0x11d600: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x11d600u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x11d604: 0x3c01bd24  lui         $at, 0xBD24
    ctx->pc = 0x11d604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48420 << 16));
    // 0x11d608: 0x34211146  ori         $at, $at, 0x1146
    ctx->pc = 0x11d608u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4422);
    // 0x11d60c: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x11d60cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x11d610: 0x3c013d9d  lui         $at, 0x3D9D
    ctx->pc = 0x11d610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15773 << 16));
    // 0x11d614: 0x3421c62d  ori         $at, $at, 0xC62D
    ctx->pc = 0x11d614u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50733);
    // 0x11d618: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x11d618u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11d61c: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x11d61cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x11d620: 0x3c01bf30  lui         $at, 0xBF30
    ctx->pc = 0x11d620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48944 << 16));
    // 0x11d624: 0x34213360  ori         $at, $at, 0x3360
    ctx->pc = 0x11d624u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13152);
    // 0x11d628: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11d628u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11d62c: 0x4602a882  mul.s       $f2, $f21, $f2
    ctx->pc = 0x11d62cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
    // 0x11d630: 0x3c013e4e  lui         $at, 0x3E4E
    ctx->pc = 0x11d630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15950 << 16));
    // 0x11d634: 0x34210aa8  ori         $at, $at, 0xAA8
    ctx->pc = 0x11d634u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2728);
    // 0x11d638: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x11d638u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x11d63c: 0x3c014001  lui         $at, 0x4001
    ctx->pc = 0x11d63cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16385 << 16));
    // 0x11d640: 0x3421572c  ori         $at, $at, 0x572C
    ctx->pc = 0x11d640u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22316);
    // 0x11d644: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x11d644u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x11d648: 0x3c01bea6  lui         $at, 0xBEA6
    ctx->pc = 0x11d648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48806 << 16));
    // 0x11d64c: 0x3421b08f  ori         $at, $at, 0xB08F
    ctx->pc = 0x11d64cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45199);
    // 0x11d650: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x11d650u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x11d654: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x11d654u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x11d658: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11d658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11d65c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x11d65cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x11d660: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x11d660u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x11d664: 0x3c0133a2  lui         $at, 0x33A2
    ctx->pc = 0x11d664u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13218 << 16));
    // 0x11d668: 0x34212168  ori         $at, $at, 0x2168
    ctx->pc = 0x11d668u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8552);
    // 0x11d66c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11d66cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11d670: 0x3c01c019  lui         $at, 0xC019
    ctx->pc = 0x11d670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49177 << 16));
    // 0x11d674: 0x3421d138  ori         $at, $at, 0xD138
    ctx->pc = 0x11d674u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53560);
    // 0x11d678: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x11d678u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x11d67c: 0x3c013e2a  lui         $at, 0x3E2A
    ctx->pc = 0x11d67cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
    // 0x11d680: 0x3421aaaa  ori         $at, $at, 0xAAAA
    ctx->pc = 0x11d680u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43690);
    // 0x11d684: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x11d684u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x11d688: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x11d688u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x11d68c: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x11d68cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x11d690: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x11d690u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x11d694: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x11d694u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x11d698: 0x4602a882  mul.s       $f2, $f21, $f2
    ctx->pc = 0x11d698u;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
    // 0x11d69c: 0x46070840  add.s       $f1, $f1, $f7
    ctx->pc = 0x11d69cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
    // 0x11d6a0: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x11d6a0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x11d6a4: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x11d6a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x11d6a8: 0x4602a882  mul.s       $f2, $f21, $f2
    ctx->pc = 0x11d6a8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
    // 0x11d6ac: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x11d6acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x11d6b0: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x11d6b0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x11d6b4: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x11d6b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x11d6b8: 0x4602a882  mul.s       $f2, $f21, $f2
    ctx->pc = 0x11d6b8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
    // 0x11d6bc: 0x46090840  add.s       $f1, $f1, $f9
    ctx->pc = 0x11d6bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[9]);
    // 0x11d6c0: 0x46031580  add.s       $f22, $f2, $f3
    ctx->pc = 0x11d6c0u;
    ctx->f[22] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x11d6c4: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x11d6c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x11d6c8: 0x46080840  add.s       $f1, $f1, $f8
    ctx->pc = 0x11d6c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[8]);
    // 0x11d6cc: 0x4601ad02  mul.s       $f20, $f21, $f1
    ctx->pc = 0x11d6ccu;
    ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x11d6d0: 0x0  nop
    ctx->pc = 0x11d6d0u;
    // NOP
    // 0x11d6d4: 0x0  nop
    ctx->pc = 0x11d6d4u;
    // NOP
    // 0x11d6d8: 0x4616a303  div.s       $f12, $f20, $f22
    ctx->pc = 0x11d6d8u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[12] = ctx->f[20] / ctx->f[22];
    // 0x11d6dc: 0x460c5842  mul.s       $f1, $f11, $f12
    ctx->pc = 0x11d6dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[12]);
    // 0x11d6e0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x11d6e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x11d6e4: 0x46005801  sub.s       $f0, $f11, $f0
    ctx->pc = 0x11d6e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[11], ctx->f[0]);
    // 0x11d6e8: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x11D6E8u;
    {
        const bool branch_taken_0x11d6e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D6E8u;
        // 0x11d6ec: 0x46005001  sub.s       $f0, $f10, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[10], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d6e8) {
            ctx->pc = 0x11D958u;
            goto label_11d958;
        }
    }
    ctx->pc = 0x11D6F0u;
label_11d6f0:
    // 0x11d6f0: 0x481004b  bgez        $a0, . + 4 + (0x4B << 2)
    ctx->pc = 0x11D6F0u;
    {
        const bool branch_taken_0x11d6f0 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x11d6f0) {
            ctx->pc = 0x11D820u;
            goto label_11d820;
        }
    }
    ctx->pc = 0x11D6F8u;
    // 0x11d6f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11d6f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11d6fc: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x11d6fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x11d700: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x11d700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x11d704: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x11d704u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x11d708: 0x460a5880  add.s       $f2, $f11, $f10
    ctx->pc = 0x11d708u;
    ctx->f[2] = FPU_ADD_S(ctx->f[11], ctx->f[10]);
    // 0x11d70c: 0x3c013811  lui         $at, 0x3811
    ctx->pc = 0x11d70cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14353 << 16));
    // 0x11d710: 0x3421ef08  ori         $at, $at, 0xEF08
    ctx->pc = 0x11d710u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61192);
    // 0x11d714: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11d714u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11d718: 0x3c013a4f  lui         $at, 0x3A4F
    ctx->pc = 0x11d718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14927 << 16));
    // 0x11d71c: 0x34217f04  ori         $at, $at, 0x7F04
    ctx->pc = 0x11d71cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32516);
    // 0x11d720: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x11d720u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x11d724: 0x3c01bd24  lui         $at, 0xBD24
    ctx->pc = 0x11d724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48420 << 16));
    // 0x11d728: 0x34211146  ori         $at, $at, 0x1146
    ctx->pc = 0x11d728u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4422);
    // 0x11d72c: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x11d72cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x11d730: 0x3c013d9d  lui         $at, 0x3D9D
    ctx->pc = 0x11d730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15773 << 16));
    // 0x11d734: 0x3421c62d  ori         $at, $at, 0xC62D
    ctx->pc = 0x11d734u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50733);
    // 0x11d738: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11d738u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11d73c: 0x46031542  mul.s       $f21, $f2, $f3
    ctx->pc = 0x11d73cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x11d740: 0x3c014001  lui         $at, 0x4001
    ctx->pc = 0x11d740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16385 << 16));
    // 0x11d744: 0x3421572c  ori         $at, $at, 0x572C
    ctx->pc = 0x11d744u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22316);
    // 0x11d748: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x11d748u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11d74c: 0x3c01bf30  lui         $at, 0xBF30
    ctx->pc = 0x11d74cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48944 << 16));
    // 0x11d750: 0x34213360  ori         $at, $at, 0x3360
    ctx->pc = 0x11d750u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13152);
    // 0x11d754: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x11d754u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x11d758: 0x3c013e4e  lui         $at, 0x3E4E
    ctx->pc = 0x11d758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15950 << 16));
    // 0x11d75c: 0x34210aa8  ori         $at, $at, 0xAA8
    ctx->pc = 0x11d75cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2728);
    // 0x11d760: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x11d760u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x11d764: 0x3c01bea6  lui         $at, 0xBEA6
    ctx->pc = 0x11d764u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48806 << 16));
    // 0x11d768: 0x3421b08f  ori         $at, $at, 0xB08F
    ctx->pc = 0x11d768u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45199);
    // 0x11d76c: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x11d76cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x11d770: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x11d770u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x11d774: 0x3c01c019  lui         $at, 0xC019
    ctx->pc = 0x11d774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49177 << 16));
    // 0x11d778: 0x3421d138  ori         $at, $at, 0xD138
    ctx->pc = 0x11d778u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53560);
    // 0x11d77c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x11d77cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x11d780: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x11d780u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x11d784: 0x3c013e2a  lui         $at, 0x3E2A
    ctx->pc = 0x11d784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
    // 0x11d788: 0x3421aaaa  ori         $at, $at, 0xAAAA
    ctx->pc = 0x11d788u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43690);
    // 0x11d78c: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x11d78cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x11d790: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x11d790u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x11d794: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x11d794u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x11d798: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x11d798u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x11d79c: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x11d79cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x11d7a0: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x11d7a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x11d7a4: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x11d7a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x11d7a8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x11d7a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x11d7ac: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x11d7acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x11d7b0: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x11d7b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x11d7b4: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x11d7b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x11d7b8: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x11d7b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x11d7bc: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x11d7bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x11d7c0: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x11d7c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x11d7c4: 0x46090000  add.s       $f0, $f0, $f9
    ctx->pc = 0x11d7c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
    // 0x11d7c8: 0x460a0d80  add.s       $f22, $f1, $f10
    ctx->pc = 0x11d7c8u;
    ctx->f[22] = FPU_ADD_S(ctx->f[1], ctx->f[10]);
    // 0x11d7cc: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x11d7ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x11d7d0: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x11d7d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x11d7d4: 0xc047bcc  jal         func_11EF30
    ctx->pc = 0x11D7D4u;
    SET_GPR_U32(ctx, 31, 0x11D7DCu);
    ctx->pc = 0x11D7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D7D4u;
    // 0x11d7d8: 0x4600ad02  mul.s       $f20, $f21, $f0 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EF30u, 0x11D7D4u, 0x11D7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D7DCu;
label_11d7dc:
    // 0x11d7dc: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x11d7dcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x11d7e0: 0x3c0133a2  lui         $at, 0x33A2
    ctx->pc = 0x11d7e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13218 << 16));
    // 0x11d7e4: 0x34212168  ori         $at, $at, 0x2168
    ctx->pc = 0x11d7e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8552);
    // 0x11d7e8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11d7e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11d7ec: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x11d7ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x11d7f0: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x11d7f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x11d7f4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x11d7f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11d7f8: 0x0  nop
    ctx->pc = 0x11d7f8u;
    // NOP
    // 0x11d7fc: 0x0  nop
    ctx->pc = 0x11d7fcu;
    // NOP
    // 0x11d800: 0x4616a303  div.s       $f12, $f20, $f22
    ctx->pc = 0x11d800u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[12] = ctx->f[20] / ctx->f[22];
    // 0x11d804: 0x460d6002  mul.s       $f0, $f12, $f13
    ctx->pc = 0x11d804u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[13]);
    // 0x11d808: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x11d808u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x11d80c: 0x46006800  add.s       $f0, $f13, $f0
    ctx->pc = 0x11d80cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
    // 0x11d810: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x11d810u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x11d814: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x11D814u;
    {
        const bool branch_taken_0x11d814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D814u;
        // 0x11d818: 0x46001001  sub.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d814) {
            ctx->pc = 0x11D954u;
            goto label_11d954;
        }
    }
    ctx->pc = 0x11D81Cu;
    // 0x11d81c: 0x0  nop
    ctx->pc = 0x11d81cu;
    // NOP
label_11d820:
    // 0x11d820: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11d820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11d824: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x11d824u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x11d828: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x11d828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x11d82c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11d82cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11d830: 0x460ba001  sub.s       $f0, $f20, $f11
    ctx->pc = 0x11d830u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[11]);
    // 0x11d834: 0x46010542  mul.s       $f21, $f0, $f1
    ctx->pc = 0x11d834u;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11d838: 0xc047bcc  jal         func_11EF30
    ctx->pc = 0x11D838u;
    SET_GPR_U32(ctx, 31, 0x11D840u);
    ctx->pc = 0x11D83Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D838u;
    // 0x11d83c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EF30u, 0x11D838u, 0x11D840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D840u;
label_11d840:
    // 0x11d840: 0x460002c6  mov.s       $f11, $f0
    ctx->pc = 0x11d840u;
    ctx->f[11] = FPU_MOV_S(ctx->f[0]);
    // 0x11d844: 0x46005b46  mov.s       $f13, $f11
    ctx->pc = 0x11d844u;
    ctx->f[13] = FPU_MOV_S(ctx->f[11]);
    // 0x11d848: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x11d848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x11d84c: 0x2402f000  addiu       $v0, $zero, -0x1000
    ctx->pc = 0x11d84cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x11d850: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x11d850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11d854: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x11d854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x11d858: 0x44835800  mtc1        $v1, $f11
    ctx->pc = 0x11d858u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x11d85c: 0x460b58c2  mul.s       $f3, $f11, $f11
    ctx->pc = 0x11d85cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[11], ctx->f[11]);
    // 0x11d860: 0x3c013811  lui         $at, 0x3811
    ctx->pc = 0x11d860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14353 << 16));
    // 0x11d864: 0x3421ef08  ori         $at, $at, 0xEF08
    ctx->pc = 0x11d864u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61192);
    // 0x11d868: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11d868u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11d86c: 0x3c013a4f  lui         $at, 0x3A4F
    ctx->pc = 0x11d86cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14927 << 16));
    // 0x11d870: 0x34217f04  ori         $at, $at, 0x7F04
    ctx->pc = 0x11d870u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32516);
    // 0x11d874: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x11d874u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x11d878: 0x3c01bd24  lui         $at, 0xBD24
    ctx->pc = 0x11d878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48420 << 16));
    // 0x11d87c: 0x34211146  ori         $at, $at, 0x1146
    ctx->pc = 0x11d87cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4422);
    // 0x11d880: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x11d880u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x11d884: 0x3c013d9d  lui         $at, 0x3D9D
    ctx->pc = 0x11d884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15773 << 16));
    // 0x11d888: 0x3421c62d  ori         $at, $at, 0xC62D
    ctx->pc = 0x11d888u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50733);
    // 0x11d88c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11d88cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11d890: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x11d890u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x11d894: 0x3c01bf30  lui         $at, 0xBF30
    ctx->pc = 0x11d894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48944 << 16));
    // 0x11d898: 0x34213360  ori         $at, $at, 0x3360
    ctx->pc = 0x11d898u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13152);
    // 0x11d89c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x11d89cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x11d8a0: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x11d8a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x11d8a4: 0x3c013e4e  lui         $at, 0x3E4E
    ctx->pc = 0x11d8a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15950 << 16));
    // 0x11d8a8: 0x34210aa8  ori         $at, $at, 0xAA8
    ctx->pc = 0x11d8a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2728);
    // 0x11d8ac: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x11d8acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x11d8b0: 0x3c014001  lui         $at, 0x4001
    ctx->pc = 0x11d8b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16385 << 16));
    // 0x11d8b4: 0x3421572c  ori         $at, $at, 0x572C
    ctx->pc = 0x11d8b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22316);
    // 0x11d8b8: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x11d8b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x11d8bc: 0x4603a8c1  sub.s       $f3, $f21, $f3
    ctx->pc = 0x11d8bcu;
    ctx->f[3] = FPU_SUB_S(ctx->f[21], ctx->f[3]);
    // 0x11d8c0: 0x3c01bea6  lui         $at, 0xBEA6
    ctx->pc = 0x11d8c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48806 << 16));
    // 0x11d8c4: 0x3421b08f  ori         $at, $at, 0xB08F
    ctx->pc = 0x11d8c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45199);
    // 0x11d8c8: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x11d8c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x11d8cc: 0x460b6880  add.s       $f2, $f13, $f11
    ctx->pc = 0x11d8ccu;
    ctx->f[2] = FPU_ADD_S(ctx->f[13], ctx->f[11]);
    // 0x11d8d0: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x11d8d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x11d8d4: 0x3c013e2a  lui         $at, 0x3E2A
    ctx->pc = 0x11d8d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
    // 0x11d8d8: 0x3421aaaa  ori         $at, $at, 0xAAAA
    ctx->pc = 0x11d8d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43690);
    // 0x11d8dc: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x11d8dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x11d8e0: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x11d8e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x11d8e4: 0x3c01c019  lui         $at, 0xC019
    ctx->pc = 0x11d8e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49177 << 16));
    // 0x11d8e8: 0x3421d138  ori         $at, $at, 0xD138
    ctx->pc = 0x11d8e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53560);
    // 0x11d8ec: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x11d8ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x11d8f0: 0x0  nop
    ctx->pc = 0x11d8f0u;
    // NOP
    // 0x11d8f4: 0x0  nop
    ctx->pc = 0x11d8f4u;
    // NOP
    // 0x11d8f8: 0x460218c3  div.s       $f3, $f3, $f2
    ctx->pc = 0x11d8f8u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[3] = ctx->f[3] / ctx->f[2];
    // 0x11d8fc: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x11d8fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x11d900: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x11d900u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x11d904: 0x46090000  add.s       $f0, $f0, $f9
    ctx->pc = 0x11d904u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
    // 0x11d908: 0x46070840  add.s       $f1, $f1, $f7
    ctx->pc = 0x11d908u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
    // 0x11d90c: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x11d90cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x11d910: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x11d910u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x11d914: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x11d914u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x11d918: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x11d918u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x11d91c: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x11d91cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x11d920: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x11d920u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x11d924: 0x460a0000  add.s       $f0, $f0, $f10
    ctx->pc = 0x11d924u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[10]);
    // 0x11d928: 0x46140d80  add.s       $f22, $f1, $f20
    ctx->pc = 0x11d928u;
    ctx->f[22] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x11d92c: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x11d92cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x11d930: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x11d930u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x11d934: 0x4600ad02  mul.s       $f20, $f21, $f0
    ctx->pc = 0x11d934u;
    ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x11d938: 0x0  nop
    ctx->pc = 0x11d938u;
    // NOP
    // 0x11d93c: 0x0  nop
    ctx->pc = 0x11d93cu;
    // NOP
    // 0x11d940: 0x4616a303  div.s       $f12, $f20, $f22
    ctx->pc = 0x11d940u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[12] = ctx->f[20] / ctx->f[22];
    // 0x11d944: 0x460d6002  mul.s       $f0, $f12, $f13
    ctx->pc = 0x11d944u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[13]);
    // 0x11d948: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x11d948u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x11d94c: 0x46005800  add.s       $f0, $f11, $f0
    ctx->pc = 0x11d94cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[11], ctx->f[0]);
    // 0x11d950: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x11d950u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_11d954:
    // 0x11d954: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11d954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_11d958:
    // 0x11d958: 0xc7b60028  lwc1        $f22, 0x28($sp)
    ctx->pc = 0x11d958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_11d95c:
    // 0x11d95c: 0xc7b50020  lwc1        $f21, 0x20($sp)
    ctx->pc = 0x11d95cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x11d960: 0xc7b40018  lwc1        $f20, 0x18($sp)
    ctx->pc = 0x11d960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11d964: 0x3e00008  jr          $ra
    ctx->pc = 0x11D964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D964u;
        // 0x11d968: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11D964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11D96Cu;
    // 0x11d96c: 0x0  nop
    ctx->pc = 0x11d96cu;
    // NOP
label_11d970:
    // 0x11d970: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11d970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11d974: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x11d974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x11d978: 0x44116000  mfc1        $s1, $f12
    ctx->pc = 0x11d978u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x11d97c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11d97cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11d980: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11d980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11d984: 0xe7b60028  swc1        $f22, 0x28($sp)
    ctx->pc = 0x11d984u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x11d988: 0xe7b50020  swc1        $f21, 0x20($sp)
    ctx->pc = 0x11d988u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x11d98c: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x11d98cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x11d990: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11d990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11d994: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x11d994u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x11d998: 0x2228024  and         $s0, $s1, $v0
    ctx->pc = 0x11d998u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x11d99c: 0x1603000c  bne         $s0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x11D99Cu;
    {
        const bool branch_taken_0x11d99c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x11D9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D99Cu;
        // 0x11d9a0: 0xe7b40018  swc1        $f20, 0x18($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d99c) {
            ctx->pc = 0x11D9D0u;
            goto label_11d9d0;
        }
    }
    ctx->pc = 0x11D9A4u;
    // 0x11d9a4: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x11d9a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x11d9a8: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x11d9a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x11d9ac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11d9acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11d9b0: 0x3c0133a2  lui         $at, 0x33A2
    ctx->pc = 0x11d9b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13218 << 16));
    // 0x11d9b4: 0x34212168  ori         $at, $at, 0x2168
    ctx->pc = 0x11d9b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8552);
    // 0x11d9b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11d9b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11d9bc: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x11d9bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x11d9c0: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x11d9c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x11d9c4: 0x100000ca  b           . + 4 + (0xCA << 2)
    ctx->pc = 0x11D9C4u;
    {
        const bool branch_taken_0x11d9c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D9C4u;
        // 0x11d9c8: 0x46000800  add.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d9c4) {
            ctx->pc = 0x11DCF0u;
            goto label_11dcf0;
        }
    }
    ctx->pc = 0x11D9CCu;
    // 0x11d9cc: 0x0  nop
    ctx->pc = 0x11d9ccu;
    // NOP
label_11d9d0:
    // 0x11d9d0: 0x70102a  slt         $v0, $v1, $s0
    ctx->pc = 0x11d9d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11d9d4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11D9D4u;
    {
        const bool branch_taken_0x11d9d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D9D4u;
        // 0x11d9d8: 0x3c023eff  lui         $v0, 0x3EFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d9d4) {
            ctx->pc = 0x11D9F8u;
            goto label_11d9f8;
        }
    }
    ctx->pc = 0x11D9DCu;
    // 0x11d9dc: 0x460c6001  sub.s       $f0, $f12, $f12
    ctx->pc = 0x11d9dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[12]);
    // 0x11d9e0: 0x0  nop
    ctx->pc = 0x11d9e0u;
    // NOP
    // 0x11d9e4: 0x0  nop
    ctx->pc = 0x11d9e4u;
    // NOP
    // 0x11d9e8: 0x46000003  div.s       $f0, $f0, $f0
    ctx->pc = 0x11d9e8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[0];
    // 0x11d9ec: 0x100000c1  b           . + 4 + (0xC1 << 2)
    ctx->pc = 0x11D9ECu;
    {
        const bool branch_taken_0x11d9ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D9ECu;
        // 0x11d9f0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d9ec) {
            ctx->pc = 0x11DCF4u;
            goto label_11dcf4;
        }
    }
    ctx->pc = 0x11D9F4u;
    // 0x11d9f4: 0x0  nop
    ctx->pc = 0x11d9f4u;
    // NOP
label_11d9f8:
    // 0x11d9f8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11d9f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11d9fc: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x11d9fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11da00: 0x1440004b  bnez        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x11DA00u;
    {
        const bool branch_taken_0x11da00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11DA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DA00u;
        // 0x11da04: 0x3c0231ff  lui         $v0, 0x31FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12799 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11da00) {
            ctx->pc = 0x11DB30u;
            goto label_11db30;
        }
    }
    ctx->pc = 0x11DA08u;
    // 0x11da08: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11da08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11da0c: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x11da0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11da10: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x11DA10u;
    {
        const bool branch_taken_0x11da10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11da10) {
            ctx->pc = 0x11DA14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11DA10u;
            // 0x11da14: 0x460c6502  mul.s       $f20, $f12, $f12 (Delay Slot)
            ctx->f[20] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11DA48u;
            goto label_11da48;
        }
    }
    ctx->pc = 0x11DA18u;
    // 0x11da18: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x11da18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
    // 0x11da1c: 0x3421f2c9  ori         $at, $at, 0xF2C9
    ctx->pc = 0x11da1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62153);
    // 0x11da20: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11da20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11da24: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11da24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11da28: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11da28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11da2c: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x11da2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x11da30: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x11da30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11da34: 0x4500003e  bc1f        . + 4 + (0x3E << 2)
    ctx->pc = 0x11DA34u;
    {
        const bool branch_taken_0x11da34 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11DA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DA34u;
        // 0x11da38: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11da34) {
            ctx->pc = 0x11DB30u;
            goto label_11db30;
        }
    }
    ctx->pc = 0x11DA3Cu;
    // 0x11da3c: 0x100000ad  b           . + 4 + (0xAD << 2)
    ctx->pc = 0x11DA3Cu;
    {
        const bool branch_taken_0x11da3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DA3Cu;
        // 0x11da40: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11da3c) {
            ctx->pc = 0x11DCF4u;
            goto label_11dcf4;
        }
    }
    ctx->pc = 0x11DA44u;
    // 0x11da44: 0x0  nop
    ctx->pc = 0x11da44u;
    // NOP
label_11da48:
    // 0x11da48: 0x3c013811  lui         $at, 0x3811
    ctx->pc = 0x11da48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14353 << 16));
    // 0x11da4c: 0x3421ef08  ori         $at, $at, 0xEF08
    ctx->pc = 0x11da4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61192);
    // 0x11da50: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11da50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11da54: 0x3c013a4f  lui         $at, 0x3A4F
    ctx->pc = 0x11da54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14927 << 16));
    // 0x11da58: 0x34217f04  ori         $at, $at, 0x7F04
    ctx->pc = 0x11da58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32516);
    // 0x11da5c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x11da5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x11da60: 0x3c01bd24  lui         $at, 0xBD24
    ctx->pc = 0x11da60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48420 << 16));
    // 0x11da64: 0x34211146  ori         $at, $at, 0x1146
    ctx->pc = 0x11da64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4422);
    // 0x11da68: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x11da68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x11da6c: 0x3c013d9d  lui         $at, 0x3D9D
    ctx->pc = 0x11da6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15773 << 16));
    // 0x11da70: 0x3421c62d  ori         $at, $at, 0xC62D
    ctx->pc = 0x11da70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50733);
    // 0x11da74: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11da74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11da78: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x11da78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x11da7c: 0x3c01bf30  lui         $at, 0xBF30
    ctx->pc = 0x11da7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48944 << 16));
    // 0x11da80: 0x34213360  ori         $at, $at, 0x3360
    ctx->pc = 0x11da80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13152);
    // 0x11da84: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x11da84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11da88: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x11da88u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x11da8c: 0x3c013e4e  lui         $at, 0x3E4E
    ctx->pc = 0x11da8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15950 << 16));
    // 0x11da90: 0x34210aa8  ori         $at, $at, 0xAA8
    ctx->pc = 0x11da90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2728);
    // 0x11da94: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x11da94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x11da98: 0x3c014001  lui         $at, 0x4001
    ctx->pc = 0x11da98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16385 << 16));
    // 0x11da9c: 0x3421572c  ori         $at, $at, 0x572C
    ctx->pc = 0x11da9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22316);
    // 0x11daa0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x11daa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x11daa4: 0x3c01bea6  lui         $at, 0xBEA6
    ctx->pc = 0x11daa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48806 << 16));
    // 0x11daa8: 0x3421b08f  ori         $at, $at, 0xB08F
    ctx->pc = 0x11daa8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45199);
    // 0x11daac: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x11daacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x11dab0: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x11dab0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x11dab4: 0x3c013e2a  lui         $at, 0x3E2A
    ctx->pc = 0x11dab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
    // 0x11dab8: 0x3421aaaa  ori         $at, $at, 0xAAAA
    ctx->pc = 0x11dab8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43690);
    // 0x11dabc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x11dabcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x11dac0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x11dac0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x11dac4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11dac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11dac8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x11dac8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11dacc: 0x3c01c019  lui         $at, 0xC019
    ctx->pc = 0x11daccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49177 << 16));
    // 0x11dad0: 0x3421d138  ori         $at, $at, 0xD138
    ctx->pc = 0x11dad0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53560);
    // 0x11dad4: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x11dad4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x11dad8: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x11dad8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x11dadc: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x11dadcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x11dae0: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x11dae0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x11dae4: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x11dae4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x11dae8: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x11dae8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x11daec: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x11daecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x11daf0: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x11daf0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x11daf4: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x11daf4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x11daf8: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x11daf8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x11dafc: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x11dafcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x11db00: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x11db00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x11db04: 0x46020d80  add.s       $f22, $f1, $f2
    ctx->pc = 0x11db04u;
    ctx->f[22] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x11db08: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x11db08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x11db0c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x11db0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x11db10: 0x4600a542  mul.s       $f21, $f20, $f0
    ctx->pc = 0x11db10u;
    ctx->f[21] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x11db14: 0x0  nop
    ctx->pc = 0x11db14u;
    // NOP
    // 0x11db18: 0x0  nop
    ctx->pc = 0x11db18u;
    // NOP
    // 0x11db1c: 0x4616a9c3  div.s       $f7, $f21, $f22
    ctx->pc = 0x11db1cu;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[7] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[7] = ctx->f[21] / ctx->f[22];
    // 0x11db20: 0x46076002  mul.s       $f0, $f12, $f7
    ctx->pc = 0x11db20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[7]);
    // 0x11db24: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x11DB24u;
    {
        const bool branch_taken_0x11db24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DB24u;
        // 0x11db28: 0x46006000  add.s       $f0, $f12, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11db24) {
            ctx->pc = 0x11DCF0u;
            goto label_11dcf0;
        }
    }
    ctx->pc = 0x11DB2Cu;
    // 0x11db2c: 0x0  nop
    ctx->pc = 0x11db2cu;
    // NOP
label_11db30:
    // 0x11db30: 0xc0474a2  jal         func_11D288
    ctx->pc = 0x11DB30u;
    SET_GPR_U32(ctx, 31, 0x11DB38u);
    ctx->pc = 0x11D288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D288u, 0x11DB30u, 0x11DB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DB38u;
label_11db38:
    // 0x11db38: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11db38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11db3c: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x11db3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x11db40: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x11db40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x11db44: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x11db44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11db48: 0x460051c1  sub.s       $f7, $f10, $f0
    ctx->pc = 0x11db48u;
    ctx->f[7] = FPU_SUB_S(ctx->f[10], ctx->f[0]);
    // 0x11db4c: 0x3c013811  lui         $at, 0x3811
    ctx->pc = 0x11db4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14353 << 16));
    // 0x11db50: 0x3421ef08  ori         $at, $at, 0xEF08
    ctx->pc = 0x11db50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61192);
    // 0x11db54: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11db54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11db58: 0x3c013a4f  lui         $at, 0x3A4F
    ctx->pc = 0x11db58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14927 << 16));
    // 0x11db5c: 0x34217f04  ori         $at, $at, 0x7F04
    ctx->pc = 0x11db5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32516);
    // 0x11db60: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x11db60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x11db64: 0x3c01bd24  lui         $at, 0xBD24
    ctx->pc = 0x11db64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48420 << 16));
    // 0x11db68: 0x34211146  ori         $at, $at, 0x1146
    ctx->pc = 0x11db68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4422);
    // 0x11db6c: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x11db6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x11db70: 0x3c013d9d  lui         $at, 0x3D9D
    ctx->pc = 0x11db70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15773 << 16));
    // 0x11db74: 0x3421c62d  ori         $at, $at, 0xC62D
    ctx->pc = 0x11db74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50733);
    // 0x11db78: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11db78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11db7c: 0x46023d02  mul.s       $f20, $f7, $f2
    ctx->pc = 0x11db7cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
    // 0x11db80: 0x3c013e4e  lui         $at, 0x3E4E
    ctx->pc = 0x11db80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15950 << 16));
    // 0x11db84: 0x34210aa8  ori         $at, $at, 0xAA8
    ctx->pc = 0x11db84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2728);
    // 0x11db88: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x11db88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x11db8c: 0x3c01bf30  lui         $at, 0xBF30
    ctx->pc = 0x11db8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48944 << 16));
    // 0x11db90: 0x34213360  ori         $at, $at, 0x3360
    ctx->pc = 0x11db90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13152);
    // 0x11db94: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x11db94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x11db98: 0x3c014001  lui         $at, 0x4001
    ctx->pc = 0x11db98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16385 << 16));
    // 0x11db9c: 0x3421572c  ori         $at, $at, 0x572C
    ctx->pc = 0x11db9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22316);
    // 0x11dba0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x11dba0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11dba4: 0x3c01bea6  lui         $at, 0xBEA6
    ctx->pc = 0x11dba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48806 << 16));
    // 0x11dba8: 0x3421b08f  ori         $at, $at, 0xB08F
    ctx->pc = 0x11dba8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45199);
    // 0x11dbac: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x11dbacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x11dbb0: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x11dbb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x11dbb4: 0x3c01c019  lui         $at, 0xC019
    ctx->pc = 0x11dbb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49177 << 16));
    // 0x11dbb8: 0x3421d138  ori         $at, $at, 0xD138
    ctx->pc = 0x11dbb8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53560);
    // 0x11dbbc: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x11dbbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x11dbc0: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x11dbc0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x11dbc4: 0x3c013e2a  lui         $at, 0x3E2A
    ctx->pc = 0x11dbc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
    // 0x11dbc8: 0x3421aaaa  ori         $at, $at, 0xAAAA
    ctx->pc = 0x11dbc8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43690);
    // 0x11dbcc: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x11dbccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x11dbd0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11dbd0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x11dbd4: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x11dbd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x11dbd8: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x11dbd8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x11dbdc: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x11dbdcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x11dbe0: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x11dbe0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x11dbe4: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x11dbe4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x11dbe8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x11dbe8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x11dbec: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x11dbecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x11dbf0: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x11dbf0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x11dbf4: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x11dbf4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x11dbf8: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x11dbf8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x11dbfc: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x11dbfcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x11dc00: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x11dc00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x11dc04: 0x46090000  add.s       $f0, $f0, $f9
    ctx->pc = 0x11dc04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
    // 0x11dc08: 0x460a0d80  add.s       $f22, $f1, $f10
    ctx->pc = 0x11dc08u;
    ctx->f[22] = FPU_ADD_S(ctx->f[1], ctx->f[10]);
    // 0x11dc0c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x11dc0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x11dc10: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x11dc10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x11dc14: 0xc047bcc  jal         func_11EF30
    ctx->pc = 0x11DC14u;
    SET_GPR_U32(ctx, 31, 0x11DC1Cu);
    ctx->pc = 0x11DC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DC14u;
    // 0x11dc18: 0x4600a542  mul.s       $f21, $f20, $f0 (Delay Slot)
    ctx->f[21] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EF30u, 0x11DC14u, 0x11DC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DC1Cu;
label_11dc1c:
    // 0x11dc1c: 0x3c023f79  lui         $v0, 0x3F79
    ctx->pc = 0x11dc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16249 << 16));
    // 0x11dc20: 0x34429999  ori         $v0, $v0, 0x9999
    ctx->pc = 0x11dc20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39321);
    // 0x11dc24: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x11dc24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11dc28: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x11DC28u;
    {
        const bool branch_taken_0x11dc28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DC28u;
        // 0x11dc2c: 0x46000206  mov.s       $f8, $f0 (Delay Slot)
        ctx->f[8] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dc28) {
            ctx->pc = 0x11DC70u;
            goto label_11dc70;
        }
    }
    ctx->pc = 0x11DC30u;
    // 0x11dc30: 0x0  nop
    ctx->pc = 0x11dc30u;
    // NOP
    // 0x11dc34: 0x0  nop
    ctx->pc = 0x11dc34u;
    // NOP
    // 0x11dc38: 0x4616a9c3  div.s       $f7, $f21, $f22
    ctx->pc = 0x11dc38u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[7] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[7] = ctx->f[21] / ctx->f[22];
    // 0x11dc3c: 0x3c0133a2  lui         $at, 0x33A2
    ctx->pc = 0x11dc3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13218 << 16));
    // 0x11dc40: 0x34212168  ori         $at, $at, 0x2168
    ctx->pc = 0x11dc40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8552);
    // 0x11dc44: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11dc44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11dc48: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x11dc48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x11dc4c: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x11dc4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x11dc50: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x11dc50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11dc54: 0x46074042  mul.s       $f1, $f8, $f7
    ctx->pc = 0x11dc54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[7]);
    // 0x11dc58: 0x46014040  add.s       $f1, $f8, $f1
    ctx->pc = 0x11dc58u;
    ctx->f[1] = FPU_ADD_S(ctx->f[8], ctx->f[1]);
    // 0x11dc5c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x11dc5cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x11dc60: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x11dc60u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x11dc64: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x11DC64u;
    {
        const bool branch_taken_0x11dc64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DC64u;
        // 0x11dc68: 0x46011501  sub.s       $f20, $f2, $f1 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dc64) {
            ctx->pc = 0x11DCE4u;
            goto label_11dce4;
        }
    }
    ctx->pc = 0x11DC6Cu;
    // 0x11dc6c: 0x0  nop
    ctx->pc = 0x11dc6cu;
    // NOP
label_11dc70:
    // 0x11dc70: 0x44024000  mfc1        $v0, $f8
    ctx->pc = 0x11dc70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[8], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x11dc74: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x11dc74u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dc78: 0x2402f000  addiu       $v0, $zero, -0x1000
    ctx->pc = 0x11dc78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x11dc7c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x11dc7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x11dc80: 0x44833800  mtc1        $v1, $f7
    ctx->pc = 0x11dc80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x11dc84: 0x46073802  mul.s       $f0, $f7, $f7
    ctx->pc = 0x11dc84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x11dc88: 0x3c0133a2  lui         $at, 0x33A2
    ctx->pc = 0x11dc88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13218 << 16));
    // 0x11dc8c: 0x34212168  ori         $at, $at, 0x2168
    ctx->pc = 0x11dc8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8552);
    // 0x11dc90: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x11dc90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x11dc94: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x11dc94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
    // 0x11dc98: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x11dc98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x11dc9c: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x11dc9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x11dca0: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x11dca0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x11dca4: 0x46074100  add.s       $f4, $f8, $f7
    ctx->pc = 0x11dca4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[8], ctx->f[7]);
    // 0x11dca8: 0x0  nop
    ctx->pc = 0x11dca8u;
    // NOP
    // 0x11dcac: 0x0  nop
    ctx->pc = 0x11dcacu;
    // NOP
    // 0x11dcb0: 0x4616a943  div.s       $f5, $f21, $f22
    ctx->pc = 0x11dcb0u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[5] = ctx->f[21] / ctx->f[22];
    // 0x11dcb4: 0x46084040  add.s       $f1, $f8, $f8
    ctx->pc = 0x11dcb4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[8], ctx->f[8]);
    // 0x11dcb8: 0x46073880  add.s       $f2, $f7, $f7
    ctx->pc = 0x11dcb8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[7], ctx->f[7]);
    // 0x11dcbc: 0x0  nop
    ctx->pc = 0x11dcbcu;
    // NOP
    // 0x11dcc0: 0x0  nop
    ctx->pc = 0x11dcc0u;
    // NOP
    // 0x11dcc4: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x11dcc4u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[4];
    // 0x11dcc8: 0x46023581  sub.s       $f22, $f6, $f2
    ctx->pc = 0x11dcc8u;
    ctx->f[22] = FPU_SUB_S(ctx->f[6], ctx->f[2]);
    // 0x11dccc: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x11dcccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x11dcd0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x11dcd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x11dcd4: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x11dcd4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x11dcd8: 0x46030d41  sub.s       $f21, $f1, $f3
    ctx->pc = 0x11dcd8u;
    ctx->f[21] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x11dcdc: 0x4616a801  sub.s       $f0, $f21, $f22
    ctx->pc = 0x11dcdcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[22]);
    // 0x11dce0: 0x46003501  sub.s       $f20, $f6, $f0
    ctx->pc = 0x11dce0u;
    ctx->f[20] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
label_11dce4:
    // 0x11dce4: 0x1e200002  bgtz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x11DCE4u;
    {
        const bool branch_taken_0x11dce4 = (GPR_S32(ctx, 17) > 0);
        ctx->pc = 0x11DCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DCE4u;
        // 0x11dce8: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dce4) {
            ctx->pc = 0x11DCF0u;
            goto label_11dcf0;
        }
    }
    ctx->pc = 0x11DCECu;
    // 0x11dcec: 0x4600a007  neg.s       $f0, $f20
    ctx->pc = 0x11dcecu;
    ctx->f[0] = FPU_NEG_S(ctx->f[20]);
label_11dcf0:
    // 0x11dcf0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11dcf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11dcf4:
    // 0x11dcf4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11dcf4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11dcf8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11dcf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11dcfc: 0xc7b60028  lwc1        $f22, 0x28($sp)
    ctx->pc = 0x11dcfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x11dd00: 0xc7b50020  lwc1        $f21, 0x20($sp)
    ctx->pc = 0x11dd00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x11dd04: 0xc7b40018  lwc1        $f20, 0x18($sp)
    ctx->pc = 0x11dd04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11dd08: 0x3e00008  jr          $ra
    ctx->pc = 0x11DD08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11DD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DD08u;
        // 0x11dd0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11DD08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11DD10u;
label_11dd10:
    // 0x11dd10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11dd10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11dd14: 0x46006046  mov.s       $f1, $f12
    ctx->pc = 0x11dd14u;
    ctx->f[1] = FPU_MOV_S(ctx->f[12]);
    // 0x11dd18: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x11dd18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x11dd1c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x11dd1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x11dd20: 0x44066800  mfc1        $a2, $f13
    ctx->pc = 0x11dd20u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[13], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x11dd24: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x11dd24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x11dd28: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11dd28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11dd2c: 0xc24024  and         $t0, $a2, $v0
    ctx->pc = 0x11dd2cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x11dd30: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x11dd30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x11dd34: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x11dd34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x11dd38: 0x14c30005  bne         $a2, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x11DD38u;
    {
        const bool branch_taken_0x11dd38 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x11DD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DD38u;
        // 0x11dd3c: 0xa23824  and         $a3, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dd38) {
            ctx->pc = 0x11DD50u;
            goto label_11dd50;
        }
    }
    ctx->pc = 0x11DD40u;
    // 0x11dd40: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x11dd40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11dd44: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x11dd44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11dd48: 0x80473c8  j           func_11CF20
    ctx->pc = 0x11DD48u;
    ctx->pc = 0x11DD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DD48u;
    // 0x11dd4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11CF20u;
    sub_0011CF20_0x11cf20(rdram, ctx, runtime); return;
    ctx->pc = 0x11DD50u;
label_11dd50:
    // 0x11dd50: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x11dd50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x11dd54: 0x62783  sra         $a0, $a2, 30
    ctx->pc = 0x11dd54u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 6), 30));
    // 0x11dd58: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11dd58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11dd5c: 0x30840002  andi        $a0, $a0, 0x2
    ctx->pc = 0x11dd5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x11dd60: 0x51fc2  srl         $v1, $a1, 31
    ctx->pc = 0x11dd60u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x11dd64: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x11dd64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x11dd68: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x11DD68u;
    {
        const bool branch_taken_0x11dd68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11DD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DD68u;
        // 0x11dd6c: 0x648025  or          $s0, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dd68) {
            ctx->pc = 0x11DDB4u;
            goto label_11ddb4;
        }
    }
    ctx->pc = 0x11DD70u;
    // 0x11dd70: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x11dd70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11dd74: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x11dd74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x11dd78: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x11dd78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x11dd7c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11dd7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11dd80: 0x12020057  beq         $s0, $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x11DD80u;
    {
        const bool branch_taken_0x11dd80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x11DD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DD80u;
        // 0x11dd84: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dd80) {
            ctx->pc = 0x11DEE0u;
            goto label_11dee0;
        }
    }
    ctx->pc = 0x11DD88u;
    // 0x11dd88: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x11DD88u;
    {
        const bool branch_taken_0x11dd88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11dd88) {
            ctx->pc = 0x11DD8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11DD88u;
            // 0x11dd8c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11DDA0u;
            goto label_11dda0;
        }
    }
    ctx->pc = 0x11DD90u;
    // 0x11dd90: 0x6000009  bltz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11DD90u;
    {
        const bool branch_taken_0x11dd90 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x11DD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DD90u;
        // 0x11dd94: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dd90) {
            ctx->pc = 0x11DDB8u;
            goto label_11ddb8;
        }
    }
    ctx->pc = 0x11DD98u;
    // 0x11dd98: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x11DD98u;
    {
        const bool branch_taken_0x11dd98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DD98u;
        // 0x11dd9c: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dd98) {
            ctx->pc = 0x11DEE0u;
            goto label_11dee0;
        }
    }
    ctx->pc = 0x11DDA0u;
label_11dda0:
    // 0x11dda0: 0x3c01c049  lui         $at, 0xC049
    ctx->pc = 0x11dda0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49225 << 16));
    // 0x11dda4: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x11dda4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x11dda8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11dda8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11ddac: 0x5202004d  beql        $s0, $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x11DDACu;
    {
        const bool branch_taken_0x11ddac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x11ddac) {
            ctx->pc = 0x11DDB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11DDACu;
            // 0x11ddb0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11DEE4u;
            goto label_11dee4;
        }
    }
    ctx->pc = 0x11DDB4u;
label_11ddb4:
    // 0x11ddb4: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x11ddb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
label_11ddb8:
    // 0x11ddb8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11ddb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11ddbc: 0x48102a  slt         $v0, $v0, $t0
    ctx->pc = 0x11ddbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x11ddc0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x11DDC0u;
    {
        const bool branch_taken_0x11ddc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11DDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DDC0u;
        // 0x11ddc4: 0xe81823  subu        $v1, $a3, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ddc0) {
            ctx->pc = 0x11DDF0u;
            goto label_11ddf0;
        }
    }
    ctx->pc = 0x11DDC8u;
    // 0x11ddc8: 0x3c01bfc9  lui         $at, 0xBFC9
    ctx->pc = 0x11ddc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49097 << 16));
    // 0x11ddcc: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x11ddccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x11ddd0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11ddd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11ddd4: 0x4a00042  bltz        $a1, . + 4 + (0x42 << 2)
    ctx->pc = 0x11DDD4u;
    {
        const bool branch_taken_0x11ddd4 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x11DDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DDD4u;
        // 0x11ddd8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ddd4) {
            ctx->pc = 0x11DEE0u;
            goto label_11dee0;
        }
    }
    ctx->pc = 0x11DDDCu;
    // 0x11dddc: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x11dddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x11dde0: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x11dde0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x11dde4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11dde4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11dde8: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x11DDE8u;
    {
        const bool branch_taken_0x11dde8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DDE8u;
        // 0x11ddec: 0xdfbf0018  ld          $ra, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dde8) {
            ctx->pc = 0x11DEE8u;
            goto label_11dee8;
        }
    }
    ctx->pc = 0x11DDF0u;
label_11ddf0:
    // 0x11ddf0: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x11ddf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x11ddf4: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x11ddf4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x11ddf8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x11ddf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11ddfc: 0x31dc3  sra         $v1, $v1, 23
    ctx->pc = 0x11ddfcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 23));
    // 0x11de00: 0x2862003d  slti        $v0, $v1, 0x3D
    ctx->pc = 0x11de00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)61) ? 1 : 0);
    // 0x11de04: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x11DE04u;
    {
        const bool branch_taken_0x11de04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DE04u;
        // 0x11de08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11de04) {
            ctx->pc = 0x11DE44u;
            goto label_11de44;
        }
    }
    ctx->pc = 0x11DE0Cu;
    // 0x11de0c: 0x4c10004  bgez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x11DE0Cu;
    {
        const bool branch_taken_0x11de0c = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x11DE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DE0Cu;
        // 0x11de10: 0x2862ffc4  slti        $v0, $v1, -0x3C (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967236) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11de0c) {
            ctx->pc = 0x11DE20u;
            goto label_11de20;
        }
    }
    ctx->pc = 0x11DE14u;
    // 0x11de14: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x11de14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11de18: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x11DE18u;
    {
        const bool branch_taken_0x11de18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11DE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DE18u;
        // 0x11de1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11de18) {
            ctx->pc = 0x11DE44u;
            goto label_11de44;
        }
    }
    ctx->pc = 0x11DE20u;
label_11de20:
    // 0x11de20: 0x0  nop
    ctx->pc = 0x11de20u;
    // NOP
    // 0x11de24: 0x0  nop
    ctx->pc = 0x11de24u;
    // NOP
    // 0x11de28: 0x460d0b03  div.s       $f12, $f1, $f13
    ctx->pc = 0x11de28u;
    if (ctx->f[13] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[13];
    // 0x11de2c: 0xc0474a2  jal         func_11D288
    ctx->pc = 0x11DE2Cu;
    SET_GPR_U32(ctx, 31, 0x11DE34u);
    ctx->pc = 0x11D288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D288u, 0x11DE2Cu, 0x11DE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DE34u;
label_11de34:
    // 0x11de34: 0xc0473c8  jal         func_11CF20
    ctx->pc = 0x11DE34u;
    SET_GPR_U32(ctx, 31, 0x11DE3Cu);
    ctx->pc = 0x11DE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DE34u;
    // 0x11de38: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11CF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CF20u, 0x11DE34u, 0x11DE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DE3Cu;
label_11de3c:
    // 0x11de3c: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x11de3cu;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x11de40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11de40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11de44:
    // 0x11de44: 0x1202000c  beq         $s0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x11DE44u;
    {
        const bool branch_taken_0x11de44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x11DE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DE44u;
        // 0x11de48: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11de44) {
            ctx->pc = 0x11DE78u;
            goto label_11de78;
        }
    }
    ctx->pc = 0x11DE4Cu;
    // 0x11de4c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x11DE4Cu;
    {
        const bool branch_taken_0x11de4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11de4c) {
            ctx->pc = 0x11DE50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11DE4Cu;
            // 0x11de50: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11DE68u;
            goto label_11de68;
        }
    }
    ctx->pc = 0x11DE54u;
    // 0x11de54: 0x12000022  beqz        $s0, . + 4 + (0x22 << 2)
    ctx->pc = 0x11DE54u;
    {
        const bool branch_taken_0x11de54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DE54u;
        // 0x11de58: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11de54) {
            ctx->pc = 0x11DEE0u;
            goto label_11dee0;
        }
    }
    ctx->pc = 0x11DE5Cu;
    // 0x11de5c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x11DE5Cu;
    {
        const bool branch_taken_0x11de5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11de5c) {
            ctx->pc = 0x11DEC0u;
            goto label_11dec0;
        }
    }
    ctx->pc = 0x11DE64u;
    // 0x11de64: 0x0  nop
    ctx->pc = 0x11de64u;
    // NOP
label_11de68:
    // 0x11de68: 0x1202000b  beq         $s0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x11DE68u;
    {
        const bool branch_taken_0x11de68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x11de68) {
            ctx->pc = 0x11DE98u;
            goto label_11de98;
        }
    }
    ctx->pc = 0x11DE70u;
    // 0x11de70: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x11DE70u;
    {
        const bool branch_taken_0x11de70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11de70) {
            ctx->pc = 0x11DEC0u;
            goto label_11dec0;
        }
    }
    ctx->pc = 0x11DE78u;
label_11de78:
    // 0x11de78: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x11de78u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x11de7c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x11de7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x11de80: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x11de80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11de84: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x11de84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x11de88: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x11de88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11de8c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x11DE8Cu;
    {
        const bool branch_taken_0x11de8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DE8Cu;
        // 0x11de90: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11de8c) {
            ctx->pc = 0x11DEE0u;
            goto label_11dee0;
        }
    }
    ctx->pc = 0x11DE94u;
    // 0x11de94: 0x0  nop
    ctx->pc = 0x11de94u;
    // NOP
label_11de98:
    // 0x11de98: 0x3c013422  lui         $at, 0x3422
    ctx->pc = 0x11de98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13346 << 16));
    // 0x11de9c: 0x34212168  ori         $at, $at, 0x2168
    ctx->pc = 0x11de9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8552);
    // 0x11dea0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11dea0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11dea4: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x11dea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x11dea8: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x11dea8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x11deac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11deacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11deb0: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x11deb0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x11deb4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x11DEB4u;
    {
        const bool branch_taken_0x11deb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DEB4u;
        // 0x11deb8: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11deb4) {
            ctx->pc = 0x11DEE0u;
            goto label_11dee0;
        }
    }
    ctx->pc = 0x11DEBCu;
    // 0x11debc: 0x0  nop
    ctx->pc = 0x11debcu;
    // NOP
label_11dec0:
    // 0x11dec0: 0x3c013422  lui         $at, 0x3422
    ctx->pc = 0x11dec0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13346 << 16));
    // 0x11dec4: 0x34212168  ori         $at, $at, 0x2168
    ctx->pc = 0x11dec4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8552);
    // 0x11dec8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11dec8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11decc: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x11deccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x11ded0: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x11ded0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x11ded4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11ded4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11ded8: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x11ded8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x11dedc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x11dedcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_11dee0:
    // 0x11dee0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x11dee0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_11dee4:
    // 0x11dee4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x11dee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_11dee8:
    // 0x11dee8: 0x3e00008  jr          $ra
    ctx->pc = 0x11DEE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11DEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DEE8u;
        // 0x11deec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11DEE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11DEF0u;
label_11def0:
    // 0x11def0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11def0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11def4: 0x46006006  mov.s       $f0, $f12
    ctx->pc = 0x11def4u;
    ctx->f[0] = FPU_MOV_S(ctx->f[12]);
    // 0x11def8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x11def8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x11defc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11defcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11df00: 0x46006846  mov.s       $f1, $f13
    ctx->pc = 0x11df00u;
    ctx->f[1] = FPU_MOV_S(ctx->f[13]);
    // 0x11df04: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x11df04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x11df08: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x11df08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x11df0c: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x11df0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11df10: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x11df10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x11df14: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11df14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11df18: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x11df18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x11df1c: 0xe23024  and         $a2, $a3, $v0
    ctx->pc = 0x11df1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x11df20: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x11df20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x11df24: 0xa35024  and         $t2, $a1, $v1
    ctx->pc = 0x11df24u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x11df28: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x11df28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x11df2c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11DF2Cu;
    {
        const bool branch_taken_0x11df2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11DF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DF2Cu;
        // 0x11df30: 0xaa2826  xor         $a1, $a1, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11df2c) {
            ctx->pc = 0x11DF50u;
            goto label_11df50;
        }
    }
    ctx->pc = 0x11DF34u;
    // 0x11df34: 0x460d0002  mul.s       $f0, $f0, $f13
    ctx->pc = 0x11df34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x11df38: 0x0  nop
    ctx->pc = 0x11df38u;
    // NOP
    // 0x11df3c: 0x0  nop
    ctx->pc = 0x11df3cu;
    // NOP
    // 0x11df40: 0x46000003  div.s       $f0, $f0, $f0
    ctx->pc = 0x11df40u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[0];
    // 0x11df44: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x11DF44u;
    {
        const bool branch_taken_0x11df44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11df44) {
            ctx->pc = 0x11E0B8u;
            goto label_11e0b8;
        }
    }
    ctx->pc = 0x11DF4Cu;
    // 0x11df4c: 0x0  nop
    ctx->pc = 0x11df4cu;
    // NOP
label_11df50:
    // 0x11df50: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x11df50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x11df54: 0x14400058  bnez        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x11DF54u;
    {
        const bool branch_taken_0x11df54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11df54) {
            ctx->pc = 0x11E0B8u;
            goto label_11e0b8;
        }
    }
    ctx->pc = 0x11DF5Cu;
    // 0x11df5c: 0x10a60030  beq         $a1, $a2, . + 4 + (0x30 << 2)
    ctx->pc = 0x11DF5Cu;
    {
        const bool branch_taken_0x11df5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x11DF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DF5Cu;
        // 0x11df60: 0x515c3  sra         $v0, $a1, 23 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11df5c) {
            ctx->pc = 0x11E020u;
            goto label_11e020;
        }
    }
    ctx->pc = 0x11DF64u;
    // 0x11df64: 0x2448ff81  addiu       $t0, $v0, -0x7F
    ctx->pc = 0x11df64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967169));
    // 0x11df68: 0x61dc3  sra         $v1, $a2, 23
    ctx->pc = 0x11df68u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 23));
    // 0x11df6c: 0x2902ff82  slti        $v0, $t0, -0x7E
    ctx->pc = 0x11df6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)4294967170) ? 1 : 0);
    // 0x11df70: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11DF70u;
    {
        const bool branch_taken_0x11df70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11DF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DF70u;
        // 0x11df74: 0x2467ff81  addiu       $a3, $v1, -0x7F (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967169));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11df70) {
            ctx->pc = 0x11DF88u;
            goto label_11df88;
        }
    }
    ctx->pc = 0x11DF78u;
    // 0x11df78: 0xa41824  and         $v1, $a1, $a0
    ctx->pc = 0x11df78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x11df7c: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x11df7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x11df80: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11DF80u;
    {
        const bool branch_taken_0x11df80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DF80u;
        // 0x11df84: 0x622825  or          $a1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11df80) {
            ctx->pc = 0x11DF94u;
            goto label_11df94;
        }
    }
    ctx->pc = 0x11DF88u;
label_11df88:
    // 0x11df88: 0x2402ff82  addiu       $v0, $zero, -0x7E
    ctx->pc = 0x11df88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967170));
    // 0x11df8c: 0x482023  subu        $a0, $v0, $t0
    ctx->pc = 0x11df8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x11df90: 0x852804  sllv        $a1, $a1, $a0
    ctx->pc = 0x11df90u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
label_11df94:
    // 0x11df94: 0x28e9ff82  slti        $t1, $a3, -0x7E
    ctx->pc = 0x11df94u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4294967170) ? 1 : 0);
    // 0x11df98: 0x15200007  bnez        $t1, . + 4 + (0x7 << 2)
    ctx->pc = 0x11DF98u;
    {
        const bool branch_taken_0x11df98 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x11DF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DF98u;
        // 0x11df9c: 0x2402ff82  addiu       $v0, $zero, -0x7E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967170));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11df98) {
            ctx->pc = 0x11DFB8u;
            goto label_11dfb8;
        }
    }
    ctx->pc = 0x11DFA0u;
    // 0x11dfa0: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x11dfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x11dfa4: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x11dfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x11dfa8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11dfa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11dfac: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x11dfacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x11dfb0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11DFB0u;
    {
        const bool branch_taken_0x11dfb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DFB0u;
        // 0x11dfb4: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dfb0) {
            ctx->pc = 0x11DFC0u;
            goto label_11dfc0;
        }
    }
    ctx->pc = 0x11DFB8u;
label_11dfb8:
    // 0x11dfb8: 0x472023  subu        $a0, $v0, $a3
    ctx->pc = 0x11dfb8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x11dfbc: 0x863004  sllv        $a2, $a2, $a0
    ctx->pc = 0x11dfbcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 4) & 0x1F));
label_11dfc0:
    // 0x11dfc0: 0x1072023  subu        $a0, $t0, $a3
    ctx->pc = 0x11dfc0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x11dfc4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11dfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_11dfc8:
    // 0x11dfc8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x11dfc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x11dfcc: 0x10820010  beq         $a0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x11DFCCu;
    {
        const bool branch_taken_0x11dfcc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x11DFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DFCCu;
        // 0x11dfd0: 0xa61823  subu        $v1, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dfcc) {
            ctx->pc = 0x11E010u;
            goto label_11e010;
        }
    }
    ctx->pc = 0x11DFD4u;
    // 0x11dfd4: 0x0  nop
    ctx->pc = 0x11dfd4u;
    // NOP
    // 0x11dfd8: 0x0  nop
    ctx->pc = 0x11dfd8u;
    // NOP
    // 0x11dfdc: 0x0  nop
    ctx->pc = 0x11dfdcu;
    // NOP
    // 0x11dfe0: 0x0  nop
    ctx->pc = 0x11dfe0u;
    // NOP
    // 0x11dfe4: 0x460fff8  bltz        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x11DFE4u;
    {
        const bool branch_taken_0x11dfe4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x11DFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DFE4u;
        // 0x11dfe8: 0x52840  sll         $a1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dfe4) {
            ctx->pc = 0x11DFC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11dfc8;
        }
    }
    ctx->pc = 0x11DFECu;
    // 0x11dfec: 0x5060000d  beql        $v1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x11DFECu;
    {
        const bool branch_taken_0x11dfec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x11dfec) {
            ctx->pc = 0x11DFF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11DFECu;
            // 0x11dff0: 0xa17c2  srl         $v0, $t2, 31 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 10), 31));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E024u;
            goto label_11e024;
        }
    }
    ctx->pc = 0x11DFF4u;
    // 0x11dff4: 0x0  nop
    ctx->pc = 0x11dff4u;
    // NOP
    // 0x11dff8: 0x0  nop
    ctx->pc = 0x11dff8u;
    // NOP
    // 0x11dffc: 0x0  nop
    ctx->pc = 0x11dffcu;
    // NOP
    // 0x11e000: 0x0  nop
    ctx->pc = 0x11e000u;
    // NOP
    // 0x11e004: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x11E004u;
    {
        const bool branch_taken_0x11e004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E004u;
        // 0x11e008: 0x32840  sll         $a1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e004) {
            ctx->pc = 0x11DFC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11dfc8;
        }
    }
    ctx->pc = 0x11E00Cu;
    // 0x11e00c: 0x0  nop
    ctx->pc = 0x11e00cu;
    // NOP
label_11e010:
    // 0x11e010: 0x28620000  slti        $v0, $v1, 0x0
    ctx->pc = 0x11e010u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x11e014: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x11e014u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x11e018: 0x14a00009  bnez        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x11E018u;
    {
        const bool branch_taken_0x11e018 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E018u;
        // 0x11e01c: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e018) {
            ctx->pc = 0x11E040u;
            goto label_11e040;
        }
    }
    ctx->pc = 0x11E020u;
label_11e020:
    // 0x11e020: 0xa17c2  srl         $v0, $t2, 31
    ctx->pc = 0x11e020u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 10), 31));
label_11e024:
    // 0x11e024: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11e024u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11e028: 0x3c010015  lui         $at, 0x15
    ctx->pc = 0x11e028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)21 << 16));
    // 0x11e02c: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x11e02cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x11e030: 0xc420e8a0  lwc1        $f0, -0x1760($at)
    ctx->pc = 0x11e030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294961312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11e034: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x11E034u;
    {
        const bool branch_taken_0x11e034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e034) {
            ctx->pc = 0x11E0B8u;
            goto label_11e0b8;
        }
    }
    ctx->pc = 0x11E03Cu;
    // 0x11e03c: 0x0  nop
    ctx->pc = 0x11e03cu;
    // NOP
label_11e040:
    // 0x11e040: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11e040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11e044: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x11e044u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x11e048: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x11E048u;
    {
        const bool branch_taken_0x11e048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11e048) {
            ctx->pc = 0x11E078u;
            goto label_11e078;
        }
    }
    ctx->pc = 0x11E050u;
    // 0x11e050: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x11e050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x11e054: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x11e054u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_11e058:
    // 0x11e058: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x11e058u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x11e05c: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x11e05cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x11e060: 0x0  nop
    ctx->pc = 0x11e060u;
    // NOP
    // 0x11e064: 0x0  nop
    ctx->pc = 0x11e064u;
    // NOP
    // 0x11e068: 0x0  nop
    ctx->pc = 0x11e068u;
    // NOP
    // 0x11e06c: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11E06Cu;
    {
        const bool branch_taken_0x11e06c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E06Cu;
        // 0x11e070: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e06c) {
            ctx->pc = 0x11E058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11e058;
        }
    }
    ctx->pc = 0x11E074u;
    // 0x11e074: 0x28e9ff82  slti        $t1, $a3, -0x7E
    ctx->pc = 0x11e074u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4294967170) ? 1 : 0);
label_11e078:
    // 0x11e078: 0x1520000b  bnez        $t1, . + 4 + (0xB << 2)
    ctx->pc = 0x11E078u;
    {
        const bool branch_taken_0x11e078 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E078u;
        // 0x11e07c: 0x2402ff82  addiu       $v0, $zero, -0x7E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967170));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e078) {
            ctx->pc = 0x11E0A8u;
            goto label_11e0a8;
        }
    }
    ctx->pc = 0x11E080u;
    // 0x11e080: 0x24e3007f  addiu       $v1, $a3, 0x7F
    ctx->pc = 0x11e080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 127));
    // 0x11e084: 0x3c02ff80  lui         $v0, 0xFF80
    ctx->pc = 0x11e084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65408 << 16));
    // 0x11e088: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x11e088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x11e08c: 0x31dc0  sll         $v1, $v1, 23
    ctx->pc = 0x11e08cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 23));
    // 0x11e090: 0x432825  or          $a1, $v0, $v1
    ctx->pc = 0x11e090u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x11e094: 0xaa2825  or          $a1, $a1, $t2
    ctx->pc = 0x11e094u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 10));
    // 0x11e098: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x11e098u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11e09c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x11E09Cu;
    {
        const bool branch_taken_0x11e09c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e09c) {
            ctx->pc = 0x11E0B8u;
            goto label_11e0b8;
        }
    }
    ctx->pc = 0x11E0A4u;
    // 0x11e0a4: 0x0  nop
    ctx->pc = 0x11e0a4u;
    // NOP
label_11e0a8:
    // 0x11e0a8: 0x472023  subu        $a0, $v0, $a3
    ctx->pc = 0x11e0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x11e0ac: 0x852807  srav        $a1, $a1, $a0
    ctx->pc = 0x11e0acu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
    // 0x11e0b0: 0xaa2825  or          $a1, $a1, $t2
    ctx->pc = 0x11e0b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 10));
    // 0x11e0b4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x11e0b4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11e0b8:
    // 0x11e0b8: 0x3e00008  jr          $ra
    ctx->pc = 0x11E0B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E0B8u;
        // 0x11e0bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E0B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E0C0u;
label_11e0c0:
    // 0x11e0c0: 0x44036000  mfc1        $v1, $f12
    ctx->pc = 0x11e0c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x11e0c4: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x11e0c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e0c8: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x11e0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x11e0cc: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x11e0ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x11e0d0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11e0d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11e0d4: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x11e0d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x11e0d8: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x11e0d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x11e0dc: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x11e0dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11e0e0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E0E0u;
    {
        const bool branch_taken_0x11e0e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E0E0u;
        // 0x11e0e4: 0x3c020015  lui         $v0, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e0e0) {
            ctx->pc = 0x11E0F0u;
            goto label_11e0f0;
        }
    }
    ctx->pc = 0x11E0E8u;
    // 0x11e0e8: 0x3e00008  jr          $ra
    ctx->pc = 0x11E0E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E0E8u;
        // 0x11e0ec: 0xc440e8d4  lwc1        $f0, -0x172C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E0E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E0F0u;
label_11e0f0:
    // 0x11e0f0: 0x4a10009  bgez        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x11E0F0u;
    {
        const bool branch_taken_0x11e0f0 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x11E0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E0F0u;
        // 0x11e0f4: 0x525c3  sra         $a0, $a1, 23 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e0f0) {
            ctx->pc = 0x11E118u;
            goto label_11e118;
        }
    }
    ctx->pc = 0x11E0F8u;
    // 0x11e0f8: 0x460c6041  sub.s       $f1, $f12, $f12
    ctx->pc = 0x11e0f8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[12]);
    // 0x11e0fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x11e0fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11e100: 0x0  nop
    ctx->pc = 0x11e100u;
    // NOP
    // 0x11e104: 0x0  nop
    ctx->pc = 0x11e104u;
    // NOP
    // 0x11e108: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x11e108u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x11e10c: 0x3e00008  jr          $ra
    ctx->pc = 0x11E10Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E10Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E114u;
    // 0x11e114: 0x0  nop
    ctx->pc = 0x11e114u;
    // NOP
label_11e118:
    // 0x11e118: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x11e118u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x11e11c: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x11e11cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x11e120: 0x3463fb20  ori         $v1, $v1, 0xFB20
    ctx->pc = 0x11e120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64288);
    // 0x11e124: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x11e124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x11e128: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x11e128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x11e12c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x11e12cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x11e130: 0x2484ff81  addiu       $a0, $a0, -0x7F
    ctx->pc = 0x11e130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967169));
    // 0x11e134: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x11e134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x11e138: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x11e138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x11e13c: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x11e13cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x11e140: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x11e140u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11e144: 0x31dc3  sra         $v1, $v1, 23
    ctx->pc = 0x11e144u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 23));
    // 0x11e148: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11e148u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11e14c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11e14cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11e150: 0x24a2000f  addiu       $v0, $a1, 0xF
    ctx->pc = 0x11e150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x11e154: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x11e154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x11e158: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x11e158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x11e15c: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x11e15cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x11e160: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x11E160u;
    {
        const bool branch_taken_0x11e160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E160u;
        // 0x11e164: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e160) {
            ctx->pc = 0x11E218u;
            goto label_11e218;
        }
    }
    ctx->pc = 0x11E168u;
    // 0x11e168: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x11e168u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11e16c: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x11e16cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11e170: 0x4502000f  bc1fl       . + 4 + (0xF << 2)
    ctx->pc = 0x11E170u;
    {
        const bool branch_taken_0x11e170 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x11e170) {
            ctx->pc = 0x11E174u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E170u;
            // 0x11e174: 0x460c6082  mul.s       $f2, $f12, $f12 (Delay Slot)
            ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E1B0u;
            goto label_11e1b0;
        }
    }
    ctx->pc = 0x11E178u;
    // 0x11e178: 0x10800087  beqz        $a0, . + 4 + (0x87 << 2)
    ctx->pc = 0x11E178u;
    {
        const bool branch_taken_0x11e178 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e178) {
            ctx->pc = 0x11E398u;
            goto label_11e398;
        }
    }
    ctx->pc = 0x11E180u;
    // 0x11e180: 0x44844800  mtc1        $a0, $f9
    ctx->pc = 0x11e180u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x11e184: 0x46804a60  cvt.s.w     $f9, $f9
    ctx->pc = 0x11e184u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[9], sizeof(tmp)); ctx->f[9] = FPU_CVT_S_W(tmp); }
    // 0x11e188: 0x3c013f31  lui         $at, 0x3F31
    ctx->pc = 0x11e188u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16177 << 16));
    // 0x11e18c: 0x34217180  ori         $at, $at, 0x7180
    ctx->pc = 0x11e18cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29056);
    // 0x11e190: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11e190u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11e194: 0x3c013717  lui         $at, 0x3717
    ctx->pc = 0x11e194u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14103 << 16));
    // 0x11e198: 0x3421f7d1  ori         $at, $at, 0xF7D1
    ctx->pc = 0x11e198u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63441);
    // 0x11e19c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11e19cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11e1a0: 0x46014842  mul.s       $f1, $f9, $f1
    ctx->pc = 0x11e1a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
    // 0x11e1a4: 0x46004802  mul.s       $f0, $f9, $f0
    ctx->pc = 0x11e1a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x11e1a8: 0x3e00008  jr          $ra
    ctx->pc = 0x11E1A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E1A8u;
        // 0x11e1ac: 0x46000800  add.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E1A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E1B0u;
label_11e1b0:
    // 0x11e1b0: 0x3c013eaa  lui         $at, 0x3EAA
    ctx->pc = 0x11e1b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16042 << 16));
    // 0x11e1b4: 0x3421aaaa  ori         $at, $at, 0xAAAA
    ctx->pc = 0x11e1b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43690);
    // 0x11e1b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11e1b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11e1bc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x11e1bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x11e1c0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11e1c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11e1c4: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x11e1c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x11e1c8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x11e1c8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x11e1cc: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11E1CCu;
    {
        const bool branch_taken_0x11e1cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E1CCu;
        // 0x11e1d0: 0x46011082  mul.s       $f2, $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e1cc) {
            ctx->pc = 0x11E1E0u;
            goto label_11e1e0;
        }
    }
    ctx->pc = 0x11E1D4u;
    // 0x11e1d4: 0x3e00008  jr          $ra
    ctx->pc = 0x11E1D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E1D4u;
        // 0x11e1d8: 0x46026001  sub.s       $f0, $f12, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E1D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E1DCu;
    // 0x11e1dc: 0x0  nop
    ctx->pc = 0x11e1dcu;
    // NOP
label_11e1e0:
    // 0x11e1e0: 0x44844800  mtc1        $a0, $f9
    ctx->pc = 0x11e1e0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x11e1e4: 0x46804a60  cvt.s.w     $f9, $f9
    ctx->pc = 0x11e1e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[9], sizeof(tmp)); ctx->f[9] = FPU_CVT_S_W(tmp); }
    // 0x11e1e8: 0x3c013717  lui         $at, 0x3717
    ctx->pc = 0x11e1e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14103 << 16));
    // 0x11e1ec: 0x3421f7d1  ori         $at, $at, 0xF7D1
    ctx->pc = 0x11e1ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63441);
    // 0x11e1f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11e1f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11e1f4: 0x3c013f31  lui         $at, 0x3F31
    ctx->pc = 0x11e1f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16177 << 16));
    // 0x11e1f8: 0x34217180  ori         $at, $at, 0x7180
    ctx->pc = 0x11e1f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29056);
    // 0x11e1fc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11e1fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11e200: 0x46004802  mul.s       $f0, $f9, $f0
    ctx->pc = 0x11e200u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x11e204: 0x46014842  mul.s       $f1, $f9, $f1
    ctx->pc = 0x11e204u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
    // 0x11e208: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x11e208u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x11e20c: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x11e20cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x11e210: 0x3e00008  jr          $ra
    ctx->pc = 0x11E210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E210u;
        // 0x11e214: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E210u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E218u;
label_11e218:
    // 0x11e218: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x11e218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x11e21c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11e21cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11e220: 0x3c03ffcf  lui         $v1, 0xFFCF
    ctx->pc = 0x11e220u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65487 << 16));
    // 0x11e224: 0x3c013e17  lui         $at, 0x3E17
    ctx->pc = 0x11e224u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15895 << 16));
    // 0x11e228: 0x34218896  ori         $at, $at, 0x8896
    ctx->pc = 0x11e228u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34966);
    // 0x11e22c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11e22cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11e230: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x11e230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x11e234: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x11e234u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x11e238: 0x3c013e3a  lui         $at, 0x3E3A
    ctx->pc = 0x11e238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15930 << 16));
    // 0x11e23c: 0x34213324  ori         $at, $at, 0x3324
    ctx->pc = 0x11e23cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13092);
    // 0x11e240: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x11e240u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x11e244: 0x3c013e1c  lui         $at, 0x3E1C
    ctx->pc = 0x11e244u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15900 << 16));
    // 0x11e248: 0x3421d04e  ori         $at, $at, 0xD04E
    ctx->pc = 0x11e248u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53326);
    // 0x11e24c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x11e24cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11e250: 0x34635c30  ori         $v1, $v1, 0x5C30
    ctx->pc = 0x11e250u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)23600);
    // 0x11e254: 0x3c013e63  lui         $at, 0x3E63
    ctx->pc = 0x11e254u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15971 << 16));
    // 0x11e258: 0x34218e29  ori         $at, $at, 0x8E29
    ctx->pc = 0x11e258u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36393);
    // 0x11e25c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x11e25cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x11e260: 0x3442c288  ori         $v0, $v0, 0xC288
    ctx->pc = 0x11e260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49800);
    // 0x11e264: 0x3c013e92  lui         $at, 0x3E92
    ctx->pc = 0x11e264u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16018 << 16));
    // 0x11e268: 0x34214925  ori         $at, $at, 0x4925
    ctx->pc = 0x11e268u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18725);
    // 0x11e26c: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x11e26cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x11e270: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x11e270u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x11e274: 0x0  nop
    ctx->pc = 0x11e274u;
    // NOP
    // 0x11e278: 0x0  nop
    ctx->pc = 0x11e278u;
    // NOP
    // 0x11e27c: 0x46006283  div.s       $f10, $f12, $f0
    ctx->pc = 0x11e27cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[10] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[10] = ctx->f[12] / ctx->f[0];
    // 0x11e280: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x11e280u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x11e284: 0x3421cccc  ori         $at, $at, 0xCCCC
    ctx->pc = 0x11e284u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52428);
    // 0x11e288: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x11e288u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x11e28c: 0x3c013f2a  lui         $at, 0x3F2A
    ctx->pc = 0x11e28cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16170 << 16));
    // 0x11e290: 0x3421aaaa  ori         $at, $at, 0xAAAA
    ctx->pc = 0x11e290u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43690);
    // 0x11e294: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x11e294u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x11e298: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x11e298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x11e29c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x11e29cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x11e2a0: 0x44844800  mtc1        $a0, $f9
    ctx->pc = 0x11e2a0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x11e2a4: 0x46804a60  cvt.s.w     $f9, $f9
    ctx->pc = 0x11e2a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[9], sizeof(tmp)); ctx->f[9] = FPU_CVT_S_W(tmp); }
    // 0x11e2a8: 0x460a50c2  mul.s       $f3, $f10, $f10
    ctx->pc = 0x11e2a8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
    // 0x11e2ac: 0x46031802  mul.s       $f0, $f3, $f3
    ctx->pc = 0x11e2acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x11e2b0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x11e2b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11e2b4: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x11e2b4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x11e2b8: 0x46080840  add.s       $f1, $f1, $f8
    ctx->pc = 0x11e2b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[8]);
    // 0x11e2bc: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x11e2bcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x11e2c0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x11e2c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11e2c4: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x11e2c4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x11e2c8: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x11e2c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x11e2cc: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x11e2ccu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x11e2d0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x11e2d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11e2d4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x11e2d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x11e2d8: 0x46070840  add.s       $f1, $f1, $f7
    ctx->pc = 0x11e2d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
    // 0x11e2dc: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x11e2dcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x11e2e0: 0x1860001b  blez        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x11E2E0u;
    {
        const bool branch_taken_0x11e2e0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x11E2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E2E0u;
        // 0x11e2e4: 0x46001880  add.s       $f2, $f3, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e2e0) {
            ctx->pc = 0x11E350u;
            goto label_11e350;
        }
    }
    ctx->pc = 0x11E2E8u;
    // 0x11e2e8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x11e2e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x11e2ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11e2ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11e2f0: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x11e2f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x11e2f4: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11E2F4u;
    {
        const bool branch_taken_0x11e2f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E2F4u;
        // 0x11e2f8: 0x460c0102  mul.s       $f4, $f0, $f12 (Delay Slot)
        ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e2f4) {
            ctx->pc = 0x11E310u;
            goto label_11e310;
        }
    }
    ctx->pc = 0x11E2FCu;
    // 0x11e2fc: 0x46022000  add.s       $f0, $f4, $f2
    ctx->pc = 0x11e2fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x11e300: 0x46005002  mul.s       $f0, $f10, $f0
    ctx->pc = 0x11e300u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
    // 0x11e304: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x11e304u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x11e308: 0x3e00008  jr          $ra
    ctx->pc = 0x11E308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E308u;
        // 0x11e30c: 0x46006001  sub.s       $f0, $f12, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E310u;
label_11e310:
    // 0x11e310: 0x46022000  add.s       $f0, $f4, $f2
    ctx->pc = 0x11e310u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x11e314: 0x3c013f31  lui         $at, 0x3F31
    ctx->pc = 0x11e314u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16177 << 16));
    // 0x11e318: 0x34217180  ori         $at, $at, 0x7180
    ctx->pc = 0x11e318u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29056);
    // 0x11e31c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x11e31cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11e320: 0x3c013717  lui         $at, 0x3717
    ctx->pc = 0x11e320u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14103 << 16));
    // 0x11e324: 0x3421f7d1  ori         $at, $at, 0xF7D1
    ctx->pc = 0x11e324u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63441);
    // 0x11e328: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11e328u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11e32c: 0x46024882  mul.s       $f2, $f9, $f2
    ctx->pc = 0x11e32cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[9], ctx->f[2]);
    // 0x11e330: 0x46014842  mul.s       $f1, $f9, $f1
    ctx->pc = 0x11e330u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
    // 0x11e334: 0x46005002  mul.s       $f0, $f10, $f0
    ctx->pc = 0x11e334u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
    // 0x11e338: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11e338u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11e33c: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x11e33cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x11e340: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x11e340u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x11e344: 0x3e00008  jr          $ra
    ctx->pc = 0x11E344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E344u;
        // 0x11e348: 0x46001001  sub.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E344u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E34Cu;
    // 0x11e34c: 0x0  nop
    ctx->pc = 0x11e34cu;
    // NOP
label_11e350:
    // 0x11e350: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11E350u;
    {
        const bool branch_taken_0x11e350 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E350u;
        // 0x11e354: 0x46026001  sub.s       $f0, $f12, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e350) {
            ctx->pc = 0x11E368u;
            goto label_11e368;
        }
    }
    ctx->pc = 0x11E358u;
    // 0x11e358: 0x46005002  mul.s       $f0, $f10, $f0
    ctx->pc = 0x11e358u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
    // 0x11e35c: 0x3e00008  jr          $ra
    ctx->pc = 0x11E35Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E35Cu;
        // 0x11e360: 0x46006001  sub.s       $f0, $f12, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E35Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E364u;
    // 0x11e364: 0x0  nop
    ctx->pc = 0x11e364u;
    // NOP
label_11e368:
    // 0x11e368: 0x3c013f31  lui         $at, 0x3F31
    ctx->pc = 0x11e368u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16177 << 16));
    // 0x11e36c: 0x34217180  ori         $at, $at, 0x7180
    ctx->pc = 0x11e36cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29056);
    // 0x11e370: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x11e370u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11e374: 0x3c013717  lui         $at, 0x3717
    ctx->pc = 0x11e374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14103 << 16));
    // 0x11e378: 0x3421f7d1  ori         $at, $at, 0xF7D1
    ctx->pc = 0x11e378u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63441);
    // 0x11e37c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11e37cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11e380: 0x46024882  mul.s       $f2, $f9, $f2
    ctx->pc = 0x11e380u;
    ctx->f[2] = FPU_MUL_S(ctx->f[9], ctx->f[2]);
    // 0x11e384: 0x46014842  mul.s       $f1, $f9, $f1
    ctx->pc = 0x11e384u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
    // 0x11e388: 0x46005002  mul.s       $f0, $f10, $f0
    ctx->pc = 0x11e388u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
    // 0x11e38c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x11e38cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x11e390: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x11e390u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x11e394: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x11e394u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_11e398:
    // 0x11e398: 0x3e00008  jr          $ra
    ctx->pc = 0x11E398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E3A0u;
label_11e3a0:
    // 0x11e3a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x11e3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x11e3a4: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x11e3a4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x11e3a8: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x11e3a8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x11e3ac: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x11e3acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x11e3b0: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x11e3b0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x11e3b4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x11e3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x11e3b8: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x11e3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x11e3bc: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x11e3bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x11e3c0: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x11e3c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x11e3c4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x11e3c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x11e3c8: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x11e3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x11e3cc: 0x4413a000  mfc1        $s3, $f20
    ctx->pc = 0x11e3ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
    // 0x11e3d0: 0x4412a800  mfc1        $s2, $f21
    ctx->pc = 0x11e3d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
    // 0x11e3d4: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x11e3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x11e3d8: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x11e3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x11e3dc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11e3dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11e3e0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x11e3e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x11e3e4: 0x2428024  and         $s0, $s2, $v0
    ctx->pc = 0x11e3e4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x11e3e8: 0x70182a  slt         $v1, $v1, $s0
    ctx->pc = 0x11e3e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11e3ec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11e3ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11e3f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11e3f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11e3f4: 0x106001d8  beqz        $v1, . + 4 + (0x1D8 << 2)
    ctx->pc = 0x11E3F4u;
    {
        const bool branch_taken_0x11e3f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E3F4u;
        // 0x11e3f8: 0x2628824  and         $s1, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e3f4) {
            ctx->pc = 0x11EB58u;
            goto label_11eb58;
        }
    }
    ctx->pc = 0x11E3FCu;
    // 0x11e3fc: 0x6610016  bgez        $s3, . + 4 + (0x16 << 2)
    ctx->pc = 0x11E3FCu;
    {
        const bool branch_taken_0x11e3fc = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x11E400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E3FCu;
        // 0x11e400: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e3fc) {
            ctx->pc = 0x11E458u;
            goto label_11e458;
        }
    }
    ctx->pc = 0x11E404u;
    // 0x11e404: 0x3c024b7f  lui         $v0, 0x4B7F
    ctx->pc = 0x11e404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19327 << 16));
    // 0x11e408: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11e408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11e40c: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x11e40cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11e410: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E410u;
    {
        const bool branch_taken_0x11e410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E410u;
        // 0x11e414: 0x3c023f7f  lui         $v0, 0x3F7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e410) {
            ctx->pc = 0x11E420u;
            goto label_11e420;
        }
    }
    ctx->pc = 0x11E418u;
    // 0x11e418: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x11E418u;
    {
        const bool branch_taken_0x11e418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E418u;
        // 0x11e41c: 0x24140002  addiu       $s4, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e418) {
            ctx->pc = 0x11E458u;
            goto label_11e458;
        }
    }
    ctx->pc = 0x11E420u;
label_11e420:
    // 0x11e420: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11e420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11e424: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x11e424u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11e428: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x11E428u;
    {
        const bool branch_taken_0x11e428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E428u;
        // 0x11e42c: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e428) {
            ctx->pc = 0x11E45Cu;
            goto label_11e45c;
        }
    }
    ctx->pc = 0x11E430u;
    // 0x11e430: 0x101dc3  sra         $v1, $s0, 23
    ctx->pc = 0x11e430u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 16), 23));
    // 0x11e434: 0x24020096  addiu       $v0, $zero, 0x96
    ctx->pc = 0x11e434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x11e438: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x11e438u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11e43c: 0x502007  srav        $a0, $s0, $v0
    ctx->pc = 0x11e43cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x11e440: 0x441004  sllv        $v0, $a0, $v0
    ctx->pc = 0x11e440u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x11e444: 0x14500005  bne         $v0, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11E444u;
    {
        const bool branch_taken_0x11e444 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x11E448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E444u;
        // 0x11e448: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e444) {
            ctx->pc = 0x11E45Cu;
            goto label_11e45c;
        }
    }
    ctx->pc = 0x11E44Cu;
    // 0x11e44c: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x11e44cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x11e450: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x11e450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11e454: 0x43a023  subu        $s4, $v0, $v1
    ctx->pc = 0x11e454u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_11e458:
    // 0x11e458: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x11e458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_11e45c:
    // 0x11e45c: 0x5602000a  bnel        $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x11E45Cu;
    {
        const bool branch_taken_0x11e45c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x11e45c) {
            ctx->pc = 0x11E460u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E45Cu;
            // 0x11e460: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E488u;
            goto label_11e488;
        }
    }
    ctx->pc = 0x11E464u;
    // 0x11e464: 0x64301bc  bgezl       $s2, . + 4 + (0x1BC << 2)
    ctx->pc = 0x11E464u;
    {
        const bool branch_taken_0x11e464 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x11e464) {
            ctx->pc = 0x11E468u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E464u;
            // 0x11e468: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11EB58u;
            goto label_11eb58;
        }
    }
    ctx->pc = 0x11E46Cu;
    // 0x11e46c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11e46cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11e470: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11e470u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11e474: 0x0  nop
    ctx->pc = 0x11e474u;
    // NOP
    // 0x11e478: 0x0  nop
    ctx->pc = 0x11e478u;
    // NOP
    // 0x11e47c: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x11e47cu;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
    // 0x11e480: 0x100001b6  b           . + 4 + (0x1B6 << 2)
    ctx->pc = 0x11E480u;
    {
        const bool branch_taken_0x11e480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E480u;
        // 0x11e484: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e480) {
            ctx->pc = 0x11EB5Cu;
            goto label_11eb5c;
        }
    }
    ctx->pc = 0x11E488u;
label_11e488:
    // 0x11e488: 0x16420003  bne         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E488u;
    {
        const bool branch_taken_0x11e488 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x11E48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E488u;
        // 0x11e48c: 0x3c023f00  lui         $v0, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e488) {
            ctx->pc = 0x11E498u;
            goto label_11e498;
        }
    }
    ctx->pc = 0x11E490u;
    // 0x11e490: 0x100001b1  b           . + 4 + (0x1B1 << 2)
    ctx->pc = 0x11E490u;
    {
        const bool branch_taken_0x11e490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E490u;
        // 0x11e494: 0x4614a002  mul.s       $f0, $f20, $f20 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e490) {
            ctx->pc = 0x11EB58u;
            goto label_11eb58;
        }
    }
    ctx->pc = 0x11E498u;
label_11e498:
    // 0x11e498: 0x1642000d  bne         $s2, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x11E498u;
    {
        const bool branch_taken_0x11e498 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x11e498) {
            ctx->pc = 0x11E4D0u;
            goto label_11e4d0;
        }
    }
    ctx->pc = 0x11E4A0u;
    // 0x11e4a0: 0x660000b  bltz        $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x11E4A0u;
    {
        const bool branch_taken_0x11e4a0 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x11E4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E4A0u;
        // 0x11e4a4: 0xdfbf0048  ld          $ra, 0x48($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e4a0) {
            ctx->pc = 0x11E4D0u;
            goto label_11e4d0;
        }
    }
    ctx->pc = 0x11E4A8u;
    // 0x11e4a8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11e4a8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x11e4ac: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x11e4acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11e4b0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x11e4b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11e4b4: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x11e4b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x11e4b8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x11e4b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11e4bc: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x11e4bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x11e4c0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x11e4c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11e4c4: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x11e4c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x11e4c8: 0x8047bcc  j           func_11EF30
    ctx->pc = 0x11E4C8u;
    ctx->pc = 0x11E4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E4C8u;
    // 0x11e4cc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EF30u;
    sub_0011EF30_0x11ef30(rdram, ctx, runtime); return;
    ctx->pc = 0x11E4D0u;
label_11e4d0:
    // 0x11e4d0: 0xc0474a2  jal         func_11D288
    ctx->pc = 0x11E4D0u;
    SET_GPR_U32(ctx, 31, 0x11E4D8u);
    ctx->pc = 0x11E4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E4D0u;
    // 0x11e4d4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D288u, 0x11E4D0u, 0x11E4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E4D8u;
label_11e4d8:
    // 0x11e4d8: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x11e4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x11e4dc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x11e4dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x11e4e0: 0x71102a  slt         $v0, $v1, $s1
    ctx->pc = 0x11e4e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x11e4e4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11E4E4u;
    {
        const bool branch_taken_0x11e4e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E4E4u;
        // 0x11e4e8: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e4e4) {
            ctx->pc = 0x11E4F8u;
            goto label_11e4f8;
        }
    }
    ctx->pc = 0x11E4ECu;
    // 0x11e4ec: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x11e4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x11e4f0: 0x16250019  bne         $s1, $a1, . + 4 + (0x19 << 2)
    ctx->pc = 0x11E4F0u;
    {
        const bool branch_taken_0x11e4f0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 5));
        ctx->pc = 0x11E4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E4F0u;
        // 0x11e4f4: 0x134fc2  srl         $t1, $s3, 31 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 19), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e4f0) {
            ctx->pc = 0x11E558u;
            goto label_11e558;
        }
    }
    ctx->pc = 0x11E4F8u;
label_11e4f8:
    // 0x11e4f8: 0x6410006  bgez        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x11E4F8u;
    {
        const bool branch_taken_0x11e4f8 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x11E4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E4F8u;
        // 0x11e4fc: 0x46006106  mov.s       $f4, $f12 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e4f8) {
            ctx->pc = 0x11E514u;
            goto label_11e514;
        }
    }
    ctx->pc = 0x11E500u;
    // 0x11e500: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11e500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11e504: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11e504u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11e508: 0x0  nop
    ctx->pc = 0x11e508u;
    // NOP
    // 0x11e50c: 0x0  nop
    ctx->pc = 0x11e50cu;
    // NOP
    // 0x11e510: 0x46040103  div.s       $f4, $f0, $f4
    ctx->pc = 0x11e510u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[4] = ctx->f[0] / ctx->f[4];
label_11e514:
    // 0x11e514: 0x6610190  bgez        $s3, . + 4 + (0x190 << 2)
    ctx->pc = 0x11E514u;
    {
        const bool branch_taken_0x11e514 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x11E518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E514u;
        // 0x11e518: 0x46002006  mov.s       $f0, $f4 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e514) {
            ctx->pc = 0x11EB58u;
            goto label_11eb58;
        }
    }
    ctx->pc = 0x11E51Cu;
    // 0x11e51c: 0x3c02c080  lui         $v0, 0xC080
    ctx->pc = 0x11e51cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49280 << 16));
    // 0x11e520: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x11e520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x11e524: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x11e524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x11e528: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11E528u;
    {
        const bool branch_taken_0x11e528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E528u;
        // 0x11e52c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e528) {
            ctx->pc = 0x11E548u;
            goto label_11e548;
        }
    }
    ctx->pc = 0x11E530u;
    // 0x11e530: 0x46042001  sub.s       $f0, $f4, $f4
    ctx->pc = 0x11e530u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[4]);
    // 0x11e534: 0x0  nop
    ctx->pc = 0x11e534u;
    // NOP
    // 0x11e538: 0x0  nop
    ctx->pc = 0x11e538u;
    // NOP
    // 0x11e53c: 0x46000103  div.s       $f4, $f0, $f0
    ctx->pc = 0x11e53cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[4] = ctx->f[0] / ctx->f[0];
    // 0x11e540: 0x10000185  b           . + 4 + (0x185 << 2)
    ctx->pc = 0x11E540u;
    {
        const bool branch_taken_0x11e540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E540u;
        // 0x11e544: 0x46002006  mov.s       $f0, $f4 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e540) {
            ctx->pc = 0x11EB58u;
            goto label_11eb58;
        }
    }
    ctx->pc = 0x11E548u;
label_11e548:
    // 0x11e548: 0x52820001  beql        $s4, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x11E548u;
    {
        const bool branch_taken_0x11e548 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x11e548) {
            ctx->pc = 0x11E54Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E548u;
            // 0x11e54c: 0x46002107  neg.s       $f4, $f4 (Delay Slot)
            ctx->f[4] = FPU_NEG_S(ctx->f[4]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E550u;
            goto label_11e550;
        }
    }
    ctx->pc = 0x11E550u;
label_11e550:
    // 0x11e550: 0x10000181  b           . + 4 + (0x181 << 2)
    ctx->pc = 0x11E550u;
    {
        const bool branch_taken_0x11e550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E550u;
        // 0x11e554: 0x46002006  mov.s       $f0, $f4 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e550) {
            ctx->pc = 0x11EB58u;
            goto label_11eb58;
        }
    }
    ctx->pc = 0x11E558u;
label_11e558:
    // 0x11e558: 0x2522ffff  addiu       $v0, $t1, -0x1
    ctx->pc = 0x11e558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x11e55c: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x11e55cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x11e560: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11E560u;
    {
        const bool branch_taken_0x11e560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E560u;
        // 0x11e564: 0x3c024d00  lui         $v0, 0x4D00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19712 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e560) {
            ctx->pc = 0x11E580u;
            goto label_11e580;
        }
    }
    ctx->pc = 0x11E568u;
    // 0x11e568: 0x4614a001  sub.s       $f0, $f20, $f20
    ctx->pc = 0x11e568u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[20]);
    // 0x11e56c: 0x0  nop
    ctx->pc = 0x11e56cu;
    // NOP
    // 0x11e570: 0x0  nop
    ctx->pc = 0x11e570u;
    // NOP
    // 0x11e574: 0x46000003  div.s       $f0, $f0, $f0
    ctx->pc = 0x11e574u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[0];
    // 0x11e578: 0x10000178  b           . + 4 + (0x178 << 2)
    ctx->pc = 0x11E578u;
    {
        const bool branch_taken_0x11e578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E578u;
        // 0x11e57c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e578) {
            ctx->pc = 0x11EB5Cu;
            goto label_11eb5c;
        }
    }
    ctx->pc = 0x11E580u;
label_11e580:
    // 0x11e580: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x11e580u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11e584: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x11E584u;
    {
        const bool branch_taken_0x11e584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E584u;
        // 0x11e588: 0x3c02001c  lui         $v0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e584) {
            ctx->pc = 0x11E678u;
            goto label_11e678;
        }
    }
    ctx->pc = 0x11E58Cu;
    // 0x11e58c: 0x3c023f7f  lui         $v0, 0x3F7F
    ctx->pc = 0x11e58cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16255 << 16));
    // 0x11e590: 0x3442fff7  ori         $v0, $v0, 0xFFF7
    ctx->pc = 0x11e590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65527);
    // 0x11e594: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x11e594u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x11e598: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11E598u;
    {
        const bool branch_taken_0x11e598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E598u;
        // 0x11e59c: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e598) {
            ctx->pc = 0x11E5B0u;
            goto label_11e5b0;
        }
    }
    ctx->pc = 0x11E5A0u;
    // 0x11e5a0: 0x641000b  bgez        $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x11E5A0u;
    {
        const bool branch_taken_0x11e5a0 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x11E5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E5A0u;
        // 0x11e5a4: 0x3c020015  lui         $v0, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e5a0) {
            ctx->pc = 0x11E5D0u;
            goto label_11e5d0;
        }
    }
    ctx->pc = 0x11E5A8u;
    // 0x11e5a8: 0x1000016b  b           . + 4 + (0x16B << 2)
    ctx->pc = 0x11E5A8u;
    {
        const bool branch_taken_0x11e5a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E5A8u;
        // 0x11e5ac: 0xc440e95c  lwc1        $f0, -0x16A4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e5a8) {
            ctx->pc = 0x11EB58u;
            goto label_11eb58;
        }
    }
    ctx->pc = 0x11E5B0u;
label_11e5b0:
    // 0x11e5b0: 0x34420007  ori         $v0, $v0, 0x7
    ctx->pc = 0x11e5b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7);
    // 0x11e5b4: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x11e5b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x11e5b8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11E5B8u;
    {
        const bool branch_taken_0x11e5b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E5B8u;
        // 0x11e5bc: 0x2402f000  addiu       $v0, $zero, -0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e5b8) {
            ctx->pc = 0x11E5E0u;
            goto label_11e5e0;
        }
    }
    ctx->pc = 0x11E5C0u;
    // 0x11e5c0: 0x1a400003  blez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E5C0u;
    {
        const bool branch_taken_0x11e5c0 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x11E5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E5C0u;
        // 0x11e5c4: 0x3c020015  lui         $v0, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e5c0) {
            ctx->pc = 0x11E5D0u;
            goto label_11e5d0;
        }
    }
    ctx->pc = 0x11E5C8u;
    // 0x11e5c8: 0x10000163  b           . + 4 + (0x163 << 2)
    ctx->pc = 0x11E5C8u;
    {
        const bool branch_taken_0x11e5c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E5C8u;
        // 0x11e5cc: 0xc440e95c  lwc1        $f0, -0x16A4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e5c8) {
            ctx->pc = 0x11EB58u;
            goto label_11eb58;
        }
    }
    ctx->pc = 0x11E5D0u;
label_11e5d0:
    // 0x11e5d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x11e5d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11e5d4: 0x10000161  b           . + 4 + (0x161 << 2)
    ctx->pc = 0x11E5D4u;
    {
        const bool branch_taken_0x11e5d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E5D4u;
        // 0x11e5d8: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e5d4) {
            ctx->pc = 0x11EB5Cu;
            goto label_11eb5c;
        }
    }
    ctx->pc = 0x11E5DCu;
    // 0x11e5dc: 0x0  nop
    ctx->pc = 0x11e5dcu;
    // NOP
label_11e5e0:
    // 0x11e5e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11e5e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11e5e4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11e5e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11e5e8: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x11e5e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x11e5ec: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x11e5ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11e5f0: 0x4601a301  sub.s       $f12, $f20, $f1
    ctx->pc = 0x11e5f0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
    // 0x11e5f4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x11e5f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x11e5f8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11e5f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11e5fc: 0x3c013eaa  lui         $at, 0x3EAA
    ctx->pc = 0x11e5fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16042 << 16));
    // 0x11e600: 0x3421aaaa  ori         $at, $at, 0xAAAA
    ctx->pc = 0x11e600u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43690);
    // 0x11e604: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11e604u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11e608: 0x3c0136ec  lui         $at, 0x36EC
    ctx->pc = 0x11e608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14060 << 16));
    // 0x11e60c: 0x3421a56f  ori         $at, $at, 0xA56F
    ctx->pc = 0x11e60cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)42351);
    // 0x11e610: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x11e610u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x11e614: 0x3c013fb8  lui         $at, 0x3FB8
    ctx->pc = 0x11e614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16312 << 16));
    // 0x11e618: 0x3421aa3a  ori         $at, $at, 0xAA3A
    ctx->pc = 0x11e618u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43578);
    // 0x11e61c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x11e61cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x11e620: 0x46026082  mul.s       $f2, $f12, $f2
    ctx->pc = 0x11e620u;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x11e624: 0x3c013fb8  lui         $at, 0x3FB8
    ctx->pc = 0x11e624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16312 << 16));
    // 0x11e628: 0x3421aa00  ori         $at, $at, 0xAA00
    ctx->pc = 0x11e628u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43520);
    // 0x11e62c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x11e62cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x11e630: 0x460c6182  mul.s       $f6, $f12, $f12
    ctx->pc = 0x11e630u;
    ctx->f[6] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x11e634: 0x46046102  mul.s       $f4, $f12, $f4
    ctx->pc = 0x11e634u;
    ctx->f[4] = FPU_MUL_S(ctx->f[12], ctx->f[4]);
    // 0x11e638: 0x46056402  mul.s       $f16, $f12, $f5
    ctx->pc = 0x11e638u;
    ctx->f[16] = FPU_MUL_S(ctx->f[12], ctx->f[5]);
    // 0x11e63c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x11e63cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x11e640: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x11e640u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x11e644: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x11e644u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x11e648: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x11e648u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x11e64c: 0x460308c2  mul.s       $f3, $f1, $f3
    ctx->pc = 0x11e64cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x11e650: 0x46032341  sub.s       $f13, $f4, $f3
    ctx->pc = 0x11e650u;
    ctx->f[13] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x11e654: 0x460d8000  add.s       $f0, $f16, $f13
    ctx->pc = 0x11e654u;
    ctx->f[0] = FPU_ADD_S(ctx->f[16], ctx->f[13]);
    // 0x11e658: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x11e658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x11e65c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x11e65cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11e660: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x11e660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x11e664: 0x44833000  mtc1        $v1, $f6
    ctx->pc = 0x11e664u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x11e668: 0x46103001  sub.s       $f0, $f6, $f16
    ctx->pc = 0x11e668u;
    ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[16]);
    // 0x11e66c: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x11E66Cu;
    {
        const bool branch_taken_0x11e66c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E66Cu;
        // 0x11e670: 0x46006881  sub.s       $f2, $f13, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e66c) {
            ctx->pc = 0x11E8ACu;
            goto label_11e8ac;
        }
    }
    ctx->pc = 0x11E674u;
    // 0x11e674: 0x0  nop
    ctx->pc = 0x11e674u;
    // NOP
label_11e678:
    // 0x11e678: 0x2232024  and         $a0, $s1, $v1
    ctx->pc = 0x11e678u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x11e67c: 0x3442c471  ori         $v0, $v0, 0xC471
    ctx->pc = 0x11e67cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)50289);
    // 0x11e680: 0x111dc3  sra         $v1, $s1, 23
    ctx->pc = 0x11e680u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 17), 23));
    // 0x11e684: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x11e684u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x11e688: 0x2468ff81  addiu       $t0, $v1, -0x7F
    ctx->pc = 0x11e688u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967169));
    // 0x11e68c: 0x858825  or          $s1, $a0, $a1
    ctx->pc = 0x11e68cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x11e690: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x11E690u;
    {
        const bool branch_taken_0x11e690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E690u;
        // 0x11e694: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e690) {
            ctx->pc = 0x11E6BCu;
            goto label_11e6bc;
        }
    }
    ctx->pc = 0x11E698u;
    // 0x11e698: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x11e698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x11e69c: 0x3442b3d6  ori         $v0, $v0, 0xB3D6
    ctx->pc = 0x11e69cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46038);
    // 0x11e6a0: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x11e6a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x11e6a4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11E6A4u;
    {
        const bool branch_taken_0x11e6a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E6A4u;
        // 0x11e6a8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e6a4) {
            ctx->pc = 0x11E6BCu;
            goto label_11e6bc;
        }
    }
    ctx->pc = 0x11E6ACu;
    // 0x11e6ac: 0x3c02ff80  lui         $v0, 0xFF80
    ctx->pc = 0x11e6acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65408 << 16));
    // 0x11e6b0: 0x2468ff82  addiu       $t0, $v1, -0x7E
    ctx->pc = 0x11e6b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967170));
    // 0x11e6b4: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x11e6b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x11e6b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11e6b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11e6bc:
    // 0x11e6bc: 0x44916000  mtc1        $s1, $f12
    ctx->pc = 0x11e6bcu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11e6c0: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x11e6c0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x11e6c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11e6c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11e6c8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x11e6c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11e6cc: 0x3c010015  lui         $at, 0x15
    ctx->pc = 0x11e6ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)21 << 16));
    // 0x11e6d0: 0x260821  addu        $at, $at, $a2
    ctx->pc = 0x11e6d0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 6)));
    // 0x11e6d4: 0xc421e8d8  lwc1        $f1, -0x1728($at)
    ctx->pc = 0x11e6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294961368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11e6d8: 0x46016000  add.s       $f0, $f12, $f1
    ctx->pc = 0x11e6d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x11e6dc: 0x46016401  sub.s       $f16, $f12, $f1
    ctx->pc = 0x11e6dcu;
    ctx->f[16] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x11e6e0: 0x0  nop
    ctx->pc = 0x11e6e0u;
    // NOP
    // 0x11e6e4: 0x0  nop
    ctx->pc = 0x11e6e4u;
    // NOP
    // 0x11e6e8: 0x46001343  div.s       $f13, $f2, $f0
    ctx->pc = 0x11e6e8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[13] = ctx->f[2] / ctx->f[0];
    // 0x11e6ec: 0x460d8502  mul.s       $f20, $f16, $f13
    ctx->pc = 0x11e6ecu;
    ctx->f[20] = FPU_MUL_S(ctx->f[16], ctx->f[13]);
    // 0x11e6f0: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x11e6f0u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
    // 0x11e6f4: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x11e6f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x11e6f8: 0x2405f000  addiu       $a1, $zero, -0x1000
    ctx->pc = 0x11e6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x11e6fc: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x11e6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x11e700: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x11e700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x11e704: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x11e704u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x11e708: 0x111043  sra         $v0, $s1, 1
    ctx->pc = 0x11e708u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 1));
    // 0x11e70c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x11e70cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x11e710: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x11e710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x11e714: 0x72540  sll         $a0, $a3, 21
    ctx->pc = 0x11e714u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 21));
    // 0x11e718: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x11e718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x11e71c: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x11e71cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
    // 0x11e720: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x11e720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x11e724: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x11e724u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x11e728: 0x46017841  sub.s       $f1, $f15, $f1
    ctx->pc = 0x11e728u;
    ctx->f[1] = FPU_SUB_S(ctx->f[15], ctx->f[1]);
    // 0x11e72c: 0x3c013e53  lui         $at, 0x3E53
    ctx->pc = 0x11e72cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15955 << 16));
    // 0x11e730: 0x3421f142  ori         $at, $at, 0xF142
    ctx->pc = 0x11e730u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61762);
    // 0x11e734: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11e734u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11e738: 0x3c013e6c  lui         $at, 0x3E6C
    ctx->pc = 0x11e738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15980 << 16));
    // 0x11e73c: 0x34213254  ori         $at, $at, 0x3254
    ctx->pc = 0x11e73cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12884);
    // 0x11e740: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x11e740u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x11e744: 0x3c013e8b  lui         $at, 0x3E8B
    ctx->pc = 0x11e744u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16011 << 16));
    // 0x11e748: 0x3421a304  ori         $at, $at, 0xA304
    ctx->pc = 0x11e748u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41732);
    // 0x11e74c: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x11e74cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x11e750: 0x3c013eaa  lui         $at, 0x3EAA
    ctx->pc = 0x11e750u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16042 << 16));
    // 0x11e754: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x11e754u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x11e758: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x11e758u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x11e75c: 0x4614a382  mul.s       $f14, $f20, $f20
    ctx->pc = 0x11e75cu;
    ctx->f[14] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x11e760: 0x3c013edb  lui         $at, 0x3EDB
    ctx->pc = 0x11e760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16091 << 16));
    // 0x11e764: 0x34216db7  ori         $at, $at, 0x6DB7
    ctx->pc = 0x11e764u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28087);
    // 0x11e768: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x11e768u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x11e76c: 0x46016081  sub.s       $f2, $f12, $f1
    ctx->pc = 0x11e76cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x11e770: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x11e770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x11e774: 0x34219999  ori         $at, $at, 0x9999
    ctx->pc = 0x11e774u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39321);
    // 0x11e778: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x11e778u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x11e77c: 0x460f2842  mul.s       $f1, $f5, $f15
    ctx->pc = 0x11e77cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[15]);
    // 0x11e780: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x11e780u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x11e784: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x11e784u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x11e788: 0x46142900  add.s       $f4, $f5, $f20
    ctx->pc = 0x11e788u;
    ctx->f[4] = FPU_ADD_S(ctx->f[5], ctx->f[20]);
    // 0x11e78c: 0x46007002  mul.s       $f0, $f14, $f0
    ctx->pc = 0x11e78cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    // 0x11e790: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x11e790u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x11e794: 0x46018041  sub.s       $f1, $f16, $f1
    ctx->pc = 0x11e794u;
    ctx->f[1] = FPU_SUB_S(ctx->f[16], ctx->f[1]);
    // 0x11e798: 0x460e71c2  mul.s       $f7, $f14, $f14
    ctx->pc = 0x11e798u;
    ctx->f[7] = FPU_MUL_S(ctx->f[14], ctx->f[14]);
    // 0x11e79c: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x11e79cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x11e7a0: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x11e7a0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x11e7a4: 0x46007002  mul.s       $f0, $f14, $f0
    ctx->pc = 0x11e7a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    // 0x11e7a8: 0x46016842  mul.s       $f1, $f13, $f1
    ctx->pc = 0x11e7a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[13], ctx->f[1]);
    // 0x11e7ac: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x11e7acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x11e7b0: 0x46040902  mul.s       $f4, $f1, $f4
    ctx->pc = 0x11e7b0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x11e7b4: 0x46007002  mul.s       $f0, $f14, $f0
    ctx->pc = 0x11e7b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    // 0x11e7b8: 0x46090000  add.s       $f0, $f0, $f9
    ctx->pc = 0x11e7b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
    // 0x11e7bc: 0x46007002  mul.s       $f0, $f14, $f0
    ctx->pc = 0x11e7bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    // 0x11e7c0: 0x460a0000  add.s       $f0, $f0, $f10
    ctx->pc = 0x11e7c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[10]);
    // 0x11e7c4: 0x46007002  mul.s       $f0, $f14, $f0
    ctx->pc = 0x11e7c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    // 0x11e7c8: 0x46052b82  mul.s       $f14, $f5, $f5
    ctx->pc = 0x11e7c8u;
    ctx->f[14] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x11e7cc: 0x460b0000  add.s       $f0, $f0, $f11
    ctx->pc = 0x11e7ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[11]);
    // 0x11e7d0: 0x46037080  add.s       $f2, $f14, $f3
    ctx->pc = 0x11e7d0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[14], ctx->f[3]);
    // 0x11e7d4: 0x46003802  mul.s       $f0, $f7, $f0
    ctx->pc = 0x11e7d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x11e7d8: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x11e7d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x11e7dc: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x11e7dcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x11e7e0: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x11e7e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x11e7e4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x11e7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11e7e8: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x11e7e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x11e7ec: 0x44837800  mtc1        $v1, $f15
    ctx->pc = 0x11e7ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x11e7f0: 0x460378c1  sub.s       $f3, $f15, $f3
    ctx->pc = 0x11e7f0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[15], ctx->f[3]);
    // 0x11e7f4: 0x460e18c1  sub.s       $f3, $f3, $f14
    ctx->pc = 0x11e7f4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[14]);
    // 0x11e7f8: 0x460f0842  mul.s       $f1, $f1, $f15
    ctx->pc = 0x11e7f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[15]);
    // 0x11e7fc: 0x460f2c02  mul.s       $f16, $f5, $f15
    ctx->pc = 0x11e7fcu;
    ctx->f[16] = FPU_MUL_S(ctx->f[5], ctx->f[15]);
    // 0x11e800: 0x46030081  sub.s       $f2, $f0, $f3
    ctx->pc = 0x11e800u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x11e804: 0x46141002  mul.s       $f0, $f2, $f20
    ctx->pc = 0x11e804u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x11e808: 0x46000b40  add.s       $f13, $f1, $f0
    ctx->pc = 0x11e808u;
    ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x11e80c: 0x460d8000  add.s       $f0, $f16, $f13
    ctx->pc = 0x11e80cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[16], ctx->f[13]);
    // 0x11e810: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x11e810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x11e814: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x11e814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x11e818: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x11e818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x11e81c: 0x44824000  mtc1        $v0, $f8
    ctx->pc = 0x11e81cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x11e820: 0x461040c1  sub.s       $f3, $f8, $f16
    ctx->pc = 0x11e820u;
    ctx->f[3] = FPU_SUB_S(ctx->f[8], ctx->f[16]);
    // 0x11e824: 0x3c013f76  lui         $at, 0x3F76
    ctx->pc = 0x11e824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16246 << 16));
    // 0x11e828: 0x34213800  ori         $at, $at, 0x3800
    ctx->pc = 0x11e828u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14336);
    // 0x11e82c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x11e82cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11e830: 0x3c01369d  lui         $at, 0x369D
    ctx->pc = 0x11e830u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13981 << 16));
    // 0x11e834: 0x3421c39f  ori         $at, $at, 0xC39F
    ctx->pc = 0x11e834u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50079);
    // 0x11e838: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11e838u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11e83c: 0x3c013f76  lui         $at, 0x3F76
    ctx->pc = 0x11e83cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16246 << 16));
    // 0x11e840: 0x3421384e  ori         $at, $at, 0x384E
    ctx->pc = 0x11e840u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14414);
    // 0x11e844: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11e844u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11e848: 0x460369c1  sub.s       $f7, $f13, $f3
    ctx->pc = 0x11e848u;
    ctx->f[7] = FPU_SUB_S(ctx->f[13], ctx->f[3]);
    // 0x11e84c: 0x3c010015  lui         $at, 0x15
    ctx->pc = 0x11e84cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)21 << 16));
    // 0x11e850: 0x260821  addu        $at, $at, $a2
    ctx->pc = 0x11e850u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 6)));
    // 0x11e854: 0xc423e8e0  lwc1        $f3, -0x1720($at)
    ctx->pc = 0x11e854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294961376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11e858: 0x46014042  mul.s       $f1, $f8, $f1
    ctx->pc = 0x11e858u;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
    // 0x11e85c: 0x3c010015  lui         $at, 0x15
    ctx->pc = 0x11e85cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)21 << 16));
    // 0x11e860: 0x260821  addu        $at, $at, $a2
    ctx->pc = 0x11e860u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 6)));
    // 0x11e864: 0xc424e8e8  lwc1        $f4, -0x1718($at)
    ctx->pc = 0x11e864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294961384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x11e868: 0x46024082  mul.s       $f2, $f8, $f2
    ctx->pc = 0x11e868u;
    ctx->f[2] = FPU_MUL_S(ctx->f[8], ctx->f[2]);
    // 0x11e86c: 0x44886000  mtc1        $t0, $f12
    ctx->pc = 0x11e86cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11e870: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x11e870u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x11e874: 0x46003802  mul.s       $f0, $f7, $f0
    ctx->pc = 0x11e874u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x11e878: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x11e878u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x11e87c: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x11e87cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x11e880: 0x46011000  add.s       $f0, $f2, $f1
    ctx->pc = 0x11e880u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x11e884: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x11e884u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x11e888: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x11e888u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x11e88c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x11e88cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x11e890: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x11e890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11e894: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x11e894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x11e898: 0x44833000  mtc1        $v1, $f6
    ctx->pc = 0x11e898u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x11e89c: 0x460c3001  sub.s       $f0, $f6, $f12
    ctx->pc = 0x11e89cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[12]);
    // 0x11e8a0: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x11e8a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x11e8a4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x11e8a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x11e8a8: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x11e8a8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_11e8ac:
    // 0x11e8ac: 0x2522ffff  addiu       $v0, $t1, -0x1
    ctx->pc = 0x11e8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x11e8b0: 0x2683ffff  addiu       $v1, $s4, -0x1
    ctx->pc = 0x11e8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x11e8b4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x11e8b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x11e8b8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11e8b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11e8bc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x11e8bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x11e8c0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E8C0u;
    {
        const bool branch_taken_0x11e8c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E8C0u;
        // 0x11e8c4: 0x4600a806  mov.s       $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e8c0) {
            ctx->pc = 0x11E8D0u;
            goto label_11e8d0;
        }
    }
    ctx->pc = 0x11E8C8u;
    // 0x11e8c8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x11e8c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x11e8cc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x11e8ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_11e8d0:
    // 0x11e8d0: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x11e8d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x11e8d4: 0x2402f000  addiu       $v0, $zero, -0x1000
    ctx->pc = 0x11e8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x11e8d8: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x11e8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x11e8dc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x11e8dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x11e8e0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x11e8e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11e8e4: 0x4601a801  sub.s       $f0, $f21, $f1
    ctx->pc = 0x11e8e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[1]);
    // 0x11e8e8: 0x4602a882  mul.s       $f2, $f21, $f2
    ctx->pc = 0x11e8e8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
    // 0x11e8ec: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x11e8ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x11e8f0: 0x46060a02  mul.s       $f8, $f1, $f6
    ctx->pc = 0x11e8f0u;
    ctx->f[8] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x11e8f4: 0x460201c0  add.s       $f7, $f0, $f2
    ctx->pc = 0x11e8f4u;
    ctx->f[7] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x11e8f8: 0x46083900  add.s       $f4, $f7, $f8
    ctx->pc = 0x11e8f8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[7], ctx->f[8]);
    // 0x11e8fc: 0x44072000  mfc1        $a3, $f4
    ctx->pc = 0x11e8fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x11e900: 0x44052000  mfc1        $a1, $f4
    ctx->pc = 0x11e900u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x11e904: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x11e904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e908: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x11e908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x11e90c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11e90cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11e910: 0x1880001b  blez        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x11E910u;
    {
        const bool branch_taken_0x11e910 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x11E914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E910u;
        // 0x11e914: 0x823024  and         $a2, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e910) {
            ctx->pc = 0x11E980u;
            goto label_11e980;
        }
    }
    ctx->pc = 0x11E918u;
    // 0x11e918: 0x3c044301  lui         $a0, 0x4301
    ctx->pc = 0x11e918u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17153 << 16));
    // 0x11e91c: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x11e91cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x11e920: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11E920u;
    {
        const bool branch_taken_0x11e920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e920) {
            ctx->pc = 0x11E940u;
            goto label_11e940;
        }
    }
    ctx->pc = 0x11E928u;
    // 0x11e928: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x11e928u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
    // 0x11e92c: 0x3421f2c9  ori         $at, $at, 0xF2C9
    ctx->pc = 0x11e92cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62153);
    // 0x11e930: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11e930u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11e934: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x11E934u;
    {
        const bool branch_taken_0x11e934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E934u;
        // 0x11e938: 0x4601a002  mul.s       $f0, $f20, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e934) {
            ctx->pc = 0x11E9B8u;
            goto label_11e9b8;
        }
    }
    ctx->pc = 0x11E93Cu;
    // 0x11e93c: 0x0  nop
    ctx->pc = 0x11e93cu;
    // NOP
label_11e940:
    // 0x11e940: 0x14c4001f  bne         $a2, $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x11E940u;
    {
        const bool branch_taken_0x11e940 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        ctx->pc = 0x11E944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E940u;
        // 0x11e944: 0x3c023f00  lui         $v0, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e940) {
            ctx->pc = 0x11E9C0u;
            goto label_11e9c0;
        }
    }
    ctx->pc = 0x11E948u;
    // 0x11e948: 0x3c013338  lui         $at, 0x3338
    ctx->pc = 0x11e948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13112 << 16));
    // 0x11e94c: 0x3421aa3b  ori         $at, $at, 0xAA3B
    ctx->pc = 0x11e94cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43579);
    // 0x11e950: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11e950u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11e954: 0x46082041  sub.s       $f1, $f4, $f8
    ctx->pc = 0x11e954u;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[8]);
    // 0x11e958: 0x46003800  add.s       $f0, $f7, $f0
    ctx->pc = 0x11e958u;
    ctx->f[0] = FPU_ADD_S(ctx->f[7], ctx->f[0]);
    // 0x11e95c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x11e95cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11e960: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x11E960u;
    {
        const bool branch_taken_0x11e960 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11E964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E960u;
        // 0x11e964: 0x61dc3  sra         $v1, $a2, 23 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e960) {
            ctx->pc = 0x11E9C4u;
            goto label_11e9c4;
        }
    }
    ctx->pc = 0x11E968u;
    // 0x11e968: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x11e968u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
    // 0x11e96c: 0x3421f2c9  ori         $at, $at, 0xF2C9
    ctx->pc = 0x11e96cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62153);
    // 0x11e970: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11e970u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11e974: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x11E974u;
    {
        const bool branch_taken_0x11e974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E974u;
        // 0x11e978: 0x4601a002  mul.s       $f0, $f20, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e974) {
            ctx->pc = 0x11E9B8u;
            goto label_11e9b8;
        }
    }
    ctx->pc = 0x11E97Cu;
    // 0x11e97c: 0x0  nop
    ctx->pc = 0x11e97cu;
    // NOP
label_11e980:
    // 0x11e980: 0x3c0442fc  lui         $a0, 0x42FC
    ctx->pc = 0x11e980u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17148 << 16));
    // 0x11e984: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x11e984u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x11e988: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11E988u;
    {
        const bool branch_taken_0x11e988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11e988) {
            ctx->pc = 0x11E9A8u;
            goto label_11e9a8;
        }
    }
    ctx->pc = 0x11E990u;
    // 0x11e990: 0x14c4000b  bne         $a2, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x11E990u;
    {
        const bool branch_taken_0x11e990 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        ctx->pc = 0x11E994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E990u;
        // 0x11e994: 0x3c023f00  lui         $v0, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e990) {
            ctx->pc = 0x11E9C0u;
            goto label_11e9c0;
        }
    }
    ctx->pc = 0x11E998u;
    // 0x11e998: 0x46082001  sub.s       $f0, $f4, $f8
    ctx->pc = 0x11e998u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[8]);
    // 0x11e99c: 0x46003836  c.le.s      $f7, $f0
    ctx->pc = 0x11e99cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[7], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11e9a0: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x11E9A0u;
    {
        const bool branch_taken_0x11e9a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11E9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E9A0u;
        // 0x11e9a4: 0x61dc3  sra         $v1, $a2, 23 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e9a0) {
            ctx->pc = 0x11E9C4u;
            goto label_11e9c4;
        }
    }
    ctx->pc = 0x11E9A8u;
label_11e9a8:
    // 0x11e9a8: 0x3c010da2  lui         $at, 0xDA2
    ctx->pc = 0x11e9a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3490 << 16));
    // 0x11e9ac: 0x3421425f  ori         $at, $at, 0x425F
    ctx->pc = 0x11e9acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16991);
    // 0x11e9b0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11e9b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11e9b4: 0x4601a002  mul.s       $f0, $f20, $f1
    ctx->pc = 0x11e9b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
label_11e9b8:
    // 0x11e9b8: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x11E9B8u;
    {
        const bool branch_taken_0x11e9b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E9B8u;
        // 0x11e9bc: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e9b8) {
            ctx->pc = 0x11EB58u;
            goto label_11eb58;
        }
    }
    ctx->pc = 0x11E9C0u;
label_11e9c0:
    // 0x11e9c0: 0x61dc3  sra         $v1, $a2, 23
    ctx->pc = 0x11e9c0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 23));
label_11e9c4:
    // 0x11e9c4: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x11e9c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x11e9c8: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x11E9C8u;
    {
        const bool branch_taken_0x11e9c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E9C8u;
        // 0x11e9cc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e9c8) {
            ctx->pc = 0x11EA30u;
            goto label_11ea30;
        }
    }
    ctx->pc = 0x11E9D0u;
    // 0x11e9d0: 0x3c040080  lui         $a0, 0x80
    ctx->pc = 0x11e9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
    // 0x11e9d4: 0x2463ff82  addiu       $v1, $v1, -0x7E
    ctx->pc = 0x11e9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967170));
    // 0x11e9d8: 0x641807  srav        $v1, $a0, $v1
    ctx->pc = 0x11e9d8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
    // 0x11e9dc: 0xa34021  addu        $t0, $a1, $v1
    ctx->pc = 0x11e9dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x11e9e0: 0x815c2  srl         $v0, $t0, 23
    ctx->pc = 0x11e9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 23));
    // 0x11e9e4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x11e9e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11e9e8: 0x2447ff81  addiu       $a3, $v0, -0x7F
    ctx->pc = 0x11e9e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967169));
    // 0x11e9ec: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x11e9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x11e9f0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x11e9f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x11e9f4: 0xe31007  srav        $v0, $v1, $a3
    ctx->pc = 0x11e9f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 7) & 0x1F));
    // 0x11e9f8: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x11e9f8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x11e9fc: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x11e9fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x11ea00: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x11ea00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11ea04: 0x1031824  and         $v1, $t0, $v1
    ctx->pc = 0x11ea04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x11ea08: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x11ea08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x11ea0c: 0x460c4201  sub.s       $f8, $f8, $f12
    ctx->pc = 0x11ea0cu;
    ctx->f[8] = FPU_SUB_S(ctx->f[8], ctx->f[12]);
    // 0x11ea10: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x11ea10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x11ea14: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x11ea14u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x11ea18: 0x28a50000  slti        $a1, $a1, 0x0
    ctx->pc = 0x11ea18u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x11ea1c: 0x434007  srav        $t0, $v1, $v0
    ctx->pc = 0x11ea1cu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x11ea20: 0x82023  negu        $a0, $t0
    ctx->pc = 0x11ea20u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 8)));
    // 0x11ea24: 0x46083800  add.s       $f0, $f7, $f8
    ctx->pc = 0x11ea24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[7], ctx->f[8]);
    // 0x11ea28: 0x85400b  movn        $t0, $a0, $a1
    ctx->pc = 0x11ea28u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 4));
    // 0x11ea2c: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x11ea2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_11ea30:
    // 0x11ea30: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x11ea30u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ea34: 0x2402f000  addiu       $v0, $zero, -0x1000
    ctx->pc = 0x11ea34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x11ea38: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x11ea38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x11ea3c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x11ea3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11ea40: 0x3c013f31  lui         $at, 0x3F31
    ctx->pc = 0x11ea40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16177 << 16));
    // 0x11ea44: 0x34217200  ori         $at, $at, 0x7200
    ctx->pc = 0x11ea44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29184);
    // 0x11ea48: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x11ea48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x11ea4c: 0x3c013f31  lui         $at, 0x3F31
    ctx->pc = 0x11ea4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16177 << 16));
    // 0x11ea50: 0x34217217  ori         $at, $at, 0x7217
    ctx->pc = 0x11ea50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29207);
    // 0x11ea54: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x11ea54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x11ea58: 0x46086041  sub.s       $f1, $f12, $f8
    ctx->pc = 0x11ea58u;
    ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[8]);
    // 0x11ea5c: 0x3c013e2a  lui         $at, 0x3E2A
    ctx->pc = 0x11ea5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
    // 0x11ea60: 0x3421aaaa  ori         $at, $at, 0xAAAA
    ctx->pc = 0x11ea60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43690);
    // 0x11ea64: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x11ea64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x11ea68: 0x3c0135bf  lui         $at, 0x35BF
    ctx->pc = 0x11ea68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13759 << 16));
    // 0x11ea6c: 0x3421be8c  ori         $at, $at, 0xBE8C
    ctx->pc = 0x11ea6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48780);
    // 0x11ea70: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x11ea70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11ea74: 0x46036402  mul.s       $f16, $f12, $f3
    ctx->pc = 0x11ea74u;
    ctx->f[16] = FPU_MUL_S(ctx->f[12], ctx->f[3]);
    // 0x11ea78: 0x3c013331  lui         $at, 0x3331
    ctx->pc = 0x11ea78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13105 << 16));
    // 0x11ea7c: 0x3421bb4b  ori         $at, $at, 0xBB4B
    ctx->pc = 0x11ea7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47947);
    // 0x11ea80: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11ea80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11ea84: 0x46026082  mul.s       $f2, $f12, $f2
    ctx->pc = 0x11ea84u;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x11ea88: 0x3c01b5dd  lui         $at, 0xB5DD
    ctx->pc = 0x11ea88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)46557 << 16));
    // 0x11ea8c: 0x3421ea0e  ori         $at, $at, 0xEA0E
    ctx->pc = 0x11ea8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)59918);
    // 0x11ea90: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x11ea90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x11ea94: 0x46013841  sub.s       $f1, $f7, $f1
    ctx->pc = 0x11ea94u;
    ctx->f[1] = FPU_SUB_S(ctx->f[7], ctx->f[1]);
    // 0x11ea98: 0x3c01bb36  lui         $at, 0xBB36
    ctx->pc = 0x11ea98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47926 << 16));
    // 0x11ea9c: 0x34210b60  ori         $at, $at, 0xB60
    ctx->pc = 0x11ea9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2912);
    // 0x11eaa0: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x11eaa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x11eaa4: 0x3c01388a  lui         $at, 0x388A
    ctx->pc = 0x11eaa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14474 << 16));
    // 0x11eaa8: 0x3421b354  ori         $at, $at, 0xB354
    ctx->pc = 0x11eaa8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45908);
    // 0x11eaac: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x11eaacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x11eab0: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x11eab0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x11eab4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x11eab4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x11eab8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11eab8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11eabc: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x11eabcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x11eac0: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x11eac0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x11eac4: 0x46020b40  add.s       $f13, $f1, $f2
    ctx->pc = 0x11eac4u;
    ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x11eac8: 0x460d8100  add.s       $f4, $f16, $f13
    ctx->pc = 0x11eac8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[16], ctx->f[13]);
    // 0x11eacc: 0x46042302  mul.s       $f12, $f4, $f4
    ctx->pc = 0x11eaccu;
    ctx->f[12] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x11ead0: 0x46102041  sub.s       $f1, $f4, $f16
    ctx->pc = 0x11ead0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[16]);
    // 0x11ead4: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x11ead4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x11ead8: 0x46016841  sub.s       $f1, $f13, $f1
    ctx->pc = 0x11ead8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[13], ctx->f[1]);
    // 0x11eadc: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x11eadcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x11eae0: 0x46012082  mul.s       $f2, $f4, $f1
    ctx->pc = 0x11eae0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x11eae4: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x11eae4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x11eae8: 0x46020880  add.s       $f2, $f1, $f2
    ctx->pc = 0x11eae8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x11eaec: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x11eaecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x11eaf0: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x11eaf0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x11eaf4: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x11eaf4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x11eaf8: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x11eaf8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x11eafc: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x11eafcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x11eb00: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x11eb00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x11eb04: 0x46002181  sub.s       $f6, $f4, $f0
    ctx->pc = 0x11eb04u;
    ctx->f[6] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x11eb08: 0x46062002  mul.s       $f0, $f4, $f6
    ctx->pc = 0x11eb08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x11eb0c: 0x460330c1  sub.s       $f3, $f6, $f3
    ctx->pc = 0x11eb0cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[6], ctx->f[3]);
    // 0x11eb10: 0x0  nop
    ctx->pc = 0x11eb10u;
    // NOP
    // 0x11eb14: 0x0  nop
    ctx->pc = 0x11eb14u;
    // NOP
    // 0x11eb18: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x11eb18u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
    // 0x11eb1c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x11eb1cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x11eb20: 0x46040041  sub.s       $f1, $f0, $f4
    ctx->pc = 0x11eb20u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x11eb24: 0x46014901  sub.s       $f4, $f9, $f1
    ctx->pc = 0x11eb24u;
    ctx->f[4] = FPU_SUB_S(ctx->f[9], ctx->f[1]);
    // 0x11eb28: 0x44042000  mfc1        $a0, $f4
    ctx->pc = 0x11eb28u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x11eb2c: 0x815c0  sll         $v0, $t0, 23
    ctx->pc = 0x11eb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 23));
    // 0x11eb30: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x11eb30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11eb34: 0x41dc3  sra         $v1, $a0, 23
    ctx->pc = 0x11eb34u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 23));
    // 0x11eb38: 0x1c600005  bgtz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x11EB38u;
    {
        const bool branch_taken_0x11eb38 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x11EB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EB38u;
        // 0x11eb3c: 0x46002306  mov.s       $f12, $f4 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eb38) {
            ctx->pc = 0x11EB50u;
            goto label_11eb50;
        }
    }
    ctx->pc = 0x11EB40u;
    // 0x11eb40: 0xc047f88  jal         func_11FE20
    ctx->pc = 0x11EB40u;
    SET_GPR_U32(ctx, 31, 0x11EB48u);
    ctx->pc = 0x11EB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EB40u;
    // 0x11eb44: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE20u, 0x11EB40u, 0x11EB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EB48u;
label_11eb48:
    // 0x11eb48: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11EB48u;
    {
        const bool branch_taken_0x11eb48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EB48u;
        // 0x11eb4c: 0x46000106  mov.s       $f4, $f0 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eb48) {
            ctx->pc = 0x11EB54u;
            goto label_11eb54;
        }
    }
    ctx->pc = 0x11EB50u;
label_11eb50:
    // 0x11eb50: 0x44842000  mtc1        $a0, $f4
    ctx->pc = 0x11eb50u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_11eb54:
    // 0x11eb54: 0x4604a002  mul.s       $f0, $f20, $f4
    ctx->pc = 0x11eb54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[4]);
label_11eb58:
    // 0x11eb58: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x11eb58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_11eb5c:
    // 0x11eb5c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x11eb5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x11eb60: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x11eb60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11eb64: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x11eb64u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x11eb68: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x11eb68u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11eb6c: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x11eb6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x11eb70: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x11eb70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x11eb74: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x11eb74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11eb78: 0x3e00008  jr          $ra
    ctx->pc = 0x11EB78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11EB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EB78u;
        // 0x11eb7c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11EB78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11EB80u;
}
