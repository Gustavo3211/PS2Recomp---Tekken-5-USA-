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

// Function: sub_00233BB0
// Address: 0x233bb0 - 0x2348d0
void sub_00233BB0_0x233bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00233BB0_0x233bb0");
#endif

    switch (ctx->pc) {
        case 0x233bf8u: goto label_233bf8;
        case 0x233ca4u: goto label_233ca4;
        case 0x233d10u: goto label_233d10;
        case 0x233d28u: goto label_233d28;
        case 0x233d50u: goto label_233d50;
        case 0x233fc0u: goto label_233fc0;
        case 0x234004u: goto label_234004;
        case 0x234068u: goto label_234068;
        case 0x23407cu: goto label_23407c;
        case 0x2340b0u: goto label_2340b0;
        case 0x2340e0u: goto label_2340e0;
        case 0x234120u: goto label_234120;
        case 0x234150u: goto label_234150;
        case 0x23419cu: goto label_23419c;
        case 0x2341b4u: goto label_2341b4;
        case 0x2341c4u: goto label_2341c4;
        case 0x234300u: goto label_234300;
        case 0x2343c0u: goto label_2343c0;
        case 0x2343d0u: goto label_2343d0;
        case 0x2343ecu: goto label_2343ec;
        case 0x234424u: goto label_234424;
        case 0x234448u: goto label_234448;
        case 0x2344b0u: goto label_2344b0;
        case 0x2344d8u: goto label_2344d8;
        case 0x2344f4u: goto label_2344f4;
        case 0x23454cu: goto label_23454c;
        case 0x234580u: goto label_234580;
        case 0x2345dcu: goto label_2345dc;
        case 0x234608u: goto label_234608;
        case 0x234630u: goto label_234630;
        case 0x2346e0u: goto label_2346e0;
        case 0x2346f4u: goto label_2346f4;
        case 0x234704u: goto label_234704;
        case 0x234744u: goto label_234744;
        case 0x2347a0u: goto label_2347a0;
        case 0x2347e4u: goto label_2347e4;
        case 0x2347f4u: goto label_2347f4;
        case 0x23483cu: goto label_23483c;
        case 0x234864u: goto label_234864;
        case 0x234894u: goto label_234894;
        default: break;
    }

    ctx->pc = 0x233bb0u;

label_233bb0:
    // 0x233bb0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x233bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x233bb4: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x233bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x233bb8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x233bb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233bbc: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x233bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x233bc0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x233bc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233bc4: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x233bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x233bc8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x233bc8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233bcc: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x233bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x233bd0: 0x3c16003b  lui         $s6, 0x3B
    ctx->pc = 0x233bd0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)59 << 16));
    // 0x233bd4: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x233bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x233bd8: 0x26c4dda0  addiu       $a0, $s6, -0x2260
    ctx->pc = 0x233bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294958496));
    // 0x233bdc: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x233bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x233be0: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x233be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x233be4: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x233be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x233be8: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x233be8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x233bec: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x233becu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x233bf0: 0xc08dcf2  jal         func_2373C8
    ctx->pc = 0x233BF0u;
    SET_GPR_U32(ctx, 31, 0x233BF8u);
    ctx->pc = 0x233BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233BF0u;
    // 0x233bf4: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2373C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2373C8u, 0x233BF0u, 0x233BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233BF8u;
label_233bf8:
    // 0x233bf8: 0xae220050  sw          $v0, 0x50($s1)
    ctx->pc = 0x233bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
    // 0x233bfc: 0x2604ffe2  addiu       $a0, $s0, -0x1E
    ctx->pc = 0x233bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967266));
    // 0x233c00: 0x2c830048  sltiu       $v1, $a0, 0x48
    ctx->pc = 0x233c00u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)72) ? 1 : 0);
    // 0x233c04: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x233C04u;
    {
        const bool branch_taken_0x233c04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x233C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233C04u;
        // 0x233c08: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233c04) {
            ctx->pc = 0x233C68u;
            goto label_233c68;
        }
    }
    ctx->pc = 0x233C0Cu;
    // 0x233c0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x233c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x233c10: 0x2c830024  sltiu       $v1, $a0, 0x24
    ctx->pc = 0x233c10u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)36) ? 1 : 0);
    // 0x233c14: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x233C14u;
    {
        const bool branch_taken_0x233c14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x233C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233C14u;
        // 0x233c18: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233c14) {
            ctx->pc = 0x233C38u;
            goto label_233c38;
        }
    }
    ctx->pc = 0x233C1Cu;
    // 0x233c1c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x233c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x233c20: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x233c20u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x233c24: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x233c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x233c28: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x233c28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x233c2c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x233C2Cu;
    {
        const bool branch_taken_0x233c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233C2Cu;
        // 0x233c30: 0x2450fed4  addiu       $s0, $v0, -0x12C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966996));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233c2c) {
            ctx->pc = 0x233C9Cu;
            goto label_233c9c;
        }
    }
    ctx->pc = 0x233C34u;
    // 0x233c34: 0x0  nop
    ctx->pc = 0x233c34u;
    // NOP
label_233c38:
    // 0x233c38: 0x2602ffbe  addiu       $v0, $s0, -0x42
    ctx->pc = 0x233c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967230));
    // 0x233c3c: 0x2c420024  sltiu       $v0, $v0, 0x24
    ctx->pc = 0x233c3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)36) ? 1 : 0);
    // 0x233c40: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x233C40u;
    {
        const bool branch_taken_0x233c40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x233c40) {
            ctx->pc = 0x233C44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x233C40u;
            // 0x233c44: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x233C60u;
            goto label_233c60;
        }
    }
    ctx->pc = 0x233C48u;
    // 0x233c48: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x233c48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x233c4c: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x233c4cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x233c50: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x233c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x233c54: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x233c54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x233c58: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x233C58u;
    {
        const bool branch_taken_0x233c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233C58u;
        // 0x233c5c: 0x2450fd6c  addiu       $s0, $v0, -0x294 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966636));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233c58) {
            ctx->pc = 0x233C9Cu;
            goto label_233c9c;
        }
    }
    ctx->pc = 0x233C60u;
label_233c60:
    // 0x233c60: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x233C60u;
    {
        const bool branch_taken_0x233c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233C60u;
        // 0x233c64: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233c60) {
            ctx->pc = 0x233C9Cu;
            goto label_233c9c;
        }
    }
    ctx->pc = 0x233C68u;
label_233c68:
    // 0x233c68: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x233c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x233c6c: 0x28a2000f  slti        $v0, $a1, 0xF
    ctx->pc = 0x233c6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x233c70: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x233c70u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x233c74: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x233c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x233c78: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x233c78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x233c7c: 0x1810  mfhi        $v1
    ctx->pc = 0x233c7cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x233c80: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x233c80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x233c84: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x233c84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x233c88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x233c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x233c8c: 0x8c427a38  lw          $v0, 0x7A38($v0)
    ctx->pc = 0x233c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31288)));
    // 0x233c90: 0x22102  srl         $a0, $v0, 4
    ctx->pc = 0x233c90u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x233c94: 0x3055000f  andi        $s5, $v0, 0xF
    ctx->pc = 0x233c94u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x233c98: 0x3090000f  andi        $s0, $a0, 0xF
    ctx->pc = 0x233c98u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
label_233c9c:
    // 0x233c9c: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x233C9Cu;
    SET_GPR_U32(ctx, 31, 0x233CA4u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x233C9Cu, 0x233CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233CA4u;
label_233ca4:
    // 0x233ca4: 0x3c01c040  lui         $at, 0xC040
    ctx->pc = 0x233ca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49216 << 16));
    // 0x233ca8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x233ca8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x233cac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x233cacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x233cb0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x233cb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x233cb4: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x233cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x233cb8: 0x3c013000  lui         $at, 0x3000
    ctx->pc = 0x233cb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12288 << 16));
    // 0x233cbc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x233cbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x233cc0: 0x3c014230  lui         $at, 0x4230
    ctx->pc = 0x233cc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16944 << 16));
    // 0x233cc4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x233cc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x233cc8: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x233cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x233ccc: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x233cccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x233cd0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x233cd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x233cd4: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x233cd4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x233cd8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x233CD8u;
    {
        const bool branch_taken_0x233cd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233CD8u;
        // 0x233cdc: 0xe6210080  swc1        $f1, 0x80($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x233cd8) {
            ctx->pc = 0x233CF0u;
            goto label_233cf0;
        }
    }
    ctx->pc = 0x233CE0u;
    // 0x233ce0: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x233ce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x233ce4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x233ce4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x233ce8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x233ce8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x233cec: 0xe6200080  swc1        $f0, 0x80($s1)
    ctx->pc = 0x233cecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 128), bits); }
label_233cf0:
    // 0x233cf0: 0x26330070  addiu       $s3, $s1, 0x70
    ctx->pc = 0x233cf0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x233cf4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x233cf4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233cf8: 0x26c4dda0  addiu       $a0, $s6, -0x2260
    ctx->pc = 0x233cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294958496));
    // 0x233cfc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x233cfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233d00: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x233d00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233d04: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x233d04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233d08: 0xc08dc2e  jal         func_2370B8
    ctx->pc = 0x233D08u;
    SET_GPR_U32(ctx, 31, 0x233D10u);
    ctx->pc = 0x233D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233D08u;
    // 0x233d0c: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2370B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2370B8u, 0x233D08u, 0x233D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233D10u;
label_233d10:
    // 0x233d10: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x233d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x233d14: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x233d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x233d18: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x233D18u;
    {
        const bool branch_taken_0x233d18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x233d18) {
            ctx->pc = 0x233D48u;
            goto label_233d48;
        }
    }
    ctx->pc = 0x233D20u;
    // 0x233d20: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x233D20u;
    SET_GPR_U32(ctx, 31, 0x233D28u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x233D20u, 0x233D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233D28u;
label_233d28:
    // 0x233d28: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x233d28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x233d2c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x233d2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x233d30: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x233d30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x233d34: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x233d34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x233d38: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x233d38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x233d3c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x233d3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x233d40: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x233D40u;
    {
        const bool branch_taken_0x233d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233D40u;
        // 0x233d44: 0x46140842  mul.s       $f1, $f1, $f20 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x233d40) {
            ctx->pc = 0x233D6Cu;
            goto label_233d6c;
        }
    }
    ctx->pc = 0x233D48u;
label_233d48:
    // 0x233d48: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x233D48u;
    SET_GPR_U32(ctx, 31, 0x233D50u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x233D48u, 0x233D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233D50u;
label_233d50:
    // 0x233d50: 0x3c014228  lui         $at, 0x4228
    ctx->pc = 0x233d50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16936 << 16));
    // 0x233d54: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x233d54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x233d58: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x233d58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x233d5c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x233d5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x233d60: 0x3c0141e0  lui         $at, 0x41E0
    ctx->pc = 0x233d60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16864 << 16));
    // 0x233d64: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x233d64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x233d68: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x233d68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_233d6c:
    // 0x233d6c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x233d6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x233d70: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x233d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x233d74: 0x2862001e  slti        $v0, $v1, 0x1E
    ctx->pc = 0x233d74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x233d78: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x233D78u;
    {
        const bool branch_taken_0x233d78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x233D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233D78u;
        // 0x233d7c: 0x460208c0  add.s       $f3, $f1, $f2 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x233d78) {
            ctx->pc = 0x233DD8u;
            goto label_233dd8;
        }
    }
    ctx->pc = 0x233D80u;
    // 0x233d80: 0x28620066  slti        $v0, $v1, 0x66
    ctx->pc = 0x233d80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)102) ? 1 : 0);
    // 0x233d84: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x233D84u;
    {
        const bool branch_taken_0x233d84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233D84u;
        // 0x233d88: 0x928201bf  lbu         $v0, 0x1BF($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 447)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233d84) {
            ctx->pc = 0x233DDCu;
            goto label_233ddc;
        }
    }
    ctx->pc = 0x233D8Cu;
    // 0x233d8c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x233d8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x233d90: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x233D90u;
    {
        const bool branch_taken_0x233d90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x233d90) {
            ctx->pc = 0x233DA0u;
            goto label_233da0;
        }
    }
    ctx->pc = 0x233D98u;
    // 0x233d98: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x233d98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x233d9c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x233d9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_233da0:
    // 0x233da0: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x233da0u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x233da4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x233da4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x233da8: 0x3c014780  lui         $at, 0x4780
    ctx->pc = 0x233da8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18304 << 16));
    // 0x233dac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x233dacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x233db0: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x233db0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x233db4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x233db4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x233db8: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x233db8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x233dbc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x233dbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x233dc0: 0x0  nop
    ctx->pc = 0x233dc0u;
    // NOP
    // 0x233dc4: 0x0  nop
    ctx->pc = 0x233dc4u;
    // NOP
    // 0x233dc8: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x233dc8u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x233dcc: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x233DCCu;
    {
        const bool branch_taken_0x233dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233DCCu;
        // 0x233dd0: 0x8e230050  lw          $v1, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233dcc) {
            ctx->pc = 0x233F70u;
            goto label_233f70;
        }
    }
    ctx->pc = 0x233DD4u;
    // 0x233dd4: 0x0  nop
    ctx->pc = 0x233dd4u;
    // NOP
label_233dd8:
    // 0x233dd8: 0x928201bf  lbu         $v0, 0x1BF($s4)
    ctx->pc = 0x233dd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 447)));
label_233ddc:
    // 0x233ddc: 0x14400036  bnez        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x233DDCu;
    {
        const bool branch_taken_0x233ddc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x233DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233DDCu;
        // 0x233de0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233ddc) {
            ctx->pc = 0x233EB8u;
            goto label_233eb8;
        }
    }
    ctx->pc = 0x233DE4u;
    // 0x233de4: 0x12020010  beq         $s0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x233DE4u;
    {
        const bool branch_taken_0x233de4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x233DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233DE4u;
        // 0x233de8: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x233de4) {
            ctx->pc = 0x233E28u;
            goto label_233e28;
        }
    }
    ctx->pc = 0x233DECu;
    // 0x233dec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x233DECu;
    {
        const bool branch_taken_0x233dec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233DECu;
        // 0x233df0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233dec) {
            ctx->pc = 0x233E08u;
            goto label_233e08;
        }
    }
    ctx->pc = 0x233DF4u;
    // 0x233df4: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x233DF4u;
    {
        const bool branch_taken_0x233df4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x233df4) {
            ctx->pc = 0x233E18u;
            goto label_233e18;
        }
    }
    ctx->pc = 0x233DFCu;
    // 0x233dfc: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x233DFCu;
    {
        const bool branch_taken_0x233dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233DFCu;
        // 0x233e00: 0x96230050  lhu         $v1, 0x50($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233dfc) {
            ctx->pc = 0x233F84u;
            goto label_233f84;
        }
    }
    ctx->pc = 0x233E04u;
    // 0x233e04: 0x0  nop
    ctx->pc = 0x233e04u;
    // NOP
label_233e08:
    // 0x233e08: 0x12020025  beq         $s0, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x233E08u;
    {
        const bool branch_taken_0x233e08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x233e08) {
            ctx->pc = 0x233EA0u;
            goto label_233ea0;
        }
    }
    ctx->pc = 0x233E10u;
    // 0x233e10: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x233E10u;
    {
        const bool branch_taken_0x233e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233E10u;
        // 0x233e14: 0x96230050  lhu         $v1, 0x50($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233e10) {
            ctx->pc = 0x233F84u;
            goto label_233f84;
        }
    }
    ctx->pc = 0x233E18u;
label_233e18:
    // 0x233e18: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x233e18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x233e1c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x233e1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x233e20: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x233E20u;
    {
        const bool branch_taken_0x233e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x233e20) {
            ctx->pc = 0x233F48u;
            goto label_233f48;
        }
    }
    ctx->pc = 0x233E28u;
label_233e28:
    // 0x233e28: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x233e28u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x233e2c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x233e2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x233e30: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x233e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x233e34: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x233E34u;
    {
        const bool branch_taken_0x233e34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x233e34) {
            ctx->pc = 0x233E38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x233E34u;
            // 0x233e38: 0x46001807  neg.s       $f0, $f3 (Delay Slot)
            ctx->f[0] = FPU_NEG_S(ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x233E78u;
            goto label_233e78;
        }
    }
    ctx->pc = 0x233E3Cu;
    // 0x233e3c: 0x3c014780  lui         $at, 0x4780
    ctx->pc = 0x233e3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18304 << 16));
    // 0x233e40: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x233e40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x233e44: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x233e44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x233e48: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x233e48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x233e4c: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x233e4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x233e50: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x233e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x233e54: 0x0  nop
    ctx->pc = 0x233e54u;
    // NOP
    // 0x233e58: 0x0  nop
    ctx->pc = 0x233e58u;
    // NOP
    // 0x233e5c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x233e5cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x233e60: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x233e60u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x233e64: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x233e64u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x233e68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x233e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x233e6c: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x233E6Cu;
    {
        const bool branch_taken_0x233e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233E6Cu;
        // 0x233e70: 0xae220050  sw          $v0, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233e6c) {
            ctx->pc = 0x233F80u;
            goto label_233f80;
        }
    }
    ctx->pc = 0x233E74u;
    // 0x233e74: 0x0  nop
    ctx->pc = 0x233e74u;
    // NOP
label_233e78:
    // 0x233e78: 0x3c014780  lui         $at, 0x4780
    ctx->pc = 0x233e78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18304 << 16));
    // 0x233e7c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x233e7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x233e80: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x233e80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x233e84: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x233e84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x233e88: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x233e88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x233e8c: 0x0  nop
    ctx->pc = 0x233e8cu;
    // NOP
    // 0x233e90: 0x0  nop
    ctx->pc = 0x233e90u;
    // NOP
    // 0x233e94: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x233e94u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x233e98: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x233E98u;
    {
        const bool branch_taken_0x233e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233E98u;
        // 0x233e9c: 0x8e230050  lw          $v1, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233e98) {
            ctx->pc = 0x233F70u;
            goto label_233f70;
        }
    }
    ctx->pc = 0x233EA0u;
label_233ea0:
    // 0x233ea0: 0x3c014387  lui         $at, 0x4387
    ctx->pc = 0x233ea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17287 << 16));
    // 0x233ea4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x233ea4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x233ea8: 0x3c014780  lui         $at, 0x4780
    ctx->pc = 0x233ea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18304 << 16));
    // 0x233eac: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x233eacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x233eb0: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x233EB0u;
    {
        const bool branch_taken_0x233eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233EB0u;
        // 0x233eb4: 0x46001800  add.s       $f0, $f3, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x233eb0) {
            ctx->pc = 0x233F54u;
            goto label_233f54;
        }
    }
    ctx->pc = 0x233EB8u;
label_233eb8:
    // 0x233eb8: 0x12020011  beq         $s0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x233EB8u;
    {
        const bool branch_taken_0x233eb8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x233EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233EB8u;
        // 0x233ebc: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x233eb8) {
            ctx->pc = 0x233F00u;
            goto label_233f00;
        }
    }
    ctx->pc = 0x233EC0u;
    // 0x233ec0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x233EC0u;
    {
        const bool branch_taken_0x233ec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233EC0u;
        // 0x233ec4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233ec0) {
            ctx->pc = 0x233ED8u;
            goto label_233ed8;
        }
    }
    ctx->pc = 0x233EC8u;
    // 0x233ec8: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x233EC8u;
    {
        const bool branch_taken_0x233ec8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x233ec8) {
            ctx->pc = 0x233EE8u;
            goto label_233ee8;
        }
    }
    ctx->pc = 0x233ED0u;
    // 0x233ed0: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x233ED0u;
    {
        const bool branch_taken_0x233ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233ED0u;
        // 0x233ed4: 0x96230050  lhu         $v1, 0x50($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233ed0) {
            ctx->pc = 0x233F84u;
            goto label_233f84;
        }
    }
    ctx->pc = 0x233ED8u;
label_233ed8:
    // 0x233ed8: 0x12020019  beq         $s0, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x233ED8u;
    {
        const bool branch_taken_0x233ed8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x233ed8) {
            ctx->pc = 0x233F40u;
            goto label_233f40;
        }
    }
    ctx->pc = 0x233EE0u;
    // 0x233ee0: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x233EE0u;
    {
        const bool branch_taken_0x233ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233EE0u;
        // 0x233ee4: 0x96230050  lhu         $v1, 0x50($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233ee0) {
            ctx->pc = 0x233F84u;
            goto label_233f84;
        }
    }
    ctx->pc = 0x233EE8u;
label_233ee8:
    // 0x233ee8: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x233ee8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x233eec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x233eecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x233ef0: 0x3c014780  lui         $at, 0x4780
    ctx->pc = 0x233ef0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18304 << 16));
    // 0x233ef4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x233ef4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x233ef8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x233EF8u;
    {
        const bool branch_taken_0x233ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233EF8u;
        // 0x233efc: 0x46001800  add.s       $f0, $f3, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x233ef8) {
            ctx->pc = 0x233F54u;
            goto label_233f54;
        }
    }
    ctx->pc = 0x233F00u;
label_233f00:
    // 0x233f00: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x233f00u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x233f04: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x233f04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x233f08: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x233f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x233f0c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x233F0Cu;
    {
        const bool branch_taken_0x233f0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x233f0c) {
            ctx->pc = 0x233F30u;
            goto label_233f30;
        }
    }
    ctx->pc = 0x233F14u;
    // 0x233f14: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x233f14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x233f18: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x233f18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x233f1c: 0x3c014780  lui         $at, 0x4780
    ctx->pc = 0x233f1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18304 << 16));
    // 0x233f20: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x233f20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x233f24: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x233F24u;
    {
        const bool branch_taken_0x233f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233F24u;
        // 0x233f28: 0x46001800  add.s       $f0, $f3, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x233f24) {
            ctx->pc = 0x233F54u;
            goto label_233f54;
        }
    }
    ctx->pc = 0x233F2Cu;
    // 0x233f2c: 0x0  nop
    ctx->pc = 0x233f2cu;
    // NOP
label_233f30:
    // 0x233f30: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x233f30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x233f34: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x233f34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x233f38: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x233F38u;
    {
        const bool branch_taken_0x233f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x233f38) {
            ctx->pc = 0x233F48u;
            goto label_233f48;
        }
    }
    ctx->pc = 0x233F40u;
label_233f40:
    // 0x233f40: 0x3c014387  lui         $at, 0x4387
    ctx->pc = 0x233f40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17287 << 16));
    // 0x233f44: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x233f44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_233f48:
    // 0x233f48: 0x3c014780  lui         $at, 0x4780
    ctx->pc = 0x233f48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18304 << 16));
    // 0x233f4c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x233f4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x233f50: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x233f50u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_233f54:
    // 0x233f54: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x233f54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x233f58: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x233f58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x233f5c: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x233f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x233f60: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x233f60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x233f64: 0x0  nop
    ctx->pc = 0x233f64u;
    // NOP
    // 0x233f68: 0x0  nop
    ctx->pc = 0x233f68u;
    // NOP
    // 0x233f6c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x233f6cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_233f70:
    // 0x233f70: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x233f70u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x233f74: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x233f74u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x233f78: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x233f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x233f7c: 0xae230050  sw          $v1, 0x50($s1)
    ctx->pc = 0x233f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 3));
label_233f80:
    // 0x233f80: 0x96230050  lhu         $v1, 0x50($s1)
    ctx->pc = 0x233f80u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 80)));
label_233f84:
    // 0x233f84: 0x24027fff  addiu       $v0, $zero, 0x7FFF
    ctx->pc = 0x233f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x233f88: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x233f88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x233f8c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x233F8Cu;
    {
        const bool branch_taken_0x233f8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x233F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233F8Cu;
        // 0x233f90: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233f8c) {
            ctx->pc = 0x233FA8u;
            goto label_233fa8;
        }
    }
    ctx->pc = 0x233F94u;
    // 0x233f94: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x233f94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x233f98: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x233f98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x233f9c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x233F9Cu;
    {
        const bool branch_taken_0x233f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233F9Cu;
        // 0x233fa0: 0xc78085d0  lwc1        $f0, -0x7A30($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936016)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x233f9c) {
            ctx->pc = 0x233FB8u;
            goto label_233fb8;
        }
    }
    ctx->pc = 0x233FA4u;
    // 0x233fa4: 0x0  nop
    ctx->pc = 0x233fa4u;
    // NOP
label_233fa8:
    // 0x233fa8: 0xc78185d4  lwc1        $f1, -0x7A2C($gp)
    ctx->pc = 0x233fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936020)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x233fac: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x233facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x233fb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x233fb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x233fb4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x233fb4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_233fb8:
    // 0x233fb8: 0xc0474d0  jal         func_11D340
    ctx->pc = 0x233FB8u;
    SET_GPR_U32(ctx, 31, 0x233FC0u);
    ctx->pc = 0x233FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233FB8u;
    // 0x233fbc: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D340u, 0x233FB8u, 0x233FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233FC0u;
label_233fc0:
    // 0x233fc0: 0xc78185d8  lwc1        $f1, -0x7A28($gp)
    ctx->pc = 0x233fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x233fc4: 0x96230050  lhu         $v1, 0x50($s1)
    ctx->pc = 0x233fc4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x233fc8: 0x24027fff  addiu       $v0, $zero, 0x7FFF
    ctx->pc = 0x233fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x233fcc: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x233fccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x233fd0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x233FD0u;
    {
        const bool branch_taken_0x233fd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x233FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233FD0u;
        // 0x233fd4: 0x46010542  mul.s       $f21, $f0, $f1 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x233fd0) {
            ctx->pc = 0x233FE8u;
            goto label_233fe8;
        }
    }
    ctx->pc = 0x233FD8u;
    // 0x233fd8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x233fd8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x233fdc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x233fdcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x233fe0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x233FE0u;
    {
        const bool branch_taken_0x233fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233FE0u;
        // 0x233fe4: 0xc78085dc  lwc1        $f0, -0x7A24($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x233fe0) {
            ctx->pc = 0x233FFCu;
            goto label_233ffc;
        }
    }
    ctx->pc = 0x233FE8u;
label_233fe8:
    // 0x233fe8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x233fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x233fec: 0xc78185e0  lwc1        $f1, -0x7A20($gp)
    ctx->pc = 0x233fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x233ff0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x233ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x233ff4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x233ff4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x233ff8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x233ff8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_233ffc:
    // 0x233ffc: 0xc04746c  jal         func_11D1B0
    ctx->pc = 0x233FFCu;
    SET_GPR_U32(ctx, 31, 0x234004u);
    ctx->pc = 0x234000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233FFCu;
    // 0x234000: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D1B0u, 0x233FFCu, 0x234004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234004u;
label_234004:
    // 0x234004: 0xc78285e4  lwc1        $f2, -0x7A1C($gp)
    ctx->pc = 0x234004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x234008: 0xc6230070  lwc1        $f3, 0x70($s1)
    ctx->pc = 0x234008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x23400c: 0x2ea20006  sltiu       $v0, $s5, 0x6
    ctx->pc = 0x23400cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x234010: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x234010u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x234014: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x234014u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x234018: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x234018u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x23401c: 0xc6210078  lwc1        $f1, 0x78($s1)
    ctx->pc = 0x23401cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x234020: 0x461518c0  add.s       $f3, $f3, $f21
    ctx->pc = 0x234020u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[21]);
    // 0x234024: 0xc6240074  lwc1        $f4, 0x74($s1)
    ctx->pc = 0x234024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x234028: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x234028u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x23402c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x23402cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x234030: 0xe622006c  swc1        $f2, 0x6C($s1)
    ctx->pc = 0x234030u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 108), bits); }
    // 0x234034: 0xe6240064  swc1        $f4, 0x64($s1)
    ctx->pc = 0x234034u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 100), bits); }
    // 0x234038: 0xe6230060  swc1        $f3, 0x60($s1)
    ctx->pc = 0x234038u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 96), bits); }
    // 0x23403c: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x23403Cu;
    {
        const bool branch_taken_0x23403c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x234040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23403Cu;
        // 0x234040: 0xe6210068  swc1        $f1, 0x68($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 104), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23403c) {
            ctx->pc = 0x23417Cu;
            goto label_23417c;
        }
    }
    ctx->pc = 0x234044u;
    // 0x234044: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x234044u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x234048: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x234048u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x23404c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23404cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x234050: 0x8c637a80  lw          $v1, 0x7A80($v1)
    ctx->pc = 0x234050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31360)));
    // 0x234054: 0x600008  jr          $v1
    ctx->pc = 0x234054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x234060u: goto label_234060;
            case 0x2340A8u: goto label_2340a8;
            case 0x2340D8u: goto label_2340d8;
            case 0x234118u: goto label_234118;
            case 0x234148u: goto label_234148;
            case 0x23417Cu: goto label_23417c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234054u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x23405Cu;
    // 0x23405c: 0x0  nop
    ctx->pc = 0x23405cu;
    // NOP
label_234060:
    // 0x234060: 0xc08cb60  jal         func_232D80
    ctx->pc = 0x234060u;
    SET_GPR_U32(ctx, 31, 0x234068u);
    ctx->pc = 0x232D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232D80u, 0x234060u, 0x234068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234068u;
label_234068:
    // 0x234068: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x234068u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x23406c: 0x54400044  bnel        $v0, $zero, . + 4 + (0x44 << 2)
    ctx->pc = 0x23406Cu;
    {
        const bool branch_taken_0x23406c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23406c) {
            ctx->pc = 0x234070u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23406Cu;
            // 0x234070: 0xc6200064  lwc1        $f0, 0x64($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x234180u;
            goto label_234180;
        }
    }
    ctx->pc = 0x234074u;
    // 0x234074: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x234074u;
    SET_GPR_U32(ctx, 31, 0x23407Cu);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x234074u, 0x23407Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23407Cu;
label_23407c:
    // 0x23407c: 0x3c013000  lui         $at, 0x3000
    ctx->pc = 0x23407cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12288 << 16));
    // 0x234080: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x234080u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x234084: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x234084u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x234088: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x234088u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x23408c: 0x3c0143c8  lui         $at, 0x43C8
    ctx->pc = 0x23408cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17352 << 16));
    // 0x234090: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x234090u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x234094: 0x3c01c348  lui         $at, 0xC348
    ctx->pc = 0x234094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49992 << 16));
    // 0x234098: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x234098u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x23409c: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x23409Cu;
    {
        const bool branch_taken_0x23409c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2340A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23409Cu;
        // 0x2340a0: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23409c) {
            ctx->pc = 0x234174u;
            goto label_234174;
        }
    }
    ctx->pc = 0x2340A4u;
    // 0x2340a4: 0x0  nop
    ctx->pc = 0x2340a4u;
    // NOP
label_2340a8:
    // 0x2340a8: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x2340A8u;
    SET_GPR_U32(ctx, 31, 0x2340B0u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x2340A8u, 0x2340B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2340B0u;
label_2340b0:
    // 0x2340b0: 0x3c013000  lui         $at, 0x3000
    ctx->pc = 0x2340b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12288 << 16));
    // 0x2340b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2340b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2340b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2340b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2340bc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2340bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2340c0: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x2340c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x2340c4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2340c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2340c8: 0x3c01c3fa  lui         $at, 0xC3FA
    ctx->pc = 0x2340c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50170 << 16));
    // 0x2340cc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2340ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2340d0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2340D0u;
    {
        const bool branch_taken_0x2340d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2340D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2340D0u;
        // 0x2340d4: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2340d0) {
            ctx->pc = 0x234104u;
            goto label_234104;
        }
    }
    ctx->pc = 0x2340D8u;
label_2340d8:
    // 0x2340d8: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x2340D8u;
    SET_GPR_U32(ctx, 31, 0x2340E0u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x2340D8u, 0x2340E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2340E0u;
label_2340e0:
    // 0x2340e0: 0x3c013000  lui         $at, 0x3000
    ctx->pc = 0x2340e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12288 << 16));
    // 0x2340e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2340e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2340e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2340e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2340ec: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2340ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2340f0: 0x3c014396  lui         $at, 0x4396
    ctx->pc = 0x2340f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17302 << 16));
    // 0x2340f4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2340f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2340f8: 0x3c01c348  lui         $at, 0xC348
    ctx->pc = 0x2340f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49992 << 16));
    // 0x2340fc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2340fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x234100: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x234100u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_234104:
    // 0x234104: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x234104u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x234108: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x234108u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x23410c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x23410Cu;
    {
        const bool branch_taken_0x23410c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23410Cu;
        // 0x234110: 0x4601a501  sub.s       $f20, $f20, $f1 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23410c) {
            ctx->pc = 0x23417Cu;
            goto label_23417c;
        }
    }
    ctx->pc = 0x234114u;
    // 0x234114: 0x0  nop
    ctx->pc = 0x234114u;
    // NOP
label_234118:
    // 0x234118: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x234118u;
    SET_GPR_U32(ctx, 31, 0x234120u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x234118u, 0x234120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234120u;
label_234120:
    // 0x234120: 0x3c013000  lui         $at, 0x3000
    ctx->pc = 0x234120u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12288 << 16));
    // 0x234124: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x234124u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x234128: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x234128u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23412c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x23412cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x234130: 0x3c0144e1  lui         $at, 0x44E1
    ctx->pc = 0x234130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17633 << 16));
    // 0x234134: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x234134u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x234138: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x234138u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x23413c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x23413cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x234140: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x234140u;
    {
        const bool branch_taken_0x234140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234140u;
        // 0x234144: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x234140) {
            ctx->pc = 0x234174u;
            goto label_234174;
        }
    }
    ctx->pc = 0x234148u;
label_234148:
    // 0x234148: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x234148u;
    SET_GPR_U32(ctx, 31, 0x234150u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x234148u, 0x234150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234150u;
label_234150:
    // 0x234150: 0x3c013000  lui         $at, 0x3000
    ctx->pc = 0x234150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12288 << 16));
    // 0x234154: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x234154u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x234158: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x234158u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23415c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x23415cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x234160: 0x3c014448  lui         $at, 0x4448
    ctx->pc = 0x234160u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17480 << 16));
    // 0x234164: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x234164u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x234168: 0x3c014348  lui         $at, 0x4348
    ctx->pc = 0x234168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17224 << 16));
    // 0x23416c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x23416cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x234170: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x234170u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_234174:
    // 0x234174: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x234174u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x234178: 0x46020d00  add.s       $f20, $f1, $f2
    ctx->pc = 0x234178u;
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_23417c:
    // 0x23417c: 0xc6200064  lwc1        $f0, 0x64($s1)
    ctx->pc = 0x23417cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_234180:
    // 0x234180: 0x26320060  addiu       $s2, $s1, 0x60
    ctx->pc = 0x234180u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x234184: 0x26c4dda0  addiu       $a0, $s6, -0x2260
    ctx->pc = 0x234184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294958496));
    // 0x234188: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x234188u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23418c: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x23418cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x234190: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x234190u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234194: 0xc08db80  jal         func_236E00
    ctx->pc = 0x234194u;
    SET_GPR_U32(ctx, 31, 0x23419Cu);
    ctx->pc = 0x234198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234194u;
    // 0x234198: 0xe6200064  swc1        $f0, 0x64($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 100), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x236E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236E00u, 0x234194u, 0x23419Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23419Cu;
label_23419c:
    // 0x23419c: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x23419cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2341a0: 0x50400045  beql        $v0, $zero, . + 4 + (0x45 << 2)
    ctx->pc = 0x2341A0u;
    {
        const bool branch_taken_0x2341a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2341a0) {
            ctx->pc = 0x2341A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2341A0u;
            // 0x2341a4: 0x7a420000  lq          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2342B8u;
            goto label_2342b8;
        }
    }
    ctx->pc = 0x2341A8u;
    // 0x2341a8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2341a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2341ac: 0xc08c1e6  jal         func_230798
    ctx->pc = 0x2341ACu;
    SET_GPR_U32(ctx, 31, 0x2341B4u);
    ctx->pc = 0x2341B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2341ACu;
    // 0x2341b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230798u, 0x2341ACu, 0x2341B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2341B4u;
label_2341b4:
    // 0x2341b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2341b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2341b8: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2341b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2341bc: 0xc08c208  jal         func_230820
    ctx->pc = 0x2341BCu;
    SET_GPR_U32(ctx, 31, 0x2341C4u);
    ctx->pc = 0x2341C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2341BCu;
    // 0x2341c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x2341BCu, 0x2341C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2341C4u;
label_2341c4:
    // 0x2341c4: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x2341c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2341c8: 0xdbb00000  lqc2        $vf16, 0x0($sp)
    ctx->pc = 0x2341c8u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2341cc: 0xda1f0000  lqc2        $vf31, 0x0($s0)
    ctx->pc = 0x2341ccu;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2341d0: 0x4bff842c  vsub.xyzw   $vf16, $vf16, $vf31
    ctx->pc = 0x2341d0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[16], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2341d4: 0xf8500000  sqc2        $vf16, 0x0($v0)
    ctx->pc = 0x2341d4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2341d8: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x2341d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2341dc: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2341dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2341e0: 0xda500000  lqc2        $vf16, 0x0($s2)
    ctx->pc = 0x2341e0u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2341e4: 0xd85f0000  lqc2        $vf31, 0x0($v0)
    ctx->pc = 0x2341e4u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2341e8: 0x4bff842c  vsub.xyzw   $vf16, $vf16, $vf31
    ctx->pc = 0x2341e8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[16], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2341ec: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x2341ecu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2341f0: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x2341f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2341f4: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x2341f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2341f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2341f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2341fc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2341fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x234200: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x234200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x234204: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x234204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x234208: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x234208u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x23420c: 0x4602101e  madda.s     $f2, $f2
    ctx->pc = 0x23420cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[2])));
    // 0x234210: 0x4600005c  madd.s      $f1, $f0, $f0
    ctx->pc = 0x234210u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x234214: 0x460118d6  rsqrt.s     $f3, $f3, $f1
    ctx->pc = 0x234214u;
    ctx->f[3] = 1.0f / sqrtf(ctx->f[3]);
    // 0x234218: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x234218u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23421c: 0x4a20042c  vsub.w      $vf16, $vf0, $vf0
    ctx->pc = 0x23421cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x234220: 0x44031800  mfc1        $v1, $f3
    ctx->pc = 0x234220u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x234224: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x234224u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x234228: 0x4bc18418  vmulx.xyz   $vf16, $vf16, $vf1x
    ctx->pc = 0x234228u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x23422c: 0xf8500000  sqc2        $vf16, 0x0($v0)
    ctx->pc = 0x23422cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x234230: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x234230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x234234: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x234234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x234238: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x234238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x23423c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x23423cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x234240: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x234240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x234244: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x234244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x234248: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x234248u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x23424c: 0x4602101e  madda.s     $f2, $f2
    ctx->pc = 0x23424cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[2])));
    // 0x234250: 0x4600005c  madd.s      $f1, $f0, $f0
    ctx->pc = 0x234250u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x234254: 0x460118d6  rsqrt.s     $f3, $f3, $f1
    ctx->pc = 0x234254u;
    ctx->f[3] = 1.0f / sqrtf(ctx->f[3]);
    // 0x234258: 0xd8700000  lqc2        $vf16, 0x0($v1)
    ctx->pc = 0x234258u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23425c: 0x4a20042c  vsub.w      $vf16, $vf0, $vf0
    ctx->pc = 0x23425cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x234260: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x234260u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x234264: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x234264u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x234268: 0x4bc18418  vmulx.xyz   $vf16, $vf16, $vf1x
    ctx->pc = 0x234268u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x23426c: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x23426cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x234270: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x234270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x234274: 0xc7a60024  lwc1        $f6, 0x24($sp)
    ctx->pc = 0x234274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x234278: 0xc7a50028  lwc1        $f5, 0x28($sp)
    ctx->pc = 0x234278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x23427c: 0xc7a40030  lwc1        $f4, 0x30($sp)
    ctx->pc = 0x23427cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x234280: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x234280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x234284: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x234284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x234288: 0x4604181a  mula.s      $f3, $f4
    ctx->pc = 0x234288u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[4]));
    // 0x23428c: 0x4602301e  madda.s     $f6, $f2
    ctx->pc = 0x23428cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[6], ctx->f[2])));
    // 0x234290: 0x460028dc  madd.s      $f3, $f5, $f0
    ctx->pc = 0x234290u;
    ctx->f[3] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[5], ctx->f[0]));
    // 0x234294: 0xc78185e8  lwc1        $f1, -0x7A18($gp)
    ctx->pc = 0x234294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x234298: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x234298u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23429c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x23429Cu;
    {
        const bool branch_taken_0x23429c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23429c) {
            ctx->pc = 0x2342A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23429Cu;
            // 0x2342a0: 0xae200020  sw          $zero, 0x20($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2342A4u;
            goto label_2342a4;
        }
    }
    ctx->pc = 0x2342A4u;
label_2342a4:
    // 0x2342a4: 0x86820148  lh          $v0, 0x148($s4)
    ctx->pc = 0x2342a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 328)));
    // 0x2342a8: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x2342a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2342ac: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2342ACu;
    {
        const bool branch_taken_0x2342ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2342ac) {
            ctx->pc = 0x2342B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2342ACu;
            // 0x2342b0: 0xae200020  sw          $zero, 0x20($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2342B4u;
            goto label_2342b4;
        }
    }
    ctx->pc = 0x2342B4u;
label_2342b4:
    // 0x2342b4: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x2342b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_2342b8:
    // 0x2342b8: 0xc6200080  lwc1        $f0, 0x80($s1)
    ctx->pc = 0x2342b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2342bc: 0x7e220090  sq          $v0, 0x90($s1)
    ctx->pc = 0x2342bcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 144), GPR_VEC(ctx, 2));
    // 0x2342c0: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2342c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2342c4: 0x7a630000  lq          $v1, 0x0($s3)
    ctx->pc = 0x2342c4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2342c8: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x2342c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2342cc: 0xe62000b0  swc1        $f0, 0xB0($s1)
    ctx->pc = 0x2342ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 176), bits); }
    // 0x2342d0: 0x7e2300a0  sq          $v1, 0xA0($s1)
    ctx->pc = 0x2342d0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 160), GPR_VEC(ctx, 3));
    // 0x2342d4: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x2342d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2342d8: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x2342d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2342dc: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x2342dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2342e0: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x2342e0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2342e4: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2342e4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2342e8: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x2342e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2342ec: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x2342ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2342f0: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x2342f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2342f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2342F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2342F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2342F4u;
        // 0x2342f8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2342F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2342FCu;
    // 0x2342fc: 0x0  nop
    ctx->pc = 0x2342fcu;
    // NOP
label_234300:
    // 0x234300: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x234300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x234304: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x234304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x234308: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x234308u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23430c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x23430cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x234310: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x234310u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234314: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x234314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x234318: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x234318u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23431c: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x23431cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x234320: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x234320u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234324: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x234324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x234328: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x234328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x23432c: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x23432cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x234330: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x234330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x234334: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x234334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x234338: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x234338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x23433c: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x23433cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x234340: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x234340u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x234344: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x234344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x234348: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x234348u;
    {
        const bool branch_taken_0x234348 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x23434Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234348u;
        // 0x23434c: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234348) {
            ctx->pc = 0x234358u;
            goto label_234358;
        }
    }
    ctx->pc = 0x234350u;
    // 0x234350: 0x2a0f02d  daddu       $fp, $s5, $zero
    ctx->pc = 0x234350u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234354: 0x2c0902d  daddu       $s2, $s6, $zero
    ctx->pc = 0x234354u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_234358:
    // 0x234358: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x234358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x23435c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23435Cu;
    {
        const bool branch_taken_0x23435c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x234360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23435Cu;
        // 0x234360: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23435c) {
            ctx->pc = 0x23436Cu;
            goto label_23436c;
        }
    }
    ctx->pc = 0x234364u;
    // 0x234364: 0x2c0f02d  daddu       $fp, $s6, $zero
    ctx->pc = 0x234364u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234368: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x234368u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_23436c:
    // 0x23436c: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x23436cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x234370: 0x50400037  beql        $v0, $zero, . + 4 + (0x37 << 2)
    ctx->pc = 0x234370u;
    {
        const bool branch_taken_0x234370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x234370) {
            ctx->pc = 0x234374u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234370u;
            // 0x234374: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234450u;
            goto label_234450;
        }
    }
    ctx->pc = 0x234378u;
    // 0x234378: 0x26300024  addiu       $s0, $s1, 0x24
    ctx->pc = 0x234378u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
    // 0x23437c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x23437cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x234380: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x234380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x234384: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x234384u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x234388: 0x96a30166  lhu         $v1, 0x166($s5)
    ctx->pc = 0x234388u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 358)));
    // 0x23438c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x23438Cu;
    {
        const bool branch_taken_0x23438c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x234390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23438Cu;
        // 0x234390: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23438c) {
            ctx->pc = 0x2343E0u;
            goto label_2343e0;
        }
    }
    ctx->pc = 0x234394u;
    // 0x234394: 0x96c20166  lhu         $v0, 0x166($s6)
    ctx->pc = 0x234394u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 358)));
    // 0x234398: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x234398u;
    {
        const bool branch_taken_0x234398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23439Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234398u;
        // 0x23439c: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234398) {
            ctx->pc = 0x2343E4u;
            goto label_2343e4;
        }
    }
    ctx->pc = 0x2343A0u;
    // 0x2343a0: 0x86a20148  lh          $v0, 0x148($s5)
    ctx->pc = 0x2343a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 328)));
    // 0x2343a4: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2343A4u;
    {
        const bool branch_taken_0x2343a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2343a4) {
            ctx->pc = 0x2343E4u;
            goto label_2343e4;
        }
    }
    ctx->pc = 0x2343ACu;
    // 0x2343ac: 0x86c20148  lh          $v0, 0x148($s6)
    ctx->pc = 0x2343acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 328)));
    // 0x2343b0: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2343B0u;
    {
        const bool branch_taken_0x2343b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2343b0) {
            ctx->pc = 0x2343E4u;
            goto label_2343e4;
        }
    }
    ctx->pc = 0x2343B8u;
    // 0x2343b8: 0xc084334  jal         func_210CD0
    ctx->pc = 0x2343B8u;
    SET_GPR_U32(ctx, 31, 0x2343C0u);
    ctx->pc = 0x2343BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2343B8u;
    // 0x2343bc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210CD0u, 0x2343B8u, 0x2343C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2343C0u;
label_2343c0:
    // 0x2343c0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2343C0u;
    {
        const bool branch_taken_0x2343c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2343C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2343C0u;
        // 0x2343c4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2343c0) {
            ctx->pc = 0x2343E0u;
            goto label_2343e0;
        }
    }
    ctx->pc = 0x2343C8u;
    // 0x2343c8: 0xc084334  jal         func_210CD0
    ctx->pc = 0x2343C8u;
    SET_GPR_U32(ctx, 31, 0x2343D0u);
    ctx->pc = 0x2343CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2343C8u;
    // 0x2343cc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210CD0u, 0x2343C8u, 0x2343D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2343D0u;
label_2343d0:
    // 0x2343d0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2343D0u;
    {
        const bool branch_taken_0x2343d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2343D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2343D0u;
        // 0x2343d4: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2343d0) {
            ctx->pc = 0x2343DCu;
            goto label_2343dc;
        }
    }
    ctx->pc = 0x2343D8u;
    // 0x2343d8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2343d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2343dc:
    // 0x2343dc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2343dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2343e0:
    // 0x2343e0: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2343e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2343e4:
    // 0x2343e4: 0xc08cb86  jal         func_232E18
    ctx->pc = 0x2343E4u;
    SET_GPR_U32(ctx, 31, 0x2343ECu);
    ctx->pc = 0x2343E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2343E4u;
    // 0x2343e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232E18u, 0x2343E4u, 0x2343ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2343ECu;
label_2343ec:
    // 0x2343ec: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2343ECu;
    {
        const bool branch_taken_0x2343ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2343ec) {
            ctx->pc = 0x2343F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2343ECu;
            // 0x2343f0: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2343F4u;
            goto label_2343f4;
        }
    }
    ctx->pc = 0x2343F4u;
label_2343f4:
    // 0x2343f4: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x2343f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x2343f8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2343f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2343fc: 0x14620126  bne         $v1, $v0, . + 4 + (0x126 << 2)
    ctx->pc = 0x2343FCu;
    {
        const bool branch_taken_0x2343fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x234400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2343FCu;
        // 0x234400: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2343fc) {
            ctx->pc = 0x234898u;
            goto label_234898;
        }
    }
    ctx->pc = 0x234404u;
    // 0x234404: 0x17c00003  bnez        $fp, . + 4 + (0x3 << 2)
    ctx->pc = 0x234404u;
    {
        const bool branch_taken_0x234404 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x234408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234404u;
        // 0x234408: 0x8e270004  lw          $a3, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234404) {
            ctx->pc = 0x234414u;
            goto label_234414;
        }
    }
    ctx->pc = 0x23440Cu;
    // 0x23440c: 0x8e3e002c  lw          $fp, 0x2C($s1)
    ctx->pc = 0x23440cu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x234410: 0x8fd20060  lw          $s2, 0x60($fp)
    ctx->pc = 0x234410u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 96)));
label_234414:
    // 0x234414: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x234414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234418: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x234418u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23441c: 0xc08ceec  jal         func_233BB0
    ctx->pc = 0x23441Cu;
    SET_GPR_U32(ctx, 31, 0x234424u);
    ctx->pc = 0x234420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23441Cu;
    // 0x234420: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233BB0u;
    goto label_233bb0;
    ctx->pc = 0x234424u;
label_234424:
    // 0x234424: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x234424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x234428: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x234428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x23442c: 0x1462011a  bne         $v1, $v0, . + 4 + (0x11A << 2)
    ctx->pc = 0x23442Cu;
    {
        const bool branch_taken_0x23442c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x234430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23442Cu;
        // 0x234430: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23442c) {
            ctx->pc = 0x234898u;
            goto label_234898;
        }
    }
    ctx->pc = 0x234434u;
    // 0x234434: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x234434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x234438: 0x50400118  beql        $v0, $zero, . + 4 + (0x118 << 2)
    ctx->pc = 0x234438u;
    {
        const bool branch_taken_0x234438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x234438) {
            ctx->pc = 0x23443Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234438u;
            // 0x23443c: 0xdfb10028  ld          $s1, 0x28($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23489Cu;
            goto label_23489c;
        }
    }
    ctx->pc = 0x234440u;
    // 0x234440: 0xc08c686  jal         func_231A18
    ctx->pc = 0x234440u;
    SET_GPR_U32(ctx, 31, 0x234448u);
    ctx->pc = 0x231A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A18u, 0x234440u, 0x234448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234448u;
label_234448:
    // 0x234448: 0x10000113  b           . + 4 + (0x113 << 2)
    ctx->pc = 0x234448u;
    {
        const bool branch_taken_0x234448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23444Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234448u;
        // 0x23444c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234448) {
            ctx->pc = 0x234898u;
            goto label_234898;
        }
    }
    ctx->pc = 0x234450u;
label_234450:
    // 0x234450: 0x3c014234  lui         $at, 0x4234
    ctx->pc = 0x234450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16948 << 16));
    // 0x234454: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x234454u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x234458: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x234458u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23445c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x23445cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x234460: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x234460u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x234464: 0x4502003c  bc1fl       . + 4 + (0x3C << 2)
    ctx->pc = 0x234464u;
    {
        const bool branch_taken_0x234464 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x234464) {
            ctx->pc = 0x234468u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234464u;
            // 0x234468: 0x8e22001c  lw          $v0, 0x1C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234558u;
            goto label_234558;
        }
    }
    ctx->pc = 0x23446Cu;
    // 0x23446c: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x23446cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x234470: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x234470u;
    {
        const bool branch_taken_0x234470 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x234470) {
            ctx->pc = 0x234520u;
            goto label_234520;
        }
    }
    ctx->pc = 0x234478u;
    // 0x234478: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x234478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x23447c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23447Cu;
    {
        const bool branch_taken_0x23447c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23447c) {
            ctx->pc = 0x234498u;
            goto label_234498;
        }
    }
    ctx->pc = 0x234484u;
    // 0x234484: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x234484u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x234488: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x234488u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23448c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x23448Cu;
    {
        const bool branch_taken_0x23448c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23448Cu;
        // 0x234490: 0xe6200088  swc1        $f0, 0x88($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 136), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23448c) {
            ctx->pc = 0x2344B8u;
            goto label_2344b8;
        }
    }
    ctx->pc = 0x234494u;
    // 0x234494: 0x0  nop
    ctx->pc = 0x234494u;
    // NOP
label_234498:
    // 0x234498: 0xc78c85ec  lwc1        $f12, -0x7A14($gp)
    ctx->pc = 0x234498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23449c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x23449cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2344a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2344a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2344a4: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x2344a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2344a8: 0xc08cb1a  jal         func_232C68
    ctx->pc = 0x2344A8u;
    SET_GPR_U32(ctx, 31, 0x2344B0u);
    ctx->pc = 0x2344ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2344A8u;
    // 0x2344ac: 0x460c0b02  mul.s       $f12, $f1, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x232C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232C68u, 0x2344A8u, 0x2344B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2344B0u;
label_2344b0:
    // 0x2344b0: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x2344b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x2344b4: 0xe6200088  swc1        $f0, 0x88($s1)
    ctx->pc = 0x2344b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 136), bits); }
label_2344b8:
    // 0x2344b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2344b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2344bc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2344bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2344c0: 0xc78c85f0  lwc1        $f12, -0x7A10($gp)
    ctx->pc = 0x2344c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2344c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2344c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2344c8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2344c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2344cc: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x2344ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2344d0: 0xc08cb1a  jal         func_232C68
    ctx->pc = 0x2344D0u;
    SET_GPR_U32(ctx, 31, 0x2344D8u);
    ctx->pc = 0x2344D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2344D0u;
    // 0x2344d4: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x232C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232C68u, 0x2344D0u, 0x2344D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2344D8u;
label_2344d8:
    // 0x2344d8: 0xc6210088  lwc1        $f1, 0x88($s1)
    ctx->pc = 0x2344d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2344dc: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x2344dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x2344e0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2344e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2344e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2344e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2344e8: 0x28430032  slti        $v1, $v0, 0x32
    ctx->pc = 0x2344e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x2344ec: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x2344ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x2344f0: 0xe6210088  swc1        $f1, 0x88($s1)
    ctx->pc = 0x2344f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 136), bits); }
label_2344f4:
    // 0x2344f4: 0x5460002d  bnel        $v1, $zero, . + 4 + (0x2D << 2)
    ctx->pc = 0x2344F4u;
    {
        const bool branch_taken_0x2344f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2344f4) {
            ctx->pc = 0x2344F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2344F4u;
            // 0x2344f8: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2345ACu;
            goto label_2345ac;
        }
    }
    ctx->pc = 0x2344FCu;
    // 0x2344fc: 0x86a20148  lh          $v0, 0x148($s5)
    ctx->pc = 0x2344fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 328)));
    // 0x234500: 0x54400029  bnel        $v0, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x234500u;
    {
        const bool branch_taken_0x234500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x234500) {
            ctx->pc = 0x234504u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234500u;
            // 0x234504: 0xae200088  sw          $zero, 0x88($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2345A8u;
            goto label_2345a8;
        }
    }
    ctx->pc = 0x234508u;
    // 0x234508: 0x86c20148  lh          $v0, 0x148($s6)
    ctx->pc = 0x234508u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 328)));
    // 0x23450c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23450Cu;
    {
        const bool branch_taken_0x23450c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23450c) {
            ctx->pc = 0x234510u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23450Cu;
            // 0x234510: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234514u;
            goto label_234514;
        }
    }
    ctx->pc = 0x234514u;
label_234514:
    // 0x234514: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x234514u;
    {
        const bool branch_taken_0x234514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234514u;
        // 0x234518: 0xae200088  sw          $zero, 0x88($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234514) {
            ctx->pc = 0x2345A8u;
            goto label_2345a8;
        }
    }
    ctx->pc = 0x23451Cu;
    // 0x23451c: 0x0  nop
    ctx->pc = 0x23451cu;
    // NOP
label_234520:
    // 0x234520: 0x4502000d  bc1fl       . + 4 + (0xD << 2)
    ctx->pc = 0x234520u;
    {
        const bool branch_taken_0x234520 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x234520) {
            ctx->pc = 0x234524u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234520u;
            // 0x234524: 0x8e22001c  lw          $v0, 0x1C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234558u;
            goto label_234558;
        }
    }
    ctx->pc = 0x234528u;
    // 0x234528: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x234528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x23452c: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x23452Cu;
    {
        const bool branch_taken_0x23452c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23452c) {
            ctx->pc = 0x234598u;
            goto label_234598;
        }
    }
    ctx->pc = 0x234534u;
    // 0x234534: 0xc78c85f4  lwc1        $f12, -0x7A0C($gp)
    ctx->pc = 0x234534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936052)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x234538: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x234538u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x23453c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23453cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x234540: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x234540u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x234544: 0xc08cb1a  jal         func_232C68
    ctx->pc = 0x234544u;
    SET_GPR_U32(ctx, 31, 0x23454Cu);
    ctx->pc = 0x234548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234544u;
    // 0x234548: 0x460c0b02  mul.s       $f12, $f1, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x232C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232C68u, 0x234544u, 0x23454Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23454Cu;
label_23454c:
    // 0x23454c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x23454cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x234550: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x234550u;
    {
        const bool branch_taken_0x234550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234550u;
        // 0x234554: 0xe6200088  swc1        $f0, 0x88($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 136), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x234550) {
            ctx->pc = 0x2345ACu;
            goto label_2345ac;
        }
    }
    ctx->pc = 0x234558u;
label_234558:
    // 0x234558: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x234558u;
    {
        const bool branch_taken_0x234558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x234558) {
            ctx->pc = 0x234598u;
            goto label_234598;
        }
    }
    ctx->pc = 0x234560u;
    // 0x234560: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x234560u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x234564: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x234564u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x234568: 0xc78c85f8  lwc1        $f12, -0x7A08($gp)
    ctx->pc = 0x234568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23456c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23456cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x234570: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x234570u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x234574: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x234574u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x234578: 0xc08cb1a  jal         func_232C68
    ctx->pc = 0x234578u;
    SET_GPR_U32(ctx, 31, 0x234580u);
    ctx->pc = 0x23457Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234578u;
    // 0x23457c: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x232C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232C68u, 0x234578u, 0x234580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234580u;
label_234580:
    // 0x234580: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x234580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x234584: 0xe6200088  swc1        $f0, 0x88($s1)
    ctx->pc = 0x234584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 136), bits); }
    // 0x234588: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x234588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23458c: 0x28430032  slti        $v1, $v0, 0x32
    ctx->pc = 0x23458cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x234590: 0x1000ffd8  b           . + 4 + (-0x28 << 2)
    ctx->pc = 0x234590u;
    {
        const bool branch_taken_0x234590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234590u;
        // 0x234594: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234590) {
            ctx->pc = 0x2344F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2344f4;
        }
    }
    ctx->pc = 0x234598u;
label_234598:
    // 0x234598: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x234598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x23459c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23459cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2345a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2345A0u;
    {
        const bool branch_taken_0x2345a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2345A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2345A0u;
        // 0x2345a4: 0xe6200088  swc1        $f0, 0x88($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 136), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2345a0) {
            ctx->pc = 0x2345ACu;
            goto label_2345ac;
        }
    }
    ctx->pc = 0x2345A8u;
label_2345a8:
    // 0x2345a8: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2345a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2345ac:
    // 0x2345ac: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x2345ACu;
    {
        const bool branch_taken_0x2345ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2345B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2345ACu;
        // 0x2345b0: 0x3c13003b  lui         $s3, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2345ac) {
            ctx->pc = 0x2345E8u;
            goto label_2345e8;
        }
    }
    ctx->pc = 0x2345B4u;
    // 0x2345b4: 0x26300070  addiu       $s0, $s1, 0x70
    ctx->pc = 0x2345b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x2345b8: 0x26320090  addiu       $s2, $s1, 0x90
    ctx->pc = 0x2345b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x2345bc: 0x2664dda0  addiu       $a0, $s3, -0x2260
    ctx->pc = 0x2345bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294958496));
    // 0x2345c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2345c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2345c4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2345c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2345c8: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x2345c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2345cc: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x2345ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2345d0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2345d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2345d4: 0xc08dbea  jal         func_236FA8
    ctx->pc = 0x2345D4u;
    SET_GPR_U32(ctx, 31, 0x2345DCu);
    ctx->pc = 0x2345D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2345D4u;
    // 0x2345d8: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236FA8u, 0x2345D4u, 0x2345DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2345DCu;
label_2345dc:
    // 0x2345dc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2345DCu;
    {
        const bool branch_taken_0x2345dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2345E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2345DCu;
        // 0x2345e0: 0xc62c00b0  lwc1        $f12, 0xB0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2345dc) {
            ctx->pc = 0x234610u;
            goto label_234610;
        }
    }
    ctx->pc = 0x2345E4u;
    // 0x2345e4: 0x0  nop
    ctx->pc = 0x2345e4u;
    // NOP
label_2345e8:
    // 0x2345e8: 0x26300070  addiu       $s0, $s1, 0x70
    ctx->pc = 0x2345e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x2345ec: 0x2664dda0  addiu       $a0, $s3, -0x2260
    ctx->pc = 0x2345ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294958496));
    // 0x2345f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2345f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2345f4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2345f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2345f8: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x2345f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2345fc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2345fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234600: 0xc08dc2e  jal         func_2370B8
    ctx->pc = 0x234600u;
    SET_GPR_U32(ctx, 31, 0x234608u);
    ctx->pc = 0x234604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234600u;
    // 0x234604: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2370B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2370B8u, 0x234600u, 0x234608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234608u;
label_234608:
    // 0x234608: 0x26320090  addiu       $s2, $s1, 0x90
    ctx->pc = 0x234608u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x23460c: 0xc62c00b0  lwc1        $f12, 0xB0($s1)
    ctx->pc = 0x23460cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_234610:
    // 0x234610: 0x2664dda0  addiu       $a0, $s3, -0x2260
    ctx->pc = 0x234610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294958496));
    // 0x234614: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x234614u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234618: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x234618u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23461c: 0xe62c0080  swc1        $f12, 0x80($s1)
    ctx->pc = 0x23461cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 128), bits); }
    // 0x234620: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x234620u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234624: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x234624u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234628: 0xc08dc4a  jal         func_237128
    ctx->pc = 0x234628u;
    SET_GPR_U32(ctx, 31, 0x234630u);
    ctx->pc = 0x23462Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234628u;
    // 0x23462c: 0x263700a0  addiu       $s7, $s1, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237128u, 0x234628u, 0x234630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234630u;
label_234630:
    // 0x234630: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x234630u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234634: 0xda500000  lqc2        $vf16, 0x0($s2)
    ctx->pc = 0x234634u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x234638: 0xdaff0000  lqc2        $vf31, 0x0($s7)
    ctx->pc = 0x234638u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x23463c: 0x4bff842c  vsub.xyzw   $vf16, $vf16, $vf31
    ctx->pc = 0x23463cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[16], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x234640: 0xf8500000  sqc2        $vf16, 0x0($v0)
    ctx->pc = 0x234640u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x234644: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x234644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x234648: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x234648u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x23464c: 0xc7a50004  lwc1        $f5, 0x4($sp)
    ctx->pc = 0x23464cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x234650: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x234650u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234654: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x234654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x234658: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x234658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23465c: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x23465cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x234660: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x234660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x234664: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x234664u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x234668: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x234668u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x23466c: 0x4601089c  madd.s      $f2, $f1, $f1
    ctx->pc = 0x23466cu;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x234670: 0x46022116  rsqrt.s     $f4, $f4, $f2
    ctx->pc = 0x234670u;
    ctx->f[4] = 1.0f / sqrtf(ctx->f[4]);
    // 0x234674: 0xdbb00000  lqc2        $vf16, 0x0($sp)
    ctx->pc = 0x234674u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x234678: 0x4a20042c  vsub.w      $vf16, $vf0, $vf0
    ctx->pc = 0x234678u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x23467c: 0x44032000  mfc1        $v1, $f4
    ctx->pc = 0x23467cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x234680: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x234680u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x234684: 0x4bc18418  vmulx.xyz   $vf16, $vf16, $vf1x
    ctx->pc = 0x234684u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x234688: 0xf8500000  sqc2        $vf16, 0x0($v0)
    ctx->pc = 0x234688u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x23468c: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x23468cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234690: 0xdbb00000  lqc2        $vf16, 0x0($sp)
    ctx->pc = 0x234690u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x234694: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x234694u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x234698: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x234698u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x23469c: 0x4be18418  vmulx.xyzw  $vf16, $vf16, $vf1x
    ctx->pc = 0x23469cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2346a0: 0xf8500000  sqc2        $vf16, 0x0($v0)
    ctx->pc = 0x2346a0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2346a4: 0xe7a50004  swc1        $f5, 0x4($sp)
    ctx->pc = 0x2346a4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2346a8: 0x26240060  addiu       $a0, $s1, 0x60
    ctx->pc = 0x2346a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x2346ac: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x2346acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2346b0: 0x26220070  addiu       $v0, $s1, 0x70
    ctx->pc = 0x2346b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x2346b4: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x2346b4u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2346b8: 0xd87f0000  lqc2        $vf31, 0x0($v1)
    ctx->pc = 0x2346b8u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2346bc: 0x4bdf8428  vadd.xyz    $vf16, $vf16, $vf31
    ctx->pc = 0x2346bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2346c0: 0xf8900000  sqc2        $vf16, 0x0($a0)
    ctx->pc = 0x2346c0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2346c4: 0x26330060  addiu       $s3, $s1, 0x60
    ctx->pc = 0x2346c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x2346c8: 0x26340070  addiu       $s4, $s1, 0x70
    ctx->pc = 0x2346c8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x2346cc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2346ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2346d0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2346d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2346d4: 0x2444dda0  addiu       $a0, $v0, -0x2260
    ctx->pc = 0x2346d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958496));
    // 0x2346d8: 0xc08db80  jal         func_236E00
    ctx->pc = 0x2346D8u;
    SET_GPR_U32(ctx, 31, 0x2346E0u);
    ctx->pc = 0x2346DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2346D8u;
    // 0x2346dc: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236E00u, 0x2346D8u, 0x2346E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2346E0u;
label_2346e0:
    // 0x2346e0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2346e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2346e4: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2346E4u;
    {
        const bool branch_taken_0x2346e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2346E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2346E4u;
        // 0x2346e8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2346e4) {
            ctx->pc = 0x234758u;
            goto label_234758;
        }
    }
    ctx->pc = 0x2346ECu;
    // 0x2346ec: 0xc08cb0c  jal         func_232C30
    ctx->pc = 0x2346ECu;
    SET_GPR_U32(ctx, 31, 0x2346F4u);
    ctx->pc = 0x2346F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2346ECu;
    // 0x2346f0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232C30u, 0x2346ECu, 0x2346F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2346F4u;
label_2346f4:
    // 0x2346f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2346f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2346f8: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2346f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2346fc: 0xc08cb0c  jal         func_232C30
    ctx->pc = 0x2346FCu;
    SET_GPR_U32(ctx, 31, 0x234704u);
    ctx->pc = 0x234700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2346FCu;
    // 0x234700: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x232C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232C30u, 0x2346FCu, 0x234704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234704u;
label_234704:
    // 0x234704: 0xc79585fc  lwc1        $f21, -0x7A04($gp)
    ctx->pc = 0x234704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936060)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x234708: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x234708u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23470c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x23470Cu;
    {
        const bool branch_taken_0x23470c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x234710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23470Cu;
        // 0x234710: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23470c) {
            ctx->pc = 0x234718u;
            goto label_234718;
        }
    }
    ctx->pc = 0x234714u;
    // 0x234714: 0xc7958600  lwc1        $f21, -0x7A00($gp)
    ctx->pc = 0x234714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_234718:
    // 0x234718: 0xc62c0080  lwc1        $f12, 0x80($s1)
    ctx->pc = 0x234718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23471c: 0xc62d00b0  lwc1        $f13, 0xB0($s1)
    ctx->pc = 0x23471cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x234720: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x234720u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    // 0x234724: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x234724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234728: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x234728u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23472c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x23472cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234730: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x234730u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234734: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x234734u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234738: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x234738u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23473c: 0xc08daf8  jal         func_236BE0
    ctx->pc = 0x23473Cu;
    SET_GPR_U32(ctx, 31, 0x234744u);
    ctx->pc = 0x234740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23473Cu;
    // 0x234740: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236BE0u, 0x23473Cu, 0x234744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234744u;
label_234744:
    // 0x234744: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x234744u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x234748: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x234748u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23474c: 0xe6200080  swc1        $f0, 0x80($s1)
    ctx->pc = 0x23474cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 128), bits); }
    // 0x234750: 0x7e620000  sq          $v0, 0x0($s3)
    ctx->pc = 0x234750u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 2));
    // 0x234754: 0x7e830000  sq          $v1, 0x0($s4)
    ctx->pc = 0x234754u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 3));
label_234758:
    // 0x234758: 0x7a620000  lq          $v0, 0x0($s3)
    ctx->pc = 0x234758u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x23475c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23475cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x234760: 0xc7808604  lwc1        $f0, -0x79FC($gp)
    ctx->pc = 0x234760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936068)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x234764: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x234764u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
    // 0x234768: 0x7a830000  lq          $v1, 0x0($s4)
    ctx->pc = 0x234768u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x23476c: 0x7ee30000  sq          $v1, 0x0($s7)
    ctx->pc = 0x23476cu;
    WRITE128(ADD32(GPR_U32(ctx, 23), 0), GPR_VEC(ctx, 3));
    // 0x234770: 0xc62d0088  lwc1        $f13, 0x88($s1)
    ctx->pc = 0x234770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x234774: 0xc62c0080  lwc1        $f12, 0x80($s1)
    ctx->pc = 0x234774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x234778: 0x460d0034  c.lt.s      $f0, $f13
    ctx->pc = 0x234778u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23477c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x23477Cu;
    {
        const bool branch_taken_0x23477c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x234780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23477Cu;
        // 0x234780: 0xe62c00b0  swc1        $f12, 0xB0($s1) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 176), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23477c) {
            ctx->pc = 0x234788u;
            goto label_234788;
        }
    }
    ctx->pc = 0x234784u;
    // 0x234784: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x234784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_234788:
    // 0x234788: 0xae240018  sw          $a0, 0x18($s1)
    ctx->pc = 0x234788u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 4));
    // 0x23478c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23478cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234790: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x234790u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234794: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x234794u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234798: 0xc08cc4e  jal         func_233138
    ctx->pc = 0x234798u;
    SET_GPR_U32(ctx, 31, 0x2347A0u);
    ctx->pc = 0x23479Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234798u;
    // 0x23479c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233138u, 0x234798u, 0x2347A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2347A0u;
label_2347a0:
    // 0x2347a0: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x2347a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x2347a4: 0x1440003c  bnez        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x2347A4u;
    {
        const bool branch_taken_0x2347a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2347A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2347A4u;
        // 0x2347a8: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2347a4) {
            ctx->pc = 0x234898u;
            goto label_234898;
        }
    }
    ctx->pc = 0x2347ACu;
    // 0x2347ac: 0x53c0003b  beql        $fp, $zero, . + 4 + (0x3B << 2)
    ctx->pc = 0x2347ACu;
    {
        const bool branch_taken_0x2347ac = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x2347ac) {
            ctx->pc = 0x2347B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2347ACu;
            // 0x2347b0: 0xdfb10028  ld          $s1, 0x28($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23489Cu;
            goto label_23489c;
        }
    }
    ctx->pc = 0x2347B4u;
    // 0x2347b4: 0x87c20148  lh          $v0, 0x148($fp)
    ctx->pc = 0x2347b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 328)));
    // 0x2347b8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2347B8u;
    {
        const bool branch_taken_0x2347b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2347BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2347B8u;
        // 0x2347bc: 0x97d00166  lhu         $s0, 0x166($fp) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 358)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2347b8) {
            ctx->pc = 0x234804u;
            goto label_234804;
        }
    }
    ctx->pc = 0x2347C0u;
    // 0x2347c0: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x2347c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2347c4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2347C4u;
    {
        const bool branch_taken_0x2347c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2347C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2347C4u;
        // 0x2347c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2347c4) {
            ctx->pc = 0x2347DCu;
            goto label_2347dc;
        }
    }
    ctx->pc = 0x2347CCu;
    // 0x2347cc: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2347CCu;
    {
        const bool branch_taken_0x2347cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2347D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2347CCu;
        // 0x2347d0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2347cc) {
            ctx->pc = 0x2347DCu;
            goto label_2347dc;
        }
    }
    ctx->pc = 0x2347D4u;
    // 0x2347d4: 0x1602000c  bne         $s0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2347D4u;
    {
        const bool branch_taken_0x2347d4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2347D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2347D4u;
        // 0x2347d8: 0x3c03003b  lui         $v1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2347d4) {
            ctx->pc = 0x234808u;
            goto label_234808;
        }
    }
    ctx->pc = 0x2347DCu;
label_2347dc:
    // 0x2347dc: 0xc084334  jal         func_210CD0
    ctx->pc = 0x2347DCu;
    SET_GPR_U32(ctx, 31, 0x2347E4u);
    ctx->pc = 0x2347E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2347DCu;
    // 0x2347e0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210CD0u, 0x2347DCu, 0x2347E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2347E4u;
label_2347e4:
    // 0x2347e4: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x2347E4u;
    {
        const bool branch_taken_0x2347e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2347e4) {
            ctx->pc = 0x2347E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2347E4u;
            // 0x2347e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234830u;
            goto label_234830;
        }
    }
    ctx->pc = 0x2347ECu;
    // 0x2347ec: 0xc084334  jal         func_210CD0
    ctx->pc = 0x2347ECu;
    SET_GPR_U32(ctx, 31, 0x2347F4u);
    ctx->pc = 0x2347F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2347ECu;
    // 0x2347f0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210CD0u, 0x2347ECu, 0x2347F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2347F4u;
label_2347f4:
    // 0x2347f4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2347F4u;
    {
        const bool branch_taken_0x2347f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2347F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2347F4u;
        // 0x2347f8: 0x24020072  addiu       $v0, $zero, 0x72 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2347f4) {
            ctx->pc = 0x23482Cu;
            goto label_23482c;
        }
    }
    ctx->pc = 0x2347FCu;
    // 0x2347fc: 0x1202000c  beq         $s0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2347FCu;
    {
        const bool branch_taken_0x2347fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x234800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2347FCu;
        // 0x234800: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2347fc) {
            ctx->pc = 0x234830u;
            goto label_234830;
        }
    }
    ctx->pc = 0x234804u;
label_234804:
    // 0x234804: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x234804u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_234808:
    // 0x234808: 0x3c014416  lui         $at, 0x4416
    ctx->pc = 0x234808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17430 << 16));
    // 0x23480c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x23480cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x234810: 0x2462dda0  addiu       $v0, $v1, -0x2260
    ctx->pc = 0x234810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958496));
    // 0x234814: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x234814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x234818: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x234818u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23481c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x23481Cu;
    {
        const bool branch_taken_0x23481c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x234820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23481Cu;
        // 0x234820: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23481c) {
            ctx->pc = 0x234830u;
            goto label_234830;
        }
    }
    ctx->pc = 0x234824u;
    // 0x234824: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x234824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x234828: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x234828u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
label_23482c:
    // 0x23482c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23482cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_234830:
    // 0x234830: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x234830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234834: 0xc08cba0  jal         func_232E80
    ctx->pc = 0x234834u;
    SET_GPR_U32(ctx, 31, 0x23483Cu);
    ctx->pc = 0x234838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234834u;
    // 0x234838: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232E80u, 0x234834u, 0x23483Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23483Cu;
label_23483c:
    // 0x23483c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x23483Cu;
    {
        const bool branch_taken_0x23483c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x234840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23483Cu;
        // 0x234840: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23483c) {
            ctx->pc = 0x234864u;
            goto label_234864;
        }
    }
    ctx->pc = 0x234844u;
    // 0x234844: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x234844u;
    {
        const bool branch_taken_0x234844 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x234848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234844u;
        // 0x234848: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234844) {
            ctx->pc = 0x234864u;
            goto label_234864;
        }
    }
    ctx->pc = 0x23484Cu;
    // 0x23484c: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x23484cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x234850: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x234850u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x234854: 0x2464dda0  addiu       $a0, $v1, -0x2260
    ctx->pc = 0x234854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958496));
    // 0x234858: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x234858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23485c: 0xc08df28  jal         func_237CA0
    ctx->pc = 0x23485Cu;
    SET_GPR_U32(ctx, 31, 0x234864u);
    ctx->pc = 0x234860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23485Cu;
    // 0x234860: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237CA0u, 0x23485Cu, 0x234864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234864u;
label_234864:
    // 0x234864: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x234864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x234868: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x234868u;
    {
        const bool branch_taken_0x234868 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x23486Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234868u;
        // 0x23486c: 0x2a020004  slti        $v0, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x234868) {
            ctx->pc = 0x234894u;
            goto label_234894;
        }
    }
    ctx->pc = 0x234870u;
    // 0x234870: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x234870u;
    {
        const bool branch_taken_0x234870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x234870) {
            ctx->pc = 0x234874u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234870u;
            // 0x234874: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234898u;
            goto label_234898;
        }
    }
    ctx->pc = 0x234878u;
    // 0x234878: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x234878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23487c: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x23487cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x234880: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x234880u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x234884: 0x2464dda0  addiu       $a0, $v1, -0x2260
    ctx->pc = 0x234884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958496));
    // 0x234888: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x234888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23488c: 0xc08df28  jal         func_237CA0
    ctx->pc = 0x23488Cu;
    SET_GPR_U32(ctx, 31, 0x234894u);
    ctx->pc = 0x234890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23488Cu;
    // 0x234890: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237CA0u, 0x23488Cu, 0x234894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234894u;
label_234894:
    // 0x234894: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x234894u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_234898:
    // 0x234898: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x234898u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_23489c:
    // 0x23489c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x23489cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2348a0: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x2348a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2348a4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2348a4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2348a8: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x2348a8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2348ac: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x2348acu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2348b0: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x2348b0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2348b4: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x2348b4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2348b8: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x2348b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2348bc: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x2348bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2348c0: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x2348c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2348c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2348C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2348C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2348C4u;
        // 0x2348c8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2348C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2348CCu;
    // 0x2348cc: 0x0  nop
    ctx->pc = 0x2348ccu;
    // NOP
    ctx->pc = 0x2348d0u;
}
