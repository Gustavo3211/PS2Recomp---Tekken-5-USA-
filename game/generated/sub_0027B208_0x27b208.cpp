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

// Function: sub_0027B208
// Address: 0x27b208 - 0x27b388
void sub_0027B208_0x27b208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027B208_0x27b208");
#endif

    switch (ctx->pc) {
        case 0x27b244u: goto label_27b244;
        case 0x27b258u: goto label_27b258;
        case 0x27b264u: goto label_27b264;
        case 0x27b2bcu: goto label_27b2bc;
        case 0x27b2c8u: goto label_27b2c8;
        default: break;
    }

    ctx->pc = 0x27b208u;

    // 0x27b208: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x27b208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x27b20c: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x27b20cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x27b210: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x27b210u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b214: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x27b214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x27b218: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x27b218u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b21c: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x27b21cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x27b220: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x27b220u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b224: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x27b224u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x27b228: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x27b228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x27b22c: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x27b22cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x27b230: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x27b230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x27b234: 0x14600037  bnez        $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x27B234u;
    {
        const bool branch_taken_0x27b234 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27B238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B234u;
        // 0x27b238: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b234) {
            ctx->pc = 0x27B314u;
            goto label_27b314;
        }
    }
    ctx->pc = 0x27B23Cu;
    // 0x27b23c: 0xc0af12c  jal         func_2BC4B0
    ctx->pc = 0x27B23Cu;
    SET_GPR_U32(ctx, 31, 0x27B244u);
    ctx->pc = 0x2BC4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC4B0u, 0x27B23Cu, 0x27B244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B244u;
label_27b244:
    // 0x27b244: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27b244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b248: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x27b248u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b24c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x27b24cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x27b250: 0xc096b10  jal         func_25AC40
    ctx->pc = 0x27B250u;
    SET_GPR_U32(ctx, 31, 0x27B258u);
    ctx->pc = 0x27B254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B250u;
    // 0x27b254: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AC40u, 0x27B250u, 0x27B258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B258u;
label_27b258:
    // 0x27b258: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27b258u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b25c: 0xc0af21a  jal         func_2BC868
    ctx->pc = 0x27B25Cu;
    SET_GPR_U32(ctx, 31, 0x27B264u);
    ctx->pc = 0x27B260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B25Cu;
    // 0x27b260: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC868u, 0x27B25Cu, 0x27B264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B264u;
label_27b264:
    // 0x27b264: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x27b264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27b268: 0xc7848c40  lwc1        $f4, -0x73C0($gp)
    ctx->pc = 0x27b268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x27b26c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x27b26cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x27b270: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x27b270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27b274: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x27b274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27b278: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x27b278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27b27c: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x27b27cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x27b280: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x27b280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27b284: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x27b284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x27b288: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x27b288u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x27b28c: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x27b28cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x27b290: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x27b290u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x27b294: 0x9622000e  lhu         $v0, 0xE($s1)
    ctx->pc = 0x27b294u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x27b298: 0xe7a30028  swc1        $f3, 0x28($sp)
    ctx->pc = 0x27b298u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x27b29c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x27b29cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x27b2a0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x27b2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x27b2a4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x27b2a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x27b2a8: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x27b2a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x27b2ac: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x27b2acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x27b2b0: 0x4604a502  mul.s       $f20, $f20, $f4
    ctx->pc = 0x27b2b0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[4]);
    // 0x27b2b4: 0xc0474d0  jal         func_11D340
    ctx->pc = 0x27B2B4u;
    SET_GPR_U32(ctx, 31, 0x27B2BCu);
    ctx->pc = 0x27B2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B2B4u;
    // 0x27b2b8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D340u, 0x27B2B4u, 0x27B2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B2BCu;
label_27b2bc:
    // 0x27b2bc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x27b2bcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x27b2c0: 0xc04746c  jal         func_11D1B0
    ctx->pc = 0x27B2C0u;
    SET_GPR_U32(ctx, 31, 0x27B2C8u);
    ctx->pc = 0x27B2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B2C0u;
    // 0x27b2c4: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D1B0u, 0x27B2C0u, 0x27B2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B2C8u;
label_27b2c8:
    // 0x27b2c8: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x27b2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27b2cc: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x27b2ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27b2d0: 0x46150942  mul.s       $f5, $f1, $f21
    ctx->pc = 0x27b2d0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x27b2d4: 0xc6060000  lwc1        $f6, 0x0($s0)
    ctx->pc = 0x27b2d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x27b2d8: 0x460011c2  mul.s       $f7, $f2, $f0
    ctx->pc = 0x27b2d8u;
    ctx->f[7] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x27b2dc: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x27b2dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x27b2e0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x27b2e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27b2e4: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x27b2e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27b2e8: 0x46151082  mul.s       $f2, $f2, $f21
    ctx->pc = 0x27b2e8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
    // 0x27b2ec: 0xc6040008  lwc1        $f4, 0x8($s0)
    ctx->pc = 0x27b2ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x27b2f0: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x27b2f0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x27b2f4: 0x46072941  sub.s       $f5, $f5, $f7
    ctx->pc = 0x27b2f4u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[7]);
    // 0x27b2f8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x27b2f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x27b2fc: 0xe6030004  swc1        $f3, 0x4($s0)
    ctx->pc = 0x27b2fcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x27b300: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x27b300u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x27b304: 0x46013180  add.s       $f6, $f6, $f1
    ctx->pc = 0x27b304u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[1]);
    // 0x27b308: 0xe6040008  swc1        $f4, 0x8($s0)
    ctx->pc = 0x27b308u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x27b30c: 0xe6060000  swc1        $f6, 0x0($s0)
    ctx->pc = 0x27b30cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x27b310: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x27b310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_27b314:
    // 0x27b314: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x27B314u;
    {
        const bool branch_taken_0x27b314 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B314u;
        // 0x27b318: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b314) {
            ctx->pc = 0x27B338u;
            goto label_27b338;
        }
    }
    ctx->pc = 0x27B31Cu;
    // 0x27b31c: 0x2c62000c  sltiu       $v0, $v1, 0xC
    ctx->pc = 0x27b31cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x27b320: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27B320u;
    {
        const bool branch_taken_0x27b320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27B324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B320u;
        // 0x27b324: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b320) {
            ctx->pc = 0x27B338u;
            goto label_27b338;
        }
    }
    ctx->pc = 0x27B328u;
    // 0x27b328: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x27b328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x27b32c: 0x54620002  bnel        $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x27B32Cu;
    {
        const bool branch_taken_0x27b32c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x27b32c) {
            ctx->pc = 0x27B330u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27B32Cu;
            // 0x27b330: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27B338u;
            goto label_27b338;
        }
    }
    ctx->pc = 0x27B334u;
    // 0x27b334: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27b334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27b338:
    // 0x27b338: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x27B338u;
    {
        const bool branch_taken_0x27b338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b338) {
            ctx->pc = 0x27B33Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27B338u;
            // 0x27b33c: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27B368u;
            goto label_27b368;
        }
    }
    ctx->pc = 0x27B340u;
    // 0x27b340: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x27b340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27b344: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27b344u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x27b348: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x27b348u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x27b34c: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x27b34cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x27b350: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x27b350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27b354: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x27b354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x27b358: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x27b358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27b35c: 0xe602000c  swc1        $f2, 0xC($s0)
    ctx->pc = 0x27b35cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x27b360: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x27b360u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x27b364: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x27b364u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_27b368:
    // 0x27b368: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x27b368u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x27b36c: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x27b36cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27b370: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x27b370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x27b374: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x27b374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x27b378: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x27b378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27b37c: 0x3e00008  jr          $ra
    ctx->pc = 0x27B37Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27B380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B37Cu;
        // 0x27b380: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27B37Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27B384u;
    // 0x27b384: 0x0  nop
    ctx->pc = 0x27b384u;
    // NOP
    ctx->pc = 0x27b388u;
}
