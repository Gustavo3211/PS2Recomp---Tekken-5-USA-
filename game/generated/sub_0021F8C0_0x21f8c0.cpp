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

// Function: sub_0021F8C0
// Address: 0x21f8c0 - 0x21fc28
void sub_0021F8C0_0x21f8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021F8C0_0x21f8c0");
#endif

    switch (ctx->pc) {
        case 0x21f920u: goto label_21f920;
        case 0x21f954u: goto label_21f954;
        case 0x21f96cu: goto label_21f96c;
        case 0x21f9a8u: goto label_21f9a8;
        case 0x21f9bcu: goto label_21f9bc;
        case 0x21f9d0u: goto label_21f9d0;
        case 0x21f9dcu: goto label_21f9dc;
        case 0x21f9f4u: goto label_21f9f4;
        case 0x21fa00u: goto label_21fa00;
        case 0x21fa18u: goto label_21fa18;
        case 0x21fa58u: goto label_21fa58;
        case 0x21fa60u: goto label_21fa60;
        case 0x21faa0u: goto label_21faa0;
        case 0x21fb50u: goto label_21fb50;
        case 0x21fb58u: goto label_21fb58;
        case 0x21fb64u: goto label_21fb64;
        case 0x21fb6cu: goto label_21fb6c;
        case 0x21fb7cu: goto label_21fb7c;
        case 0x21fb90u: goto label_21fb90;
        case 0x21fb98u: goto label_21fb98;
        case 0x21fba4u: goto label_21fba4;
        case 0x21fbb0u: goto label_21fbb0;
        case 0x21fbd8u: goto label_21fbd8;
        case 0x21fbf8u: goto label_21fbf8;
        default: break;
    }

    ctx->pc = 0x21f8c0u;

    // 0x21f8c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x21f8c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x21f8c4: 0xaf80a488  sw          $zero, -0x5B78($gp)
    ctx->pc = 0x21f8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943880), GPR_U32(ctx, 0));
    // 0x21f8c8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x21f8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x21f8cc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x21f8ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f8d0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x21f8d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x21f8d4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x21f8d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f8d8: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x21f8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x21f8dc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x21f8dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f8e0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x21f8e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x21f8e4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x21f8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x21f8e8: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x21f8e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x21f8ec: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x21f8ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x21f8f0: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x21f8f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x21f8f4: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x21f8f4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x21f8f8: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x21f8f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x21f8fc: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x21f8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x21f900: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x21F900u;
    {
        const bool branch_taken_0x21f900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F900u;
        // 0x21f904: 0xaf82a488  sw          $v0, -0x5B78($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943880), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f900) {
            ctx->pc = 0x21FA28u;
            goto label_21fa28;
        }
    }
    ctx->pc = 0x21F908u;
    // 0x21f908: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x21f908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x21f90c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x21f90cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x21f910: 0x3c160015  lui         $s6, 0x15
    ctx->pc = 0x21f910u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)21 << 16));
    // 0x21f914: 0x2795a490  addiu       $s5, $gp, -0x5B70
    ctx->pc = 0x21f914u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943888));
    // 0x21f918: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x21f918u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x21f91c: 0x0  nop
    ctx->pc = 0x21f91cu;
    // NOP
label_21f920:
    // 0x21f920: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x21f920u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x21f924: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x21f924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x21f928: 0x1220c0  sll         $a0, $s2, 3
    ctx->pc = 0x21f928u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x21f92c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x21f92cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x21f930: 0x26c35e90  addiu       $v1, $s6, 0x5E90
    ctx->pc = 0x21f930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 24208));
    // 0x21f934: 0xa28021  addu        $s0, $a1, $v0
    ctx->pc = 0x21f934u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x21f938: 0x838821  addu        $s1, $a0, $v1
    ctx->pc = 0x21f938u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x21f93c: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x21f93cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x21f940: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x21f940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x21f944: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x21F944u;
    {
        const bool branch_taken_0x21f944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F944u;
        // 0x21f948: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f944) {
            ctx->pc = 0x21FA18u;
            goto label_21fa18;
        }
    }
    ctx->pc = 0x21F94Cu;
    // 0x21f94c: 0xc0c3122  jal         func_30C488
    ctx->pc = 0x21F94Cu;
    SET_GPR_U32(ctx, 31, 0x21F954u);
    ctx->pc = 0x30C488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C488u, 0x21F94Cu, 0x21F954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F954u;
label_21f954:
    // 0x21f954: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x21f954u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x21f958: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x21f958u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x21f95c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21F95Cu;
    {
        const bool branch_taken_0x21f95c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21F960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F95Cu;
        // 0x21f960: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f95c) {
            ctx->pc = 0x21F970u;
            goto label_21f970;
        }
    }
    ctx->pc = 0x21F964u;
    // 0x21f964: 0xc049dc0  jal         func_127700
    ctx->pc = 0x21F964u;
    SET_GPR_U32(ctx, 31, 0x21F96Cu);
    ctx->pc = 0x21F968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F964u;
    // 0x21f968: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127700u, 0x21F964u, 0x21F96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F96Cu;
label_21f96c:
    // 0x21f96c: 0x0  nop
    ctx->pc = 0x21f96cu;
    // NOP
label_21f970:
    // 0x21f970: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x21f970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21f974: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x21f974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x21f978: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x21f978u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x21f97c: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x21f97cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x21f980: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x21f980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21f984: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x21f984u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x21f988: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x21f988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x21f98c: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x21f98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21f990: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x21f990u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x21f994: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x21f994u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x21f998: 0xc614004c  lwc1        $f20, 0x4C($s0)
    ctx->pc = 0x21f998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x21f99c: 0x4615a502  mul.s       $f20, $f20, $f21
    ctx->pc = 0x21f99cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[21]);
    // 0x21f9a0: 0xc0c3124  jal         func_30C490
    ctx->pc = 0x21F9A0u;
    SET_GPR_U32(ctx, 31, 0x21F9A8u);
    ctx->pc = 0x21F9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F9A0u;
    // 0x21f9a4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C490u, 0x21F9A0u, 0x21F9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F9A8u;
label_21f9a8:
    // 0x21f9a8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x21f9a8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x21f9ac: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x21F9ACu;
    {
        const bool branch_taken_0x21f9ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21F9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F9ACu;
        // 0x21f9b0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f9ac) {
            ctx->pc = 0x21FA28u;
            goto label_21fa28;
        }
    }
    ctx->pc = 0x21F9B4u;
    // 0x21f9b4: 0xc0c3124  jal         func_30C490
    ctx->pc = 0x21F9B4u;
    SET_GPR_U32(ctx, 31, 0x21F9BCu);
    ctx->pc = 0x21F9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F9B4u;
    // 0x21f9b8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C490u, 0x21F9B4u, 0x21F9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F9BCu;
label_21f9bc:
    // 0x21f9bc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x21f9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x21f9c0: 0x92060051  lbu         $a2, 0x51($s0)
    ctx->pc = 0x21f9c0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 81)));
    // 0x21f9c4: 0x92070052  lbu         $a3, 0x52($s0)
    ctx->pc = 0x21f9c4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 82)));
    // 0x21f9c8: 0xc0c3212  jal         func_30C848
    ctx->pc = 0x21F9C8u;
    SET_GPR_U32(ctx, 31, 0x21F9D0u);
    ctx->pc = 0x21F9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F9C8u;
    // 0x21f9cc: 0x92050050  lbu         $a1, 0x50($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C848u, 0x21F9C8u, 0x21F9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F9D0u;
label_21f9d0:
    // 0x21f9d0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x21f9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x21f9d4: 0xc0c3216  jal         func_30C858
    ctx->pc = 0x21F9D4u;
    SET_GPR_U32(ctx, 31, 0x21F9DCu);
    ctx->pc = 0x21F9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F9D4u;
    // 0x21f9d8: 0xc60c0044  lwc1        $f12, 0x44($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C858u, 0x21F9D4u, 0x21F9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F9DCu;
label_21f9dc:
    // 0x21f9dc: 0x96020054  lhu         $v0, 0x54($s0)
    ctx->pc = 0x21f9dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x21f9e0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x21f9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x21f9e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21f9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x21f9e8: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x21f9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x21f9ec: 0xc0c3232  jal         func_30C8C8
    ctx->pc = 0x21F9ECu;
    SET_GPR_U32(ctx, 31, 0x21F9F4u);
    ctx->pc = 0x21F9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F9ECu;
    // 0x21f9f0: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C8C8u, 0x21F9ECu, 0x21F9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F9F4u;
label_21f9f4:
    // 0x21f9f4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x21f9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x21f9f8: 0xc0c3316  jal         func_30CC58
    ctx->pc = 0x21F9F8u;
    SET_GPR_U32(ctx, 31, 0x21FA00u);
    ctx->pc = 0x21F9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F9F8u;
    // 0x21f9fc: 0x92050053  lbu         $a1, 0x53($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 83)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30CC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30CC58u, 0x21F9F8u, 0x21FA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FA00u;
label_21fa00:
    // 0x21fa00: 0x96020056  lhu         $v0, 0x56($s0)
    ctx->pc = 0x21fa00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 86)));
    // 0x21fa04: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x21fa04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x21fa08: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21fa08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x21fa0c: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x21fa0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x21fa10: 0xc0c3320  jal         func_30CC80
    ctx->pc = 0x21FA10u;
    SET_GPR_U32(ctx, 31, 0x21FA18u);
    ctx->pc = 0x21FA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FA10u;
    // 0x21fa14: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30CC80u, 0x21FA10u, 0x21FA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FA18u;
label_21fa18:
    // 0x21fa18: 0x8f82a488  lw          $v0, -0x5B78($gp)
    ctx->pc = 0x21fa18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943880)));
    // 0x21fa1c: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x21fa1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x21fa20: 0x1440ffbf  bnez        $v0, . + 4 + (-0x41 << 2)
    ctx->pc = 0x21FA20u;
    {
        const bool branch_taken_0x21fa20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21FA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FA20u;
        // 0x21fa24: 0x121040  sll         $v0, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fa20) {
            ctx->pc = 0x21F920u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21f920;
        }
    }
    ctx->pc = 0x21FA28u;
label_21fa28:
    // 0x21fa28: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x21fa28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21fa2c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x21fa2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21fa30: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x21fa30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21fa34: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x21fa34u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21fa38: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x21fa38u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21fa3c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x21fa3cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x21fa40: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x21fa40u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21fa44: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x21fa44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x21fa48: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x21fa48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x21fa4c: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x21fa4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x21fa50: 0x3e00008  jr          $ra
    ctx->pc = 0x21FA50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21FA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FA50u;
        // 0x21fa54: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21FA50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21FA58u;
label_21fa58:
    // 0x21fa58: 0x3e00008  jr          $ra
    ctx->pc = 0x21FA58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21FA58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21FA60u;
label_21fa60:
    // 0x21fa60: 0x8f85a488  lw          $a1, -0x5B78($gp)
    ctx->pc = 0x21fa60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943880)));
    // 0x21fa64: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x21fa64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x21fa68: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x21fa68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x21fa6c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x21fa6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fa70: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x21fa70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x21fa74: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x21fa74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x21fa78: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x21fa78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x21fa7c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x21fa7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x21fa80: 0x10a0004f  beqz        $a1, . + 4 + (0x4F << 2)
    ctx->pc = 0x21FA80u;
    {
        const bool branch_taken_0x21fa80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FA80u;
        // 0x21fa84: 0xe7b40038  swc1        $f20, 0x38($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fa80) {
            ctx->pc = 0x21FBC0u;
            goto label_21fbc0;
        }
    }
    ctx->pc = 0x21FA88u;
    // 0x21fa88: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x21fa88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x21fa8c: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x21fa8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x21fa90: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x21fa90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x21fa94: 0x24535e94  addiu       $s3, $v0, 0x5E94
    ctx->pc = 0x21fa94u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 24212));
    // 0x21fa98: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x21fa98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x21fa9c: 0x0  nop
    ctx->pc = 0x21fa9cu;
    // NOP
label_21faa0:
    // 0x21faa0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x21faa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x21faa4: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x21faa4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21faa8: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x21faa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x21faac: 0x10600041  beqz        $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x21FAACu;
    {
        const bool branch_taken_0x21faac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FAACu;
        // 0x21fab0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21faac) {
            ctx->pc = 0x21FBB4u;
            goto label_21fbb4;
        }
    }
    ctx->pc = 0x21FAB4u;
    // 0x21fab4: 0xc6030014  lwc1        $f3, 0x14($s0)
    ctx->pc = 0x21fab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21fab8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x21fab8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21fabc: 0x3c014780  lui         $at, 0x4780
    ctx->pc = 0x21fabcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18304 << 16));
    // 0x21fac0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x21fac0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21fac4: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x21fac4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21fac8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x21fac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x21facc: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x21faccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x21fad0: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x21fad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x21fad4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x21fad4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x21fad8: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x21fad8u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x21fadc: 0x0  nop
    ctx->pc = 0x21fadcu;
    // NOP
    // 0x21fae0: 0x0  nop
    ctx->pc = 0x21fae0u;
    // NOP
    // 0x21fae4: 0x46020043  div.s       $f1, $f0, $f2
    ctx->pc = 0x21fae4u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[2];
    // 0x21fae8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x21FAE8u;
    {
        const bool branch_taken_0x21fae8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21FAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FAE8u;
        // 0x21faec: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fae8) {
            ctx->pc = 0x21FB00u;
            goto label_21fb00;
        }
    }
    ctx->pc = 0x21FAF0u;
    // 0x21faf0: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x21faf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x21faf4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x21faf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21faf8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x21FAF8u;
    {
        const bool branch_taken_0x21faf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FAF8u;
        // 0x21fafc: 0x46000800  add.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21faf8) {
            ctx->pc = 0x21FB0Cu;
            goto label_21fb0c;
        }
    }
    ctx->pc = 0x21FB00u;
label_21fb00:
    // 0x21fb00: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x21fb00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x21fb04: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x21fb04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21fb08: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x21fb08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_21fb0c:
    // 0x21fb0c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x21fb0cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x21fb10: 0x44110800  mfc1        $s1, $f1
    ctx->pc = 0x21fb10u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x21fb14: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x21fb14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21fb18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21fb18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21fb1c: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x21fb1cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x21fb20: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x21fb20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x21fb24: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x21fb24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21fb28: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x21fb28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x21fb2c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x21fb2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x21fb30: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x21fb30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21fb34: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x21fb34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x21fb38: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x21fb38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x21fb3c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x21fb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x21fb40: 0x14430011  bne         $v0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x21FB40u;
    {
        const bool branch_taken_0x21fb40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x21fb40) {
            ctx->pc = 0x21FB88u;
            goto label_21fb88;
        }
    }
    ctx->pc = 0x21FB48u;
    // 0x21fb48: 0xc0c46f8  jal         func_311BE0
    ctx->pc = 0x21FB48u;
    SET_GPR_U32(ctx, 31, 0x21FB50u);
    ctx->pc = 0x311BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311BE0u, 0x21FB48u, 0x21FB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FB50u;
label_21fb50:
    // 0x21fb50: 0xc0c46ca  jal         func_311B28
    ctx->pc = 0x21FB50u;
    SET_GPR_U32(ctx, 31, 0x21FB58u);
    ctx->pc = 0x21FB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FB50u;
    // 0x21fb54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x311B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311B28u, 0x21FB50u, 0x21FB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FB58u;
label_21fb58:
    // 0x21fb58: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x21fb58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x21fb5c: 0xc0c46e2  jal         func_311B88
    ctx->pc = 0x21FB5Cu;
    SET_GPR_U32(ctx, 31, 0x21FB64u);
    ctx->pc = 0x21FB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FB5Cu;
    // 0x21fb60: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x311B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311B88u, 0x21FB5Cu, 0x21FB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FB64u;
label_21fb64:
    // 0x21fb64: 0xc0c46fa  jal         func_311BE8
    ctx->pc = 0x21FB64u;
    SET_GPR_U32(ctx, 31, 0x21FB6Cu);
    ctx->pc = 0x21FB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FB64u;
    // 0x21fb68: 0xc60c0018  lwc1        $f12, 0x18($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x311BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311BE8u, 0x21FB64u, 0x21FB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FB6Cu;
label_21fb6c:
    // 0x21fb6c: 0x2405fff2  addiu       $a1, $zero, -0xE
    ctx->pc = 0x21fb6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967282));
    // 0x21fb70: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x21fb70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fb74: 0xc0c46fc  jal         func_311BF0
    ctx->pc = 0x21FB74u;
    SET_GPR_U32(ctx, 31, 0x21FB7Cu);
    ctx->pc = 0x21FB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FB74u;
    // 0x21fb78: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x311BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311BF0u, 0x21FB74u, 0x21FB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FB7Cu;
label_21fb7c:
    // 0x21fb7c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x21FB7Cu;
    {
        const bool branch_taken_0x21fb7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FB7Cu;
        // 0x21fb80: 0x8f85a488  lw          $a1, -0x5B78($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943880)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fb7c) {
            ctx->pc = 0x21FBB4u;
            goto label_21fbb4;
        }
    }
    ctx->pc = 0x21FB84u;
    // 0x21fb84: 0x0  nop
    ctx->pc = 0x21fb84u;
    // NOP
label_21fb88:
    // 0x21fb88: 0xc0c4a08  jal         func_312820
    ctx->pc = 0x21FB88u;
    SET_GPR_U32(ctx, 31, 0x21FB90u);
    ctx->pc = 0x21FB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FB88u;
    // 0x21fb8c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312820u, 0x21FB88u, 0x21FB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FB90u;
label_21fb90:
    // 0x21fb90: 0xc0c49e8  jal         func_3127A0
    ctx->pc = 0x21FB90u;
    SET_GPR_U32(ctx, 31, 0x21FB98u);
    ctx->pc = 0x21FB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FB90u;
    // 0x21fb94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3127A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3127A0u, 0x21FB90u, 0x21FB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FB98u;
label_21fb98:
    // 0x21fb98: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x21fb98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x21fb9c: 0xc0c49f2  jal         func_3127C8
    ctx->pc = 0x21FB9Cu;
    SET_GPR_U32(ctx, 31, 0x21FBA4u);
    ctx->pc = 0x21FBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FB9Cu;
    // 0x21fba0: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3127C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3127C8u, 0x21FB9Cu, 0x21FBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FBA4u;
label_21fba4:
    // 0x21fba4: 0x2404fff2  addiu       $a0, $zero, -0xE
    ctx->pc = 0x21fba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967282));
    // 0x21fba8: 0xc0c4a0a  jal         func_312828
    ctx->pc = 0x21FBA8u;
    SET_GPR_U32(ctx, 31, 0x21FBB0u);
    ctx->pc = 0x21FBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FBA8u;
    // 0x21fbac: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312828u, 0x21FBA8u, 0x21FBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FBB0u;
label_21fbb0:
    // 0x21fbb0: 0x8f85a488  lw          $a1, -0x5B78($gp)
    ctx->pc = 0x21fbb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943880)));
label_21fbb4:
    // 0x21fbb4: 0x245102b  sltu        $v0, $s2, $a1
    ctx->pc = 0x21fbb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x21fbb8: 0x1440ffb9  bnez        $v0, . + 4 + (-0x47 << 2)
    ctx->pc = 0x21FBB8u;
    {
        const bool branch_taken_0x21fbb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21FBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FBB8u;
        // 0x21fbbc: 0x1210c0  sll         $v0, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fbb8) {
            ctx->pc = 0x21FAA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21faa0;
        }
    }
    ctx->pc = 0x21FBC0u;
label_21fbc0:
    // 0x21fbc0: 0x10a00011  beqz        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x21FBC0u;
    {
        const bool branch_taken_0x21fbc0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FBC0u;
        // 0x21fbc4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fbc0) {
            ctx->pc = 0x21FC08u;
            goto label_21fc08;
        }
    }
    ctx->pc = 0x21FBC8u;
    // 0x21fbc8: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x21fbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x21fbcc: 0x24505e90  addiu       $s0, $v0, 0x5E90
    ctx->pc = 0x21fbccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 24208));
    // 0x21fbd0: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x21fbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x21fbd4: 0x0  nop
    ctx->pc = 0x21fbd4u;
    // NOP
label_21fbd8:
    // 0x21fbd8: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x21fbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x21fbdc: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x21fbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x21fbe0: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x21fbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x21fbe4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21FBE4u;
    {
        const bool branch_taken_0x21fbe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FBE4u;
        // 0x21fbe8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fbe4) {
            ctx->pc = 0x21FBFCu;
            goto label_21fbfc;
        }
    }
    ctx->pc = 0x21FBECu;
    // 0x21fbec: 0x8c650048  lw          $a1, 0x48($v1)
    ctx->pc = 0x21fbecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x21fbf0: 0xc0c323e  jal         func_30C8F8
    ctx->pc = 0x21FBF0u;
    SET_GPR_U32(ctx, 31, 0x21FBF8u);
    ctx->pc = 0x21FBF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FBF0u;
    // 0x21fbf4: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C8F8u, 0x21FBF0u, 0x21FBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FBF8u;
label_21fbf8:
    // 0x21fbf8: 0x8f85a488  lw          $a1, -0x5B78($gp)
    ctx->pc = 0x21fbf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943880)));
label_21fbfc:
    // 0x21fbfc: 0x245102b  sltu        $v0, $s2, $a1
    ctx->pc = 0x21fbfcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x21fc00: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x21FC00u;
    {
        const bool branch_taken_0x21fc00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21FC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FC00u;
        // 0x21fc04: 0x1210c0  sll         $v0, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fc00) {
            ctx->pc = 0x21FBD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21fbd8;
        }
    }
    ctx->pc = 0x21FC08u;
label_21fc08:
    // 0x21fc08: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x21fc08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21fc0c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x21fc0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21fc10: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x21fc10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21fc14: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x21fc14u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21fc18: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x21fc18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21fc1c: 0xc7b40038  lwc1        $f20, 0x38($sp)
    ctx->pc = 0x21fc1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x21fc20: 0x3e00008  jr          $ra
    ctx->pc = 0x21FC20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21FC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FC20u;
        // 0x21fc24: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21FC20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21FC28u;
}
