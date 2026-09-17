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

// Function: sub_002348D0
// Address: 0x2348d0 - 0x235400
void sub_002348D0_0x2348d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002348D0_0x2348d0");
#endif

    switch (ctx->pc) {
        case 0x234908u: goto label_234908;
        case 0x23492cu: goto label_23492c;
        case 0x2349ecu: goto label_2349ec;
        case 0x234a38u: goto label_234a38;
        case 0x234a88u: goto label_234a88;
        case 0x234aa8u: goto label_234aa8;
        case 0x234ab4u: goto label_234ab4;
        case 0x234adcu: goto label_234adc;
        case 0x234b04u: goto label_234b04;
        case 0x234b38u: goto label_234b38;
        case 0x234b44u: goto label_234b44;
        case 0x234b4cu: goto label_234b4c;
        case 0x234b74u: goto label_234b74;
        case 0x234bd0u: goto label_234bd0;
        case 0x234ca8u: goto label_234ca8;
        case 0x234cd4u: goto label_234cd4;
        case 0x234d24u: goto label_234d24;
        case 0x234d60u: goto label_234d60;
        case 0x234e04u: goto label_234e04;
        case 0x234e1cu: goto label_234e1c;
        case 0x234e2cu: goto label_234e2c;
        case 0x234e60u: goto label_234e60;
        case 0x234e70u: goto label_234e70;
        case 0x234f24u: goto label_234f24;
        case 0x234f58u: goto label_234f58;
        case 0x234fb4u: goto label_234fb4;
        case 0x234ff0u: goto label_234ff0;
        case 0x235000u: goto label_235000;
        case 0x235024u: goto label_235024;
        case 0x235074u: goto label_235074;
        case 0x2350a8u: goto label_2350a8;
        case 0x2350e4u: goto label_2350e4;
        case 0x2350f4u: goto label_2350f4;
        case 0x235110u: goto label_235110;
        case 0x235120u: goto label_235120;
        case 0x23515cu: goto label_23515c;
        case 0x235194u: goto label_235194;
        case 0x2351d0u: goto label_2351d0;
        case 0x2351e0u: goto label_2351e0;
        default: break;
    }

    ctx->pc = 0x2348d0u;

    // 0x2348d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2348d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2348d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2348d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2348d8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2348d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2348dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2348dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2348e0: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2348e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2348e4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2348e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2348e8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2348e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2348ec: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2348ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2348f0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2348f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2348f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2348f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2348f8: 0xe7b60038  swc1        $f22, 0x38($sp)
    ctx->pc = 0x2348f8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2348fc: 0xe7b50030  swc1        $f21, 0x30($sp)
    ctx->pc = 0x2348fcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x234900: 0xc08cbf6  jal         func_232FD8
    ctx->pc = 0x234900u;
    SET_GPR_U32(ctx, 31, 0x234908u);
    ctx->pc = 0x234904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234900u;
    // 0x234904: 0xe7b40028  swc1        $f20, 0x28($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x232FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232FD8u, 0x234900u, 0x234908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234908u;
label_234908:
    // 0x234908: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x234908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x23490c: 0xae510004  sw          $s1, 0x4($s2)
    ctx->pc = 0x23490cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 17));
    // 0x234910: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x234910u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x234914: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x234914u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234918: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x234918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23491c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x23491cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234920: 0x96620166  lhu         $v0, 0x166($s3)
    ctx->pc = 0x234920u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 358)));
    // 0x234924: 0xc08cb7a  jal         func_232DE8
    ctx->pc = 0x234924u;
    SET_GPR_U32(ctx, 31, 0x23492Cu);
    ctx->pc = 0x234928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234924u;
    // 0x234928: 0xae420030  sw          $v0, 0x30($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232DE8u, 0x234924u, 0x23492Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23492Cu;
label_23492c:
    // 0x23492c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x23492cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x234930: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x234930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x234934: 0x1462007e  bne         $v1, $v0, . + 4 + (0x7E << 2)
    ctx->pc = 0x234934u;
    {
        const bool branch_taken_0x234934 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x234938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234934u;
        // 0x234938: 0x26440090  addiu       $a0, $s2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234934) {
            ctx->pc = 0x234B30u;
            goto label_234b30;
        }
    }
    ctx->pc = 0x23493Cu;
    // 0x23493c: 0x8662000e  lh          $v0, 0xE($s3)
    ctx->pc = 0x23493cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 14)));
    // 0x234940: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x234940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x234944: 0xc7818608  lwc1        $f1, -0x79F8($gp)
    ctx->pc = 0x234944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936072)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x234948: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x234948u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23494c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x23494cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x234950: 0x8e440030  lw          $a0, 0x30($s2)
    ctx->pc = 0x234950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x234954: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x234954u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x234958: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x234958u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x23495c: 0x10830014  beq         $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x23495Cu;
    {
        const bool branch_taken_0x23495c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x234960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23495Cu;
        // 0x234960: 0x46000047  neg.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23495c) {
            ctx->pc = 0x2349B0u;
            goto label_2349b0;
        }
    }
    ctx->pc = 0x234964u;
    // 0x234964: 0x2882000c  slti        $v0, $a0, 0xC
    ctx->pc = 0x234964u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x234968: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x234968u;
    {
        const bool branch_taken_0x234968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23496Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234968u;
        // 0x23496c: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234968) {
            ctx->pc = 0x234988u;
            goto label_234988;
        }
    }
    ctx->pc = 0x234970u;
    // 0x234970: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x234970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x234974: 0x1082000a  beq         $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x234974u;
    {
        const bool branch_taken_0x234974 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x234974) {
            ctx->pc = 0x2349A0u;
            goto label_2349a0;
        }
    }
    ctx->pc = 0x23497Cu;
    // 0x23497c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x23497Cu;
    {
        const bool branch_taken_0x23497c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23497Cu;
        // 0x234980: 0x926201bf  lbu         $v0, 0x1BF($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 447)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23497c) {
            ctx->pc = 0x2349DCu;
            goto label_2349dc;
        }
    }
    ctx->pc = 0x234984u;
    // 0x234984: 0x0  nop
    ctx->pc = 0x234984u;
    // NOP
label_234988:
    // 0x234988: 0x1082000d  beq         $a0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x234988u;
    {
        const bool branch_taken_0x234988 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x23498Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234988u;
        // 0x23498c: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234988) {
            ctx->pc = 0x2349C0u;
            goto label_2349c0;
        }
    }
    ctx->pc = 0x234990u;
    // 0x234990: 0x1082000f  beq         $a0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x234990u;
    {
        const bool branch_taken_0x234990 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x234990) {
            ctx->pc = 0x2349D0u;
            goto label_2349d0;
        }
    }
    ctx->pc = 0x234998u;
    // 0x234998: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x234998u;
    {
        const bool branch_taken_0x234998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23499Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234998u;
        // 0x23499c: 0x926201bf  lbu         $v0, 0x1BF($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 447)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234998) {
            ctx->pc = 0x2349DCu;
            goto label_2349dc;
        }
    }
    ctx->pc = 0x2349A0u;
label_2349a0:
    // 0x2349a0: 0xc780860c  lwc1        $f0, -0x79F4($gp)
    ctx->pc = 0x2349a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936076)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2349a4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2349A4u;
    {
        const bool branch_taken_0x2349a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2349A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2349A4u;
        // 0x2349a8: 0x46000d00  add.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2349a4) {
            ctx->pc = 0x2349D8u;
            goto label_2349d8;
        }
    }
    ctx->pc = 0x2349ACu;
    // 0x2349ac: 0x0  nop
    ctx->pc = 0x2349acu;
    // NOP
label_2349b0:
    // 0x2349b0: 0xc7808610  lwc1        $f0, -0x79F0($gp)
    ctx->pc = 0x2349b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2349b4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2349B4u;
    {
        const bool branch_taken_0x2349b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2349B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2349B4u;
        // 0x2349b8: 0x46000d00  add.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2349b4) {
            ctx->pc = 0x2349D8u;
            goto label_2349d8;
        }
    }
    ctx->pc = 0x2349BCu;
    // 0x2349bc: 0x0  nop
    ctx->pc = 0x2349bcu;
    // NOP
label_2349c0:
    // 0x2349c0: 0xc7808614  lwc1        $f0, -0x79EC($gp)
    ctx->pc = 0x2349c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936084)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2349c4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2349C4u;
    {
        const bool branch_taken_0x2349c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2349C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2349C4u;
        // 0x2349c8: 0x46000d00  add.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2349c4) {
            ctx->pc = 0x2349D8u;
            goto label_2349d8;
        }
    }
    ctx->pc = 0x2349CCu;
    // 0x2349cc: 0x0  nop
    ctx->pc = 0x2349ccu;
    // NOP
label_2349d0:
    // 0x2349d0: 0xc7808618  lwc1        $f0, -0x79E8($gp)
    ctx->pc = 0x2349d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2349d4: 0x46000d00  add.s       $f20, $f1, $f0
    ctx->pc = 0x2349d4u;
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2349d8:
    // 0x2349d8: 0x926201bf  lbu         $v0, 0x1BF($s3)
    ctx->pc = 0x2349d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 447)));
label_2349dc:
    // 0x2349dc: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2349DCu;
    {
        const bool branch_taken_0x2349dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2349dc) {
            ctx->pc = 0x234A30u;
            goto label_234a30;
        }
    }
    ctx->pc = 0x2349E4u;
    // 0x2349e4: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x2349E4u;
    SET_GPR_U32(ctx, 31, 0x2349ECu);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x2349E4u, 0x2349ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2349ECu;
label_2349ec:
    // 0x2349ec: 0x3c013000  lui         $at, 0x3000
    ctx->pc = 0x2349ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12288 << 16));
    // 0x2349f0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2349f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2349f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2349f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2349f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2349f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2349fc: 0xc782861c  lwc1        $f2, -0x79E4($gp)
    ctx->pc = 0x2349fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x234a00: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x234a00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
    // 0x234a04: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x234a04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x234a08: 0xc7848620  lwc1        $f4, -0x79E0($gp)
    ctx->pc = 0x234a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x234a0c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x234a0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x234a10: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x234a10u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x234a14: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x234a14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x234a18: 0x0  nop
    ctx->pc = 0x234a18u;
    // NOP
    // 0x234a1c: 0x0  nop
    ctx->pc = 0x234a1cu;
    // NOP
    // 0x234a20: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x234a20u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
    // 0x234a24: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x234A24u;
    {
        const bool branch_taken_0x234a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234A24u;
        // 0x234a28: 0x46040001  sub.s       $f0, $f0, $f4 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x234a24) {
            ctx->pc = 0x234A70u;
            goto label_234a70;
        }
    }
    ctx->pc = 0x234A2Cu;
    // 0x234a2c: 0x0  nop
    ctx->pc = 0x234a2cu;
    // NOP
label_234a30:
    // 0x234a30: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x234A30u;
    SET_GPR_U32(ctx, 31, 0x234A38u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x234A30u, 0x234A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234A38u;
label_234a38:
    // 0x234a38: 0x3c013000  lui         $at, 0x3000
    ctx->pc = 0x234a38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12288 << 16));
    // 0x234a3c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x234a3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x234a40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x234a40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x234a44: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x234a44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x234a48: 0xc7818624  lwc1        $f1, -0x79DC($gp)
    ctx->pc = 0x234a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x234a4c: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x234a4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
    // 0x234a50: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x234a50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x234a54: 0xc7838628  lwc1        $f3, -0x79D8($gp)
    ctx->pc = 0x234a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x234a58: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x234a58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x234a5c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x234a5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x234a60: 0x0  nop
    ctx->pc = 0x234a60u;
    // NOP
    // 0x234a64: 0x0  nop
    ctx->pc = 0x234a64u;
    // NOP
    // 0x234a68: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x234a68u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x234a6c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x234a6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_234a70:
    // 0x234a70: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x234a70u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x234a74: 0x265000a0  addiu       $s0, $s2, 0xA0
    ctx->pc = 0x234a74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
    // 0x234a78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x234a78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234a7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x234a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234a80: 0xc08c208  jal         func_230820
    ctx->pc = 0x234A80u;
    SET_GPR_U32(ctx, 31, 0x234A88u);
    ctx->pc = 0x234A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234A80u;
    // 0x234a84: 0x26510090  addiu       $s1, $s2, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x234A80u, 0x234A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234A88u;
label_234a88:
    // 0x234a88: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x234a88u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x234a8c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x234a8cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x234a90: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x234a90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x234a94: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x234a94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x234a98: 0x3c013000  lui         $at, 0x3000
    ctx->pc = 0x234a98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12288 << 16));
    // 0x234a9c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x234a9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x234aa0: 0xc0474d0  jal         func_11D340
    ctx->pc = 0x234AA0u;
    SET_GPR_U32(ctx, 31, 0x234AA8u);
    ctx->pc = 0x234AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234AA0u;
    // 0x234aa4: 0x7e220000  sq          $v0, 0x0($s1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D340u, 0x234AA0u, 0x234AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234AA8u;
label_234aa8:
    // 0x234aa8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x234aa8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x234aac: 0xc04746c  jal         func_11D1B0
    ctx->pc = 0x234AACu;
    SET_GPR_U32(ctx, 31, 0x234AB4u);
    ctx->pc = 0x234AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234AACu;
    // 0x234ab0: 0x46150502  mul.s       $f20, $f0, $f21 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D1B0u, 0x234AACu, 0x234AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234AB4u;
label_234ab4:
    // 0x234ab4: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x234ab4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x234ab8: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x234ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x234abc: 0x46140081  sub.s       $f2, $f0, $f20
    ctx->pc = 0x234abcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x234ac0: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x234ac0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x234ac4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x234ac4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x234ac8: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x234ac8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x234acc: 0xc6400098  lwc1        $f0, 0x98($s2)
    ctx->pc = 0x234accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x234ad0: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x234ad0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x234ad4: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x234AD4u;
    SET_GPR_U32(ctx, 31, 0x234ADCu);
    ctx->pc = 0x234AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234AD4u;
    // 0x234ad8: 0xe6400098  swc1        $f0, 0x98($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 152), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x234AD4u, 0x234ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234ADCu;
label_234adc:
    // 0x234adc: 0x3c0143fa  lui         $at, 0x43FA
    ctx->pc = 0x234adcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17402 << 16));
    // 0x234ae0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x234ae0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x234ae4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x234ae4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x234ae8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x234ae8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x234aec: 0xc6410094  lwc1        $f1, 0x94($s2)
    ctx->pc = 0x234aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x234af0: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x234af0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x234af4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x234af4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x234af8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x234af8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x234afc: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x234AFCu;
    SET_GPR_U32(ctx, 31, 0x234B04u);
    ctx->pc = 0x234B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234AFCu;
    // 0x234b00: 0xe6410094  swc1        $f1, 0x94($s2) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 148), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x234AFCu, 0x234B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234B04u;
label_234b04:
    // 0x234b04: 0x3c01c040  lui         $at, 0xC040
    ctx->pc = 0x234b04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49216 << 16));
    // 0x234b08: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x234b08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x234b0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x234b0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x234b10: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x234b10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x234b14: 0x3c014230  lui         $at, 0x4230
    ctx->pc = 0x234b14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16944 << 16));
    // 0x234b18: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x234b18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x234b1c: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x234b1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x234b20: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x234b20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x234b24: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x234B24u;
    {
        const bool branch_taken_0x234b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234B24u;
        // 0x234b28: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x234b24) {
            ctx->pc = 0x234B4Cu;
            goto label_234b4c;
        }
    }
    ctx->pc = 0x234B2Cu;
    // 0x234b2c: 0x0  nop
    ctx->pc = 0x234b2cu;
    // NOP
label_234b30:
    // 0x234b30: 0xc08c1e6  jal         func_230798
    ctx->pc = 0x234B30u;
    SET_GPR_U32(ctx, 31, 0x234B38u);
    ctx->pc = 0x234B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234B30u;
    // 0x234b34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230798u, 0x234B30u, 0x234B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234B38u;
label_234b38:
    // 0x234b38: 0x264400a0  addiu       $a0, $s2, 0xA0
    ctx->pc = 0x234b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
    // 0x234b3c: 0xc08c208  jal         func_230820
    ctx->pc = 0x234B3Cu;
    SET_GPR_U32(ctx, 31, 0x234B44u);
    ctx->pc = 0x234B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234B3Cu;
    // 0x234b40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x234B3Cu, 0x234B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234B44u;
label_234b44:
    // 0x234b44: 0xc08c222  jal         func_230888
    ctx->pc = 0x234B44u;
    SET_GPR_U32(ctx, 31, 0x234B4Cu);
    ctx->pc = 0x234B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234B44u;
    // 0x234b48: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230888u, 0x234B44u, 0x234B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234B4Cu;
label_234b4c:
    // 0x234b4c: 0xe64000b0  swc1        $f0, 0xB0($s2)
    ctx->pc = 0x234b4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 176), bits); }
    // 0x234b50: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x234b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x234b54: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x234B54u;
    {
        const bool branch_taken_0x234b54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x234B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234B54u;
        // 0x234b58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234b54) {
            ctx->pc = 0x234B64u;
            goto label_234b64;
        }
    }
    ctx->pc = 0x234B5Cu;
    // 0x234b5c: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x234b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
    // 0x234b60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x234b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_234b64:
    // 0x234b64: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x234B64u;
    {
        const bool branch_taken_0x234b64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x234B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234B64u;
        // 0x234b68: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234b64) {
            ctx->pc = 0x234BA8u;
            goto label_234ba8;
        }
    }
    ctx->pc = 0x234B6Cu;
    // 0x234b6c: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x234B6Cu;
    SET_GPR_U32(ctx, 31, 0x234B74u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x234B6Cu, 0x234B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234B74u;
label_234b74:
    // 0x234b74: 0x3c013000  lui         $at, 0x3000
    ctx->pc = 0x234b74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12288 << 16));
    // 0x234b78: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x234b78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x234b7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x234b7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x234b80: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x234b80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x234b84: 0x3c01c040  lui         $at, 0xC040
    ctx->pc = 0x234b84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49216 << 16));
    // 0x234b88: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x234b88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x234b8c: 0x3c014230  lui         $at, 0x4230
    ctx->pc = 0x234b8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16944 << 16));
    // 0x234b90: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x234b90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x234b94: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x234b94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x234b98: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x234b98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x234b9c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x234b9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x234ba0: 0xe64000b0  swc1        $f0, 0xB0($s2)
    ctx->pc = 0x234ba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 176), bits); }
    // 0x234ba4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x234ba4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_234ba8:
    // 0x234ba8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x234ba8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x234bac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x234bacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x234bb0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x234bb0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x234bb4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x234bb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x234bb8: 0xc7b60038  lwc1        $f22, 0x38($sp)
    ctx->pc = 0x234bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x234bbc: 0xc7b50030  lwc1        $f21, 0x30($sp)
    ctx->pc = 0x234bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x234bc0: 0xc7b40028  lwc1        $f20, 0x28($sp)
    ctx->pc = 0x234bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x234bc4: 0x3e00008  jr          $ra
    ctx->pc = 0x234BC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234BC4u;
        // 0x234bc8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234BC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x234BCCu;
    // 0x234bcc: 0x0  nop
    ctx->pc = 0x234bccu;
    // NOP
label_234bd0:
    // 0x234bd0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x234bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x234bd4: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x234bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x234bd8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x234bd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234bdc: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x234bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x234be0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x234be0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234be4: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x234be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x234be8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x234be8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234bec: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x234becu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x234bf0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x234bf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234bf4: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x234bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x234bf8: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x234bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x234bfc: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x234bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x234c00: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x234c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x234c04: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x234c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x234c08: 0xffb70078  sd          $s7, 0x78($sp)
    ctx->pc = 0x234c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 23));
    // 0x234c0c: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x234c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x234c10: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x234c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x234c14: 0x8e110004  lw          $s1, 0x4($s0)
    ctx->pc = 0x234c14u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x234c18: 0xc60c0008  lwc1        $f12, 0x8($s0)
    ctx->pc = 0x234c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x234c1c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x234c1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x234c20: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x234c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x234c24: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x234c24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x234c28: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x234c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x234c2c: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x234c2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
    // 0x234c30: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x234c30u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x234c34: 0xc4208410  lwc1        $f0, -0x7BF0($at)
    ctx->pc = 0x234c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294935568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x234c38: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x234c38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x234c3c: 0x262280b  movn        $a1, $s3, $v0
    ctx->pc = 0x234c3cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 19));
    // 0x234c40: 0x3182a  slt         $v1, $zero, $v1
    ctx->pc = 0x234c40u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x234c44: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x234c44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x234c48: 0x283280b  movn        $a1, $s4, $v1
    ctx->pc = 0x234c48u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 20));
    // 0x234c4c: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x234c4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
    // 0x234c50: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x234c50u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x234c54: 0xc4348430  lwc1        $f20, -0x7BD0($at)
    ctx->pc = 0x234c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294935600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x234c58: 0x45000025  bc1f        . + 4 + (0x25 << 2)
    ctx->pc = 0x234C58u;
    {
        const bool branch_taken_0x234c58 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x234C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234C58u;
        // 0x234c5c: 0xafa50030  sw          $a1, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234c58) {
            ctx->pc = 0x234CF0u;
            goto label_234cf0;
        }
    }
    ctx->pc = 0x234C60u;
    // 0x234c60: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x234c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x234c64: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x234C64u;
    {
        const bool branch_taken_0x234c64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x234c64) {
            ctx->pc = 0x234CF0u;
            goto label_234cf0;
        }
    }
    ctx->pc = 0x234C6Cu;
    // 0x234c6c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x234c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x234c70: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x234C70u;
    {
        const bool branch_taken_0x234c70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x234c70) {
            ctx->pc = 0x234C88u;
            goto label_234c88;
        }
    }
    ctx->pc = 0x234C78u;
    // 0x234c78: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x234c78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x234c7c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x234c7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x234c80: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x234C80u;
    {
        const bool branch_taken_0x234c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x234c80) {
            ctx->pc = 0x234CACu;
            goto label_234cac;
        }
    }
    ctx->pc = 0x234C88u;
label_234c88:
    // 0x234c88: 0x0  nop
    ctx->pc = 0x234c88u;
    // NOP
    // 0x234c8c: 0x0  nop
    ctx->pc = 0x234c8cu;
    // NOP
    // 0x234c90: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x234c90u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[0];
    // 0x234c94: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x234c94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x234c98: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x234c98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x234c9c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x234c9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x234ca0: 0xc08cb1a  jal         func_232C68
    ctx->pc = 0x234CA0u;
    SET_GPR_U32(ctx, 31, 0x234CA8u);
    ctx->pc = 0x232C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232C68u, 0x234CA0u, 0x234CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234CA8u;
label_234ca8:
    // 0x234ca8: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x234ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_234cac:
    // 0x234cac: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x234cacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x234cb0: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x234cb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x234cb4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x234cb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x234cb8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x234cb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x234cbc: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x234cbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x234cc0: 0x0  nop
    ctx->pc = 0x234cc0u;
    // NOP
    // 0x234cc4: 0x0  nop
    ctx->pc = 0x234cc4u;
    // NOP
    // 0x234cc8: 0x46146303  div.s       $f12, $f12, $f20
    ctx->pc = 0x234cc8u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[20];
    // 0x234ccc: 0xc08cb1a  jal         func_232C68
    ctx->pc = 0x234CCCu;
    SET_GPR_U32(ctx, 31, 0x234CD4u);
    ctx->pc = 0x234CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234CCCu;
    // 0x234cd0: 0xe6000088  swc1        $f0, 0x88($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 136), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x232C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232C68u, 0x234CCCu, 0x234CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234CD4u;
label_234cd4:
    // 0x234cd4: 0xc6010088  lwc1        $f1, 0x88($s0)
    ctx->pc = 0x234cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x234cd8: 0x2e220002  sltiu       $v0, $s1, 0x2
    ctx->pc = 0x234cd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x234cdc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x234cdcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x234ce0: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x234CE0u;
    {
        const bool branch_taken_0x234ce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x234CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234CE0u;
        // 0x234ce4: 0xe6010088  swc1        $f1, 0x88($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 136), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x234ce0) {
            ctx->pc = 0x234DC0u;
            goto label_234dc0;
        }
    }
    ctx->pc = 0x234CE8u;
    // 0x234ce8: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x234CE8u;
    {
        const bool branch_taken_0x234ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234CE8u;
        // 0x234cec: 0x8e02001c  lw          $v0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234ce8) {
            ctx->pc = 0x234D88u;
            goto label_234d88;
        }
    }
    ctx->pc = 0x234CF0u;
label_234cf0:
    // 0x234cf0: 0x4502000f  bc1fl       . + 4 + (0xF << 2)
    ctx->pc = 0x234CF0u;
    {
        const bool branch_taken_0x234cf0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x234cf0) {
            ctx->pc = 0x234CF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234CF0u;
            // 0x234cf4: 0x8e02001c  lw          $v0, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234D30u;
            goto label_234d30;
        }
    }
    ctx->pc = 0x234CF8u;
    // 0x234cf8: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x234cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x234cfc: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x234CFCu;
    {
        const bool branch_taken_0x234cfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x234cfc) {
            ctx->pc = 0x234DE8u;
            goto label_234de8;
        }
    }
    ctx->pc = 0x234D04u;
    // 0x234d04: 0x0  nop
    ctx->pc = 0x234d04u;
    // NOP
    // 0x234d08: 0x0  nop
    ctx->pc = 0x234d08u;
    // NOP
    // 0x234d0c: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x234d0cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[0];
    // 0x234d10: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x234d10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x234d14: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x234d14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x234d18: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x234d18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x234d1c: 0xc08cb1a  jal         func_232C68
    ctx->pc = 0x234D1Cu;
    SET_GPR_U32(ctx, 31, 0x234D24u);
    ctx->pc = 0x232C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232C68u, 0x234D1Cu, 0x234D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234D24u;
label_234d24:
    // 0x234d24: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x234D24u;
    {
        const bool branch_taken_0x234d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234D24u;
        // 0x234d28: 0xe6000088  swc1        $f0, 0x88($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 136), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x234d24) {
            ctx->pc = 0x234DF4u;
            goto label_234df4;
        }
    }
    ctx->pc = 0x234D2Cu;
    // 0x234d2c: 0x0  nop
    ctx->pc = 0x234d2cu;
    // NOP
label_234d30:
    // 0x234d30: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x234D30u;
    {
        const bool branch_taken_0x234d30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x234d30) {
            ctx->pc = 0x234DE8u;
            goto label_234de8;
        }
    }
    ctx->pc = 0x234D38u;
    // 0x234d38: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x234d38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x234d3c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x234d3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x234d40: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x234d40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x234d44: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x234d44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x234d48: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x234d48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x234d4c: 0x0  nop
    ctx->pc = 0x234d4cu;
    // NOP
    // 0x234d50: 0x0  nop
    ctx->pc = 0x234d50u;
    // NOP
    // 0x234d54: 0x46146303  div.s       $f12, $f12, $f20
    ctx->pc = 0x234d54u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[20];
    // 0x234d58: 0xc08cb1a  jal         func_232C68
    ctx->pc = 0x234D58u;
    SET_GPR_U32(ctx, 31, 0x234D60u);
    ctx->pc = 0x232C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232C68u, 0x234D58u, 0x234D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234D60u;
label_234d60:
    // 0x234d60: 0x6200024  bltz        $s1, . + 4 + (0x24 << 2)
    ctx->pc = 0x234D60u;
    {
        const bool branch_taken_0x234d60 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x234D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234D60u;
        // 0x234d64: 0xe6000088  swc1        $f0, 0x88($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 136), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x234d60) {
            ctx->pc = 0x234DF4u;
            goto label_234df4;
        }
    }
    ctx->pc = 0x234D68u;
    // 0x234d68: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x234d68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x234d6c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x234D6Cu;
    {
        const bool branch_taken_0x234d6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x234d6c) {
            ctx->pc = 0x234D70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234D6Cu;
            // 0x234d70: 0x8e02001c  lw          $v0, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234D88u;
            goto label_234d88;
        }
    }
    ctx->pc = 0x234D74u;
    // 0x234d74: 0x2a220007  slti        $v0, $s1, 0x7
    ctx->pc = 0x234d74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x234d78: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x234D78u;
    {
        const bool branch_taken_0x234d78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x234D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234D78u;
        // 0x234d7c: 0x26120070  addiu       $s2, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234d78) {
            ctx->pc = 0x234DF8u;
            goto label_234df8;
        }
    }
    ctx->pc = 0x234D80u;
    // 0x234d80: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x234D80u;
    {
        const bool branch_taken_0x234d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234D80u;
        // 0x234d84: 0x8e02001c  lw          $v0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234d80) {
            ctx->pc = 0x234DC4u;
            goto label_234dc4;
        }
    }
    ctx->pc = 0x234D88u;
label_234d88:
    // 0x234d88: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x234d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x234d8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x234d8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x234d90: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x234d90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x234d94: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x234d94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x234d98: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x234D98u;
    {
        const bool branch_taken_0x234d98 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x234D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234D98u;
        // 0x234d9c: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234d98) {
            ctx->pc = 0x234DF4u;
            goto label_234df4;
        }
    }
    ctx->pc = 0x234DA0u;
    // 0x234da0: 0x86620148  lh          $v0, 0x148($s3)
    ctx->pc = 0x234da0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 328)));
    // 0x234da4: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x234DA4u;
    {
        const bool branch_taken_0x234da4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x234da4) {
            ctx->pc = 0x234DA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234DA4u;
            // 0x234da8: 0xae000088  sw          $zero, 0x88($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234DF4u;
            goto label_234df4;
        }
    }
    ctx->pc = 0x234DACu;
    // 0x234dac: 0x86820148  lh          $v0, 0x148($s4)
    ctx->pc = 0x234dacu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 328)));
    // 0x234db0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x234DB0u;
    {
        const bool branch_taken_0x234db0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x234db0) {
            ctx->pc = 0x234DB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234DB0u;
            // 0x234db4: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234DB8u;
            goto label_234db8;
        }
    }
    ctx->pc = 0x234DB8u;
label_234db8:
    // 0x234db8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x234DB8u;
    {
        const bool branch_taken_0x234db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234DB8u;
        // 0x234dbc: 0xae000088  sw          $zero, 0x88($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234db8) {
            ctx->pc = 0x234DF4u;
            goto label_234df4;
        }
    }
    ctx->pc = 0x234DC0u;
label_234dc0:
    // 0x234dc0: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x234dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_234dc4:
    // 0x234dc4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x234dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x234dc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x234dc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x234dcc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x234dccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x234dd0: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x234dd0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x234dd4: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x234DD4u;
    {
        const bool branch_taken_0x234dd4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x234DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234DD4u;
        // 0x234dd8: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234dd4) {
            ctx->pc = 0x234DF4u;
            goto label_234df4;
        }
    }
    ctx->pc = 0x234DDCu;
    // 0x234ddc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x234DDCu;
    {
        const bool branch_taken_0x234ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234DDCu;
        // 0x234de0: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234ddc) {
            ctx->pc = 0x234DF4u;
            goto label_234df4;
        }
    }
    ctx->pc = 0x234DE4u;
    // 0x234de4: 0x0  nop
    ctx->pc = 0x234de4u;
    // NOP
label_234de8:
    // 0x234de8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x234de8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x234dec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x234decu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x234df0: 0xe6000088  swc1        $f0, 0x88($s0)
    ctx->pc = 0x234df0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 136), bits); }
label_234df4:
    // 0x234df4: 0x26120070  addiu       $s2, $s0, 0x70
    ctx->pc = 0x234df4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_234df8:
    // 0x234df8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x234df8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234dfc: 0xc08c208  jal         func_230820
    ctx->pc = 0x234DFCu;
    SET_GPR_U32(ctx, 31, 0x234E04u);
    ctx->pc = 0x234E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234DFCu;
    // 0x234e00: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x234DFCu, 0x234E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234E04u;
label_234e04:
    // 0x234e04: 0xc60000b0  lwc1        $f0, 0xB0($s0)
    ctx->pc = 0x234e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x234e08: 0x27be0010  addiu       $fp, $sp, 0x10
    ctx->pc = 0x234e08u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x234e0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x234e0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234e10: 0xe6000080  swc1        $f0, 0x80($s0)
    ctx->pc = 0x234e10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x234e14: 0xc08c1e6  jal         func_230798
    ctx->pc = 0x234E14u;
    SET_GPR_U32(ctx, 31, 0x234E1Cu);
    ctx->pc = 0x234E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234E14u;
    // 0x234e18: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230798u, 0x234E14u, 0x234E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234E1Cu;
label_234e1c:
    // 0x234e1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x234e1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234e20: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x234e20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x234e24: 0xc08c208  jal         func_230820
    ctx->pc = 0x234E24u;
    SET_GPR_U32(ctx, 31, 0x234E2Cu);
    ctx->pc = 0x234E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234E24u;
    // 0x234e28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x234E24u, 0x234E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234E2Cu;
label_234e2c:
    // 0x234e2c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x234e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x234e30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x234e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x234e34: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x234E34u;
    {
        const bool branch_taken_0x234e34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x234E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234E34u;
        // 0x234e38: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234e34) {
            ctx->pc = 0x234E68u;
            goto label_234e68;
        }
    }
    ctx->pc = 0x234E3Cu;
    // 0x234e3c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x234e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x234e40: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x234e40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x234e44: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x234e44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x234e48: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x234e48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234e4c: 0x2444dda0  addiu       $a0, $v0, -0x2260
    ctx->pc = 0x234e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958496));
    // 0x234e50: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x234e50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234e54: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x234e54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234e58: 0xc08dc4a  jal         func_237128
    ctx->pc = 0x234E58u;
    SET_GPR_U32(ctx, 31, 0x234E60u);
    ctx->pc = 0x234E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234E58u;
    // 0x234e5c: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237128u, 0x234E58u, 0x234E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234E60u;
label_234e60:
    // 0x234e60: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x234E60u;
    {
        const bool branch_taken_0x234e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234E60u;
        // 0x234e64: 0x46000106  mov.s       $f4, $f0 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x234e60) {
            ctx->pc = 0x234E74u;
            goto label_234e74;
        }
    }
    ctx->pc = 0x234E68u;
label_234e68:
    // 0x234e68: 0xc08cb0c  jal         func_232C30
    ctx->pc = 0x234E68u;
    SET_GPR_U32(ctx, 31, 0x234E70u);
    ctx->pc = 0x234E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234E68u;
    // 0x234e6c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232C30u, 0x234E68u, 0x234E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234E70u;
label_234e70:
    // 0x234e70: 0x46000106  mov.s       $f4, $f0
    ctx->pc = 0x234e70u;
    ctx->f[4] = FPU_MOV_S(ctx->f[0]);
label_234e74:
    // 0x234e74: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x234e74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234e78: 0x26150090  addiu       $s5, $s0, 0x90
    ctx->pc = 0x234e78u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x234e7c: 0x261600a0  addiu       $s6, $s0, 0xA0
    ctx->pc = 0x234e7cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x234e80: 0xdab00000  lqc2        $vf16, 0x0($s5)
    ctx->pc = 0x234e80u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x234e84: 0xdadf0000  lqc2        $vf31, 0x0($s6)
    ctx->pc = 0x234e84u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x234e88: 0x4bff842c  vsub.xyzw   $vf16, $vf16, $vf31
    ctx->pc = 0x234e88u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[16], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x234e8c: 0xf8500000  sqc2        $vf16, 0x0($v0)
    ctx->pc = 0x234e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x234e90: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x234e90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x234e94: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x234e94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x234e98: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x234e98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234e9c: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x234e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x234ea0: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x234ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x234ea4: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x234ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x234ea8: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x234ea8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x234eac: 0x4602101e  madda.s     $f2, $f2
    ctx->pc = 0x234eacu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[2])));
    // 0x234eb0: 0x4600005c  madd.s      $f1, $f0, $f0
    ctx->pc = 0x234eb0u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x234eb4: 0x460118d6  rsqrt.s     $f3, $f3, $f1
    ctx->pc = 0x234eb4u;
    ctx->f[3] = 1.0f / sqrtf(ctx->f[3]);
    // 0x234eb8: 0xdbb00000  lqc2        $vf16, 0x0($sp)
    ctx->pc = 0x234eb8u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x234ebc: 0x4a20042c  vsub.w      $vf16, $vf0, $vf0
    ctx->pc = 0x234ebcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x234ec0: 0x44031800  mfc1        $v1, $f3
    ctx->pc = 0x234ec0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x234ec4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x234ec4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x234ec8: 0x4bc18418  vmulx.xyz   $vf16, $vf16, $vf1x
    ctx->pc = 0x234ec8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x234ecc: 0xf8500000  sqc2        $vf16, 0x0($v0)
    ctx->pc = 0x234eccu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x234ed0: 0x46002006  mov.s       $f0, $f4
    ctx->pc = 0x234ed0u;
    ctx->f[0] = FPU_MOV_S(ctx->f[4]);
    // 0x234ed4: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x234ed4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234ed8: 0xdbb00000  lqc2        $vf16, 0x0($sp)
    ctx->pc = 0x234ed8u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x234edc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x234edcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x234ee0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x234ee0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x234ee4: 0x4be18418  vmulx.xyzw  $vf16, $vf16, $vf1x
    ctx->pc = 0x234ee4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x234ee8: 0xf8500000  sqc2        $vf16, 0x0($v0)
    ctx->pc = 0x234ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x234eec: 0x26030060  addiu       $v1, $s0, 0x60
    ctx->pc = 0x234eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x234ef0: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x234ef0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234ef4: 0xda500000  lqc2        $vf16, 0x0($s2)
    ctx->pc = 0x234ef4u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x234ef8: 0xd85f0000  lqc2        $vf31, 0x0($v0)
    ctx->pc = 0x234ef8u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x234efc: 0x4bdf8428  vadd.xyz    $vf16, $vf16, $vf31
    ctx->pc = 0x234efcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x234f00: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x234f00u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x234f04: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x234f04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x234f08: 0x26110060  addiu       $s1, $s0, 0x60
    ctx->pc = 0x234f08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x234f0c: 0x2477dda0  addiu       $s7, $v1, -0x2260
    ctx->pc = 0x234f0cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958496));
    // 0x234f10: 0x26120070  addiu       $s2, $s0, 0x70
    ctx->pc = 0x234f10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x234f14: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x234f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234f18: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x234f18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234f1c: 0xc08db80  jal         func_236E00
    ctx->pc = 0x234F1Cu;
    SET_GPR_U32(ctx, 31, 0x234F24u);
    ctx->pc = 0x234F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234F1Cu;
    // 0x234f20: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236E00u, 0x234F1Cu, 0x234F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234F24u;
label_234f24:
    // 0x234f24: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x234f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x234f28: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x234F28u;
    {
        const bool branch_taken_0x234f28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x234F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234F28u;
        // 0x234f2c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234f28) {
            ctx->pc = 0x234F6Cu;
            goto label_234f6c;
        }
    }
    ctx->pc = 0x234F30u;
    // 0x234f30: 0xc60c0080  lwc1        $f12, 0x80($s0)
    ctx->pc = 0x234f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x234f34: 0xc60d00b0  lwc1        $f13, 0xB0($s0)
    ctx->pc = 0x234f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x234f38: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x234f38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234f3c: 0xc78e862c  lwc1        $f14, -0x79D4($gp)
    ctx->pc = 0x234f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x234f40: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x234f40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234f44: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x234f44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234f48: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x234f48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234f4c: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x234f4cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234f50: 0xc08daf8  jal         func_236BE0
    ctx->pc = 0x234F50u;
    SET_GPR_U32(ctx, 31, 0x234F58u);
    ctx->pc = 0x234F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234F50u;
    // 0x234f54: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236BE0u, 0x234F50u, 0x234F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234F58u;
label_234f58:
    // 0x234f58: 0x7bc30000  lq          $v1, 0x0($fp)
    ctx->pc = 0x234f58u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x234f5c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x234f5cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x234f60: 0xe6000080  swc1        $f0, 0x80($s0)
    ctx->pc = 0x234f60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x234f64: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x234f64u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
    // 0x234f68: 0x7e430000  sq          $v1, 0x0($s2)
    ctx->pc = 0x234f68u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 3));
label_234f6c:
    // 0x234f6c: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x234f6cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x234f70: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x234f70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x234f74: 0xc7808630  lwc1        $f0, -0x79D0($gp)
    ctx->pc = 0x234f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x234f78: 0x7ea20000  sq          $v0, 0x0($s5)
    ctx->pc = 0x234f78u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), GPR_VEC(ctx, 2));
    // 0x234f7c: 0x7a430000  lq          $v1, 0x0($s2)
    ctx->pc = 0x234f7cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x234f80: 0x7ec30000  sq          $v1, 0x0($s6)
    ctx->pc = 0x234f80u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), GPR_VEC(ctx, 3));
    // 0x234f84: 0xc60d0088  lwc1        $f13, 0x88($s0)
    ctx->pc = 0x234f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x234f88: 0xc60c0080  lwc1        $f12, 0x80($s0)
    ctx->pc = 0x234f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x234f8c: 0x460d0034  c.lt.s      $f0, $f13
    ctx->pc = 0x234f8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x234f90: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x234F90u;
    {
        const bool branch_taken_0x234f90 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x234F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234F90u;
        // 0x234f94: 0xe60c00b0  swc1        $f12, 0xB0($s0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 176), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x234f90) {
            ctx->pc = 0x234F9Cu;
            goto label_234f9c;
        }
    }
    ctx->pc = 0x234F98u;
    // 0x234f98: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x234f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_234f9c:
    // 0x234f9c: 0xae040018  sw          $a0, 0x18($s0)
    ctx->pc = 0x234f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 4));
    // 0x234fa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x234fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234fa4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x234fa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234fa8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x234fa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234fac: 0xc08cc4e  jal         func_233138
    ctx->pc = 0x234FACu;
    SET_GPR_U32(ctx, 31, 0x234FB4u);
    ctx->pc = 0x234FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234FACu;
    // 0x234fb0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233138u, 0x234FACu, 0x234FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234FB4u;
label_234fb4:
    // 0x234fb4: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x234fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x234fb8: 0x548000d1  bnel        $a0, $zero, . + 4 + (0xD1 << 2)
    ctx->pc = 0x234FB8u;
    {
        const bool branch_taken_0x234fb8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x234fb8) {
            ctx->pc = 0x234FBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234FB8u;
            // 0x234fbc: 0x86620148  lh          $v0, 0x148($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 328)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235300u;
            goto label_235300;
        }
    }
    ctx->pc = 0x234FC0u;
    // 0x234fc0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x234fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x234fc4: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x234fc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x234fc8: 0x104000fe  beqz        $v0, . + 4 + (0xFE << 2)
    ctx->pc = 0x234FC8u;
    {
        const bool branch_taken_0x234fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x234FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234FC8u;
        // 0x234fcc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234fc8) {
            ctx->pc = 0x2353C4u;
            goto label_2353c4;
        }
    }
    ctx->pc = 0x234FD0u;
    // 0x234fd0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x234fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x234fd4: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x234fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x234fd8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x234fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x234fdc: 0x8c637aa0  lw          $v1, 0x7AA0($v1)
    ctx->pc = 0x234fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31392)));
    // 0x234fe0: 0x600008  jr          $v1
    ctx->pc = 0x234FE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x234FE8u: goto label_234fe8;
            case 0x235108u: goto label_235108;
            case 0x2351F0u: goto label_2351f0;
            case 0x235230u: goto label_235230;
            case 0x235258u: goto label_235258;
            case 0x235280u: goto label_235280;
            case 0x2352A8u: goto label_2352a8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234FE0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x234FE8u;
label_234fe8:
    // 0x234fe8: 0xc084334  jal         func_210CD0
    ctx->pc = 0x234FE8u;
    SET_GPR_U32(ctx, 31, 0x234FF0u);
    ctx->pc = 0x234FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234FE8u;
    // 0x234fec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210CD0u, 0x234FE8u, 0x234FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234FF0u;
label_234ff0:
    // 0x234ff0: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x234FF0u;
    {
        const bool branch_taken_0x234ff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x234ff0) {
            ctx->pc = 0x234FF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234FF0u;
            // 0x234ff4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23500Cu;
            goto label_23500c;
        }
    }
    ctx->pc = 0x234FF8u;
    // 0x234ff8: 0xc084334  jal         func_210CD0
    ctx->pc = 0x234FF8u;
    SET_GPR_U32(ctx, 31, 0x235000u);
    ctx->pc = 0x234FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234FF8u;
    // 0x234ffc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210CD0u, 0x234FF8u, 0x235000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235000u;
label_235000:
    // 0x235000: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x235000u;
    {
        const bool branch_taken_0x235000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x235000) {
            ctx->pc = 0x235004u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235000u;
            // 0x235004: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235030u;
            goto label_235030;
        }
    }
    ctx->pc = 0x235008u;
    // 0x235008: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x235008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23500c:
    // 0x23500c: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x23500cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x235010: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x235010u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x235014: 0x24a4dda0  addiu       $a0, $a1, -0x2260
    ctx->pc = 0x235014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958496));
    // 0x235018: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x235018u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23501c: 0xc08df28  jal         func_237CA0
    ctx->pc = 0x23501Cu;
    SET_GPR_U32(ctx, 31, 0x235024u);
    ctx->pc = 0x235020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23501Cu;
    // 0x235020: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237CA0u, 0x23501Cu, 0x235024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235024u;
label_235024:
    // 0x235024: 0x100000e9  b           . + 4 + (0xE9 << 2)
    ctx->pc = 0x235024u;
    {
        const bool branch_taken_0x235024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235024u;
        // 0x235028: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235024) {
            ctx->pc = 0x2353CCu;
            goto label_2353cc;
        }
    }
    ctx->pc = 0x23502Cu;
    // 0x23502c: 0x0  nop
    ctx->pc = 0x23502cu;
    // NOP
label_235030:
    // 0x235030: 0x2842001a  slti        $v0, $v0, 0x1A
    ctx->pc = 0x235030u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)26) ? 1 : 0);
    // 0x235034: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x235034u;
    {
        const bool branch_taken_0x235034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x235038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235034u;
        // 0x235038: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235034) {
            ctx->pc = 0x235068u;
            goto label_235068;
        }
    }
    ctx->pc = 0x23503Cu;
    // 0x23503c: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x23503cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x235040: 0x3c014416  lui         $at, 0x4416
    ctx->pc = 0x235040u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17430 << 16));
    // 0x235044: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x235044u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x235048: 0x2462dda0  addiu       $v0, $v1, -0x2260
    ctx->pc = 0x235048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958496));
    // 0x23504c: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x23504cu;
    { uint32_t bits = FAST_READ32(0x3ADDDCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x235050: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x235050u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x235054: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x235054u;
    {
        const bool branch_taken_0x235054 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x235058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235054u;
        // 0x235058: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235054) {
            ctx->pc = 0x23506Cu;
            goto label_23506c;
        }
    }
    ctx->pc = 0x23505Cu;
    // 0x23505c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23505cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x235060: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x235060u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x235064: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x235064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_235068:
    // 0x235068: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x235068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23506c:
    // 0x23506c: 0xc08cba0  jal         func_232E80
    ctx->pc = 0x23506Cu;
    SET_GPR_U32(ctx, 31, 0x235074u);
    ctx->pc = 0x235070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23506Cu;
    // 0x235070: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232E80u, 0x23506Cu, 0x235074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235074u;
label_235074:
    // 0x235074: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x235074u;
    {
        const bool branch_taken_0x235074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x235078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235074u;
        // 0x235078: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235074) {
            ctx->pc = 0x2350A8u;
            goto label_2350a8;
        }
    }
    ctx->pc = 0x23507Cu;
    // 0x23507c: 0x10a00019  beqz        $a1, . + 4 + (0x19 << 2)
    ctx->pc = 0x23507Cu;
    {
        const bool branch_taken_0x23507c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x235080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23507Cu;
        // 0x235080: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23507c) {
            ctx->pc = 0x2350E4u;
            goto label_2350e4;
        }
    }
    ctx->pc = 0x235084u;
    // 0x235084: 0x94a30166  lhu         $v1, 0x166($a1)
    ctx->pc = 0x235084u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 358)));
    // 0x235088: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x235088u;
    {
        const bool branch_taken_0x235088 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23508Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235088u;
        // 0x23508c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235088) {
            ctx->pc = 0x2350ACu;
            goto label_2350ac;
        }
    }
    ctx->pc = 0x235090u;
    // 0x235090: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x235090u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x235094: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x235094u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x235098: 0x2464dda0  addiu       $a0, $v1, -0x2260
    ctx->pc = 0x235098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958496));
    // 0x23509c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x23509cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2350a0: 0xc08df28  jal         func_237CA0
    ctx->pc = 0x2350A0u;
    SET_GPR_U32(ctx, 31, 0x2350A8u);
    ctx->pc = 0x2350A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2350A0u;
    // 0x2350a4: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237CA0u, 0x2350A0u, 0x2350A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2350A8u;
label_2350a8:
    // 0x2350a8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2350a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2350ac:
    // 0x2350ac: 0x50a0000e  beql        $a1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2350ACu;
    {
        const bool branch_taken_0x2350ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2350ac) {
            ctx->pc = 0x2350B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2350ACu;
            // 0x2350b0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2350E8u;
            goto label_2350e8;
        }
    }
    ctx->pc = 0x2350B4u;
    // 0x2350b4: 0x94a30166  lhu         $v1, 0x166($a1)
    ctx->pc = 0x2350b4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 358)));
    // 0x2350b8: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2350b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2350bc: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2350BCu;
    {
        const bool branch_taken_0x2350bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2350C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2350BCu;
        // 0x2350c0: 0x2c620004  sltiu       $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2350bc) {
            ctx->pc = 0x2350E4u;
            goto label_2350e4;
        }
    }
    ctx->pc = 0x2350C4u;
    // 0x2350c4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2350C4u;
    {
        const bool branch_taken_0x2350c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2350C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2350C4u;
        // 0x2350c8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2350c4) {
            ctx->pc = 0x2350E8u;
            goto label_2350e8;
        }
    }
    ctx->pc = 0x2350CCu;
    // 0x2350cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2350ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2350d0: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2350d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2350d4: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x2350d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x2350d8: 0x2464dda0  addiu       $a0, $v1, -0x2260
    ctx->pc = 0x2350d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958496));
    // 0x2350dc: 0xc08df28  jal         func_237CA0
    ctx->pc = 0x2350DCu;
    SET_GPR_U32(ctx, 31, 0x2350E4u);
    ctx->pc = 0x2350E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2350DCu;
    // 0x2350e0: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237CA0u, 0x2350DCu, 0x2350E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2350E4u;
label_2350e4:
    // 0x2350e4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2350e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2350e8:
    // 0x2350e8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2350e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2350ec: 0xc08cb86  jal         func_232E18
    ctx->pc = 0x2350ECu;
    SET_GPR_U32(ctx, 31, 0x2350F4u);
    ctx->pc = 0x2350F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2350ECu;
    // 0x2350f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232E18u, 0x2350ECu, 0x2350F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2350F4u;
label_2350f4:
    // 0x2350f4: 0x104000b4  beqz        $v0, . + 4 + (0xB4 << 2)
    ctx->pc = 0x2350F4u;
    {
        const bool branch_taken_0x2350f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2350F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2350F4u;
        // 0x2350f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2350f4) {
            ctx->pc = 0x2353C8u;
            goto label_2353c8;
        }
    }
    ctx->pc = 0x2350FCu;
    // 0x2350fc: 0x100000b2  b           . + 4 + (0xB2 << 2)
    ctx->pc = 0x2350FCu;
    {
        const bool branch_taken_0x2350fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2350FCu;
        // 0x235100: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2350fc) {
            ctx->pc = 0x2353C8u;
            goto label_2353c8;
        }
    }
    ctx->pc = 0x235104u;
    // 0x235104: 0x0  nop
    ctx->pc = 0x235104u;
    // NOP
label_235108:
    // 0x235108: 0xc084334  jal         func_210CD0
    ctx->pc = 0x235108u;
    SET_GPR_U32(ctx, 31, 0x235110u);
    ctx->pc = 0x23510Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235108u;
    // 0x23510c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210CD0u, 0x235108u, 0x235110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235110u;
label_235110:
    // 0x235110: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x235110u;
    {
        const bool branch_taken_0x235110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x235110) {
            ctx->pc = 0x235114u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235110u;
            // 0x235114: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235150u;
            goto label_235150;
        }
    }
    ctx->pc = 0x235118u;
    // 0x235118: 0xc084334  jal         func_210CD0
    ctx->pc = 0x235118u;
    SET_GPR_U32(ctx, 31, 0x235120u);
    ctx->pc = 0x23511Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235118u;
    // 0x23511c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210CD0u, 0x235118u, 0x235120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235120u;
label_235120:
    // 0x235120: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x235120u;
    {
        const bool branch_taken_0x235120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x235124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235120u;
        // 0x235124: 0x3c05003b  lui         $a1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235120) {
            ctx->pc = 0x23514Cu;
            goto label_23514c;
        }
    }
    ctx->pc = 0x235128u;
    // 0x235128: 0x3c014416  lui         $at, 0x4416
    ctx->pc = 0x235128u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17430 << 16));
    // 0x23512c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x23512cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x235130: 0x24a2dda0  addiu       $v0, $a1, -0x2260
    ctx->pc = 0x235130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958496));
    // 0x235134: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x235134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x235138: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x235138u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23513c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x23513Cu;
    {
        const bool branch_taken_0x23513c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x235140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23513Cu;
        // 0x235140: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23513c) {
            ctx->pc = 0x235150u;
            goto label_235150;
        }
    }
    ctx->pc = 0x235144u;
    // 0x235144: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x235144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x235148: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x235148u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_23514c:
    // 0x23514c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23514cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_235150:
    // 0x235150: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x235150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235154: 0xc08cba0  jal         func_232E80
    ctx->pc = 0x235154u;
    SET_GPR_U32(ctx, 31, 0x23515Cu);
    ctx->pc = 0x235158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235154u;
    // 0x235158: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232E80u, 0x235154u, 0x23515Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23515Cu;
label_23515c:
    // 0x23515c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x23515Cu;
    {
        const bool branch_taken_0x23515c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x235160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23515Cu;
        // 0x235160: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23515c) {
            ctx->pc = 0x235194u;
            goto label_235194;
        }
    }
    ctx->pc = 0x235164u;
    // 0x235164: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x235164u;
    {
        const bool branch_taken_0x235164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x235168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235164u;
        // 0x235168: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235164) {
            ctx->pc = 0x2351D4u;
            goto label_2351d4;
        }
    }
    ctx->pc = 0x23516Cu;
    // 0x23516c: 0x94430166  lhu         $v1, 0x166($v0)
    ctx->pc = 0x23516cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 358)));
    // 0x235170: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x235170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x235174: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x235174u;
    {
        const bool branch_taken_0x235174 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x235178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235174u;
        // 0x235178: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235174) {
            ctx->pc = 0x235194u;
            goto label_235194;
        }
    }
    ctx->pc = 0x23517Cu;
    // 0x23517c: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x23517cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x235180: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x235180u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x235184: 0x2464dda0  addiu       $a0, $v1, -0x2260
    ctx->pc = 0x235184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958496));
    // 0x235188: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x235188u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23518c: 0xc08df28  jal         func_237CA0
    ctx->pc = 0x23518Cu;
    SET_GPR_U32(ctx, 31, 0x235194u);
    ctx->pc = 0x235190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23518Cu;
    // 0x235190: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237CA0u, 0x23518Cu, 0x235194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235194u;
label_235194:
    // 0x235194: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x235194u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x235198: 0x50a0000e  beql        $a1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x235198u;
    {
        const bool branch_taken_0x235198 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x235198) {
            ctx->pc = 0x23519Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235198u;
            // 0x23519c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2351D4u;
            goto label_2351d4;
        }
    }
    ctx->pc = 0x2351A0u;
    // 0x2351a0: 0x94a30166  lhu         $v1, 0x166($a1)
    ctx->pc = 0x2351a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 358)));
    // 0x2351a4: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2351a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2351a8: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2351A8u;
    {
        const bool branch_taken_0x2351a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2351ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2351A8u;
        // 0x2351ac: 0x2c620004  sltiu       $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2351a8) {
            ctx->pc = 0x2351D0u;
            goto label_2351d0;
        }
    }
    ctx->pc = 0x2351B0u;
    // 0x2351b0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2351B0u;
    {
        const bool branch_taken_0x2351b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2351B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2351B0u;
        // 0x2351b4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2351b0) {
            ctx->pc = 0x2351D4u;
            goto label_2351d4;
        }
    }
    ctx->pc = 0x2351B8u;
    // 0x2351b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2351b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2351bc: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2351bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2351c0: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x2351c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x2351c4: 0x2464dda0  addiu       $a0, $v1, -0x2260
    ctx->pc = 0x2351c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958496));
    // 0x2351c8: 0xc08df28  jal         func_237CA0
    ctx->pc = 0x2351C8u;
    SET_GPR_U32(ctx, 31, 0x2351D0u);
    ctx->pc = 0x2351CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2351C8u;
    // 0x2351cc: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237CA0u, 0x2351C8u, 0x2351D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2351D0u;
label_2351d0:
    // 0x2351d0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2351d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2351d4:
    // 0x2351d4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2351d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2351d8: 0xc08cb86  jal         func_232E18
    ctx->pc = 0x2351D8u;
    SET_GPR_U32(ctx, 31, 0x2351E0u);
    ctx->pc = 0x2351DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2351D8u;
    // 0x2351dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232E18u, 0x2351D8u, 0x2351E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2351E0u;
label_2351e0:
    // 0x2351e0: 0x10400079  beqz        $v0, . + 4 + (0x79 << 2)
    ctx->pc = 0x2351E0u;
    {
        const bool branch_taken_0x2351e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2351E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2351E0u;
        // 0x2351e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2351e0) {
            ctx->pc = 0x2353C8u;
            goto label_2353c8;
        }
    }
    ctx->pc = 0x2351E8u;
    // 0x2351e8: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x2351E8u;
    {
        const bool branch_taken_0x2351e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2351ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2351E8u;
        // 0x2351ec: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2351e8) {
            ctx->pc = 0x2353C8u;
            goto label_2353c8;
        }
    }
    ctx->pc = 0x2351F0u;
label_2351f0:
    // 0x2351f0: 0x96620166  lhu         $v0, 0x166($s3)
    ctx->pc = 0x2351f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 358)));
    // 0x2351f4: 0x3401fff2  ori         $at, $zero, 0xFFF2
    ctx->pc = 0x2351f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65522);
    // 0x2351f8: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x2351f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x2351fc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2351fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x235200: 0x2c420007  sltiu       $v0, $v0, 0x7
    ctx->pc = 0x235200u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x235204: 0x54400071  bnel        $v0, $zero, . + 4 + (0x71 << 2)
    ctx->pc = 0x235204u;
    {
        const bool branch_taken_0x235204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x235204) {
            ctx->pc = 0x235208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235204u;
            // 0x235208: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2353CCu;
            goto label_2353cc;
        }
    }
    ctx->pc = 0x23520Cu;
    // 0x23520c: 0x96820166  lhu         $v0, 0x166($s4)
    ctx->pc = 0x23520cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 358)));
    // 0x235210: 0x3401fff2  ori         $at, $zero, 0xFFF2
    ctx->pc = 0x235210u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65522);
    // 0x235214: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x235214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x235218: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x235218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x23521c: 0x2c420007  sltiu       $v0, $v0, 0x7
    ctx->pc = 0x23521cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x235220: 0x5440006a  bnel        $v0, $zero, . + 4 + (0x6A << 2)
    ctx->pc = 0x235220u;
    {
        const bool branch_taken_0x235220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x235220) {
            ctx->pc = 0x235224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235220u;
            // 0x235224: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2353CCu;
            goto label_2353cc;
        }
    }
    ctx->pc = 0x235228u;
    // 0x235228: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x235228u;
    {
        const bool branch_taken_0x235228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23522Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235228u;
        // 0x23522c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235228) {
            ctx->pc = 0x2353C4u;
            goto label_2353c4;
        }
    }
    ctx->pc = 0x235230u;
label_235230:
    // 0x235230: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x235230u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x235234: 0x3c0143c8  lui         $at, 0x43C8
    ctx->pc = 0x235234u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17352 << 16));
    // 0x235238: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x235238u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23523c: 0x24a2dda0  addiu       $v0, $a1, -0x2260
    ctx->pc = 0x23523cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958496));
    // 0x235240: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x235240u;
    { uint32_t bits = FAST_READ32(0x3ADDDCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x235244: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x235244u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x235248: 0x45020060  bc1fl       . + 4 + (0x60 << 2)
    ctx->pc = 0x235248u;
    {
        const bool branch_taken_0x235248 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x235248) {
            ctx->pc = 0x23524Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235248u;
            // 0x23524c: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2353CCu;
            goto label_2353cc;
        }
    }
    ctx->pc = 0x235250u;
    // 0x235250: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x235250u;
    {
        const bool branch_taken_0x235250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235250u;
        // 0x235254: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235250) {
            ctx->pc = 0x2353C4u;
            goto label_2353c4;
        }
    }
    ctx->pc = 0x235258u;
label_235258:
    // 0x235258: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x235258u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x23525c: 0x3c0143fa  lui         $at, 0x43FA
    ctx->pc = 0x23525cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17402 << 16));
    // 0x235260: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x235260u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x235264: 0x2462dda0  addiu       $v0, $v1, -0x2260
    ctx->pc = 0x235264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958496));
    // 0x235268: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x235268u;
    { uint32_t bits = FAST_READ32(0x3ADDDCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23526c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23526cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x235270: 0x45020056  bc1fl       . + 4 + (0x56 << 2)
    ctx->pc = 0x235270u;
    {
        const bool branch_taken_0x235270 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x235270) {
            ctx->pc = 0x235274u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235270u;
            // 0x235274: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2353CCu;
            goto label_2353cc;
        }
    }
    ctx->pc = 0x235278u;
    // 0x235278: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x235278u;
    {
        const bool branch_taken_0x235278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23527Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235278u;
        // 0x23527c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235278) {
            ctx->pc = 0x2353C4u;
            goto label_2353c4;
        }
    }
    ctx->pc = 0x235280u;
label_235280:
    // 0x235280: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x235280u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x235284: 0x3c0144fa  lui         $at, 0x44FA
    ctx->pc = 0x235284u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17658 << 16));
    // 0x235288: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x235288u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23528c: 0x24a2dda0  addiu       $v0, $a1, -0x2260
    ctx->pc = 0x23528cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958496));
    // 0x235290: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x235290u;
    { uint32_t bits = FAST_READ32(0x3ADDE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x235294: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x235294u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x235298: 0x4502004c  bc1fl       . + 4 + (0x4C << 2)
    ctx->pc = 0x235298u;
    {
        const bool branch_taken_0x235298 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x235298) {
            ctx->pc = 0x23529Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235298u;
            // 0x23529c: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2353CCu;
            goto label_2353cc;
        }
    }
    ctx->pc = 0x2352A0u;
    // 0x2352a0: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x2352A0u;
    {
        const bool branch_taken_0x2352a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2352A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2352A0u;
        // 0x2352a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2352a0) {
            ctx->pc = 0x2353C4u;
            goto label_2353c4;
        }
    }
    ctx->pc = 0x2352A8u;
label_2352a8:
    // 0x2352a8: 0x96650166  lhu         $a1, 0x166($s3)
    ctx->pc = 0x2352a8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 358)));
    // 0x2352ac: 0x3402fff6  ori         $v0, $zero, 0xFFF6
    ctx->pc = 0x2352acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65526);
    // 0x2352b0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2352b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2352b4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2352b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2352b8: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x2352b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x2352bc: 0x54400043  bnel        $v0, $zero, . + 4 + (0x43 << 2)
    ctx->pc = 0x2352BCu;
    {
        const bool branch_taken_0x2352bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2352bc) {
            ctx->pc = 0x2352C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2352BCu;
            // 0x2352c0: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2353CCu;
            goto label_2353cc;
        }
    }
    ctx->pc = 0x2352C4u;
    // 0x2352c4: 0x96840166  lhu         $a0, 0x166($s4)
    ctx->pc = 0x2352c4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 358)));
    // 0x2352c8: 0x3402fff6  ori         $v0, $zero, 0xFFF6
    ctx->pc = 0x2352c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65526);
    // 0x2352cc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2352ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2352d0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2352d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2352d4: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x2352d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x2352d8: 0x5440003c  bnel        $v0, $zero, . + 4 + (0x3C << 2)
    ctx->pc = 0x2352D8u;
    {
        const bool branch_taken_0x2352d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2352d8) {
            ctx->pc = 0x2352DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2352D8u;
            // 0x2352dc: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2353CCu;
            goto label_2353cc;
        }
    }
    ctx->pc = 0x2352E0u;
    // 0x2352e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2352e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2352e4: 0x50a20039  beql        $a1, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x2352E4u;
    {
        const bool branch_taken_0x2352e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2352e4) {
            ctx->pc = 0x2352E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2352E4u;
            // 0x2352e8: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2353CCu;
            goto label_2353cc;
        }
    }
    ctx->pc = 0x2352ECu;
    // 0x2352ec: 0x50820037  beql        $a0, $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x2352ECu;
    {
        const bool branch_taken_0x2352ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2352ec) {
            ctx->pc = 0x2352F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2352ECu;
            // 0x2352f0: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2353CCu;
            goto label_2353cc;
        }
    }
    ctx->pc = 0x2352F4u;
    // 0x2352f4: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x2352F4u;
    {
        const bool branch_taken_0x2352f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2352F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2352F4u;
        // 0x2352f8: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2352f4) {
            ctx->pc = 0x2353C8u;
            goto label_2353c8;
        }
    }
    ctx->pc = 0x2352FCu;
    // 0x2352fc: 0x0  nop
    ctx->pc = 0x2352fcu;
    // NOP
label_235300:
    // 0x235300: 0x54400025  bnel        $v0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x235300u;
    {
        const bool branch_taken_0x235300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x235300) {
            ctx->pc = 0x235304u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235300u;
            // 0x235304: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235398u;
            goto label_235398;
        }
    }
    ctx->pc = 0x235308u;
    // 0x235308: 0x86820148  lh          $v0, 0x148($s4)
    ctx->pc = 0x235308u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 328)));
    // 0x23530c: 0x54400022  bnel        $v0, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x23530Cu;
    {
        const bool branch_taken_0x23530c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23530c) {
            ctx->pc = 0x235310u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23530Cu;
            // 0x235310: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235398u;
            goto label_235398;
        }
    }
    ctx->pc = 0x235314u;
    // 0x235314: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x235314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x235318: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x235318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x23531c: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x23531Cu;
    {
        const bool branch_taken_0x23531c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x235320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23531Cu;
        // 0x235320: 0x28620005  slti        $v0, $v1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23531c) {
            ctx->pc = 0x235368u;
            goto label_235368;
        }
    }
    ctx->pc = 0x235324u;
    // 0x235324: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x235324u;
    {
        const bool branch_taken_0x235324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x235328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235324u;
        // 0x235328: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235324) {
            ctx->pc = 0x235340u;
            goto label_235340;
        }
    }
    ctx->pc = 0x23532Cu;
    // 0x23532c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x23532cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x235330: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x235330u;
    {
        const bool branch_taken_0x235330 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x235330) {
            ctx->pc = 0x235334u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235330u;
            // 0x235334: 0xc6e1003c  lwc1        $f1, 0x3C($s7) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x235350u;
            goto label_235350;
        }
    }
    ctx->pc = 0x235338u;
    // 0x235338: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x235338u;
    {
        const bool branch_taken_0x235338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23533Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235338u;
        // 0x23533c: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235338) {
            ctx->pc = 0x2353CCu;
            goto label_2353cc;
        }
    }
    ctx->pc = 0x235340u;
label_235340:
    // 0x235340: 0x5062000f  beql        $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x235340u;
    {
        const bool branch_taken_0x235340 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x235340) {
            ctx->pc = 0x235344u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235340u;
            // 0x235344: 0xc6e10040  lwc1        $f1, 0x40($s7) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x235380u;
            goto label_235380;
        }
    }
    ctx->pc = 0x235348u;
    // 0x235348: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x235348u;
    {
        const bool branch_taken_0x235348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23534Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235348u;
        // 0x23534c: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235348) {
            ctx->pc = 0x2353CCu;
            goto label_2353cc;
        }
    }
    ctx->pc = 0x235350u;
label_235350:
    // 0x235350: 0x3c0143c8  lui         $at, 0x43C8
    ctx->pc = 0x235350u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17352 << 16));
    // 0x235354: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x235354u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x235358: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x235358u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23535c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x23535Cu;
    {
        const bool branch_taken_0x23535c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23535c) {
            ctx->pc = 0x2353B8u;
            goto label_2353b8;
        }
    }
    ctx->pc = 0x235364u;
    // 0x235364: 0x0  nop
    ctx->pc = 0x235364u;
    // NOP
label_235368:
    // 0x235368: 0xc6e1003c  lwc1        $f1, 0x3C($s7)
    ctx->pc = 0x235368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23536c: 0x3c0143fa  lui         $at, 0x43FA
    ctx->pc = 0x23536cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17402 << 16));
    // 0x235370: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x235370u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x235374: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x235374u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x235378: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x235378u;
    {
        const bool branch_taken_0x235378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x235378) {
            ctx->pc = 0x2353B8u;
            goto label_2353b8;
        }
    }
    ctx->pc = 0x235380u;
label_235380:
    // 0x235380: 0x3c0144fa  lui         $at, 0x44FA
    ctx->pc = 0x235380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17658 << 16));
    // 0x235384: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x235384u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x235388: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x235388u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23538c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x23538Cu;
    {
        const bool branch_taken_0x23538c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23538c) {
            ctx->pc = 0x2353B8u;
            goto label_2353b8;
        }
    }
    ctx->pc = 0x235394u;
    // 0x235394: 0x0  nop
    ctx->pc = 0x235394u;
    // NOP
label_235398:
    // 0x235398: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x235398u;
    {
        const bool branch_taken_0x235398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x235398) {
            ctx->pc = 0x23539Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235398u;
            // 0x23539c: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2353CCu;
            goto label_2353cc;
        }
    }
    ctx->pc = 0x2353A0u;
    // 0x2353a0: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2353a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2353a4: 0x3c014416  lui         $at, 0x4416
    ctx->pc = 0x2353a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17430 << 16));
    // 0x2353a8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2353a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2353ac: 0x2462dda0  addiu       $v0, $v1, -0x2260
    ctx->pc = 0x2353acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958496));
    // 0x2353b0: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x2353b0u;
    { uint32_t bits = FAST_READ32(0x3ADDDCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2353b4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2353b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2353b8:
    // 0x2353b8: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2353B8u;
    {
        const bool branch_taken_0x2353b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2353b8) {
            ctx->pc = 0x2353BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2353B8u;
            // 0x2353bc: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2353CCu;
            goto label_2353cc;
        }
    }
    ctx->pc = 0x2353C0u;
    // 0x2353c0: 0x2482fffe  addiu       $v0, $a0, -0x2
    ctx->pc = 0x2353c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
label_2353c4:
    // 0x2353c4: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x2353c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_2353c8:
    // 0x2353c8: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2353c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2353cc:
    // 0x2353cc: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x2353ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2353d0: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x2353d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2353d4: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x2353d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2353d8: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x2353d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2353dc: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x2353dcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2353e0: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2353e0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2353e4: 0xdfb70078  ld          $s7, 0x78($sp)
    ctx->pc = 0x2353e4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2353e8: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x2353e8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2353ec: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x2353ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2353f0: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x2353f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2353f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2353F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2353F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2353F4u;
        // 0x2353f8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2353F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2353FCu;
    // 0x2353fc: 0x0  nop
    ctx->pc = 0x2353fcu;
    // NOP
    ctx->pc = 0x235400u;
}
