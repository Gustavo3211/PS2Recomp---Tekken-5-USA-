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

// Function: sub_00207FF0
// Address: 0x207ff0 - 0x208280
void sub_00207FF0_0x207ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00207FF0_0x207ff0");
#endif

    switch (ctx->pc) {
        case 0x20802cu: goto label_20802c;
        case 0x208038u: goto label_208038;
        case 0x20806cu: goto label_20806c;
        case 0x2080d0u: goto label_2080d0;
        case 0x2080f0u: goto label_2080f0;
        case 0x208140u: goto label_208140;
        case 0x20815cu: goto label_20815c;
        case 0x208188u: goto label_208188;
        case 0x2081a4u: goto label_2081a4;
        case 0x2081d4u: goto label_2081d4;
        default: break;
    }

    ctx->pc = 0x207ff0u;

    // 0x207ff0: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x207ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x207ff4: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x207ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x207ff8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x207ff8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207ffc: 0xffb60130  sd          $s6, 0x130($sp)
    ctx->pc = 0x207ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 22));
    // 0x208000: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x208000u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208004: 0xffb70138  sd          $s7, 0x138($sp)
    ctx->pc = 0x208004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 23));
    // 0x208008: 0xffb10108  sd          $s1, 0x108($sp)
    ctx->pc = 0x208008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 17));
    // 0x20800c: 0xffb20110  sd          $s2, 0x110($sp)
    ctx->pc = 0x20800cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 18));
    // 0x208010: 0xffb30118  sd          $s3, 0x118($sp)
    ctx->pc = 0x208010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 19));
    // 0x208014: 0xffb40120  sd          $s4, 0x120($sp)
    ctx->pc = 0x208014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 20));
    // 0x208018: 0xffb50128  sd          $s5, 0x128($sp)
    ctx->pc = 0x208018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 21));
    // 0x20801c: 0xffbe0140  sd          $fp, 0x140($sp)
    ctx->pc = 0x20801cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 30));
    // 0x208020: 0xffbf0148  sd          $ra, 0x148($sp)
    ctx->pc = 0x208020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 31));
    // 0x208024: 0xc08eaea  jal         func_23ABA8
    ctx->pc = 0x208024u;
    SET_GPR_U32(ctx, 31, 0x20802Cu);
    ctx->pc = 0x208028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208024u;
    // 0x208028: 0xafa600f0  sw          $a2, 0xF0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23ABA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23ABA8u, 0x208024u, 0x20802Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20802Cu;
label_20802c:
    // 0x20802c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x20802cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208030: 0xc08b8ae  jal         func_22E2B8
    ctx->pc = 0x208030u;
    SET_GPR_U32(ctx, 31, 0x208038u);
    ctx->pc = 0x208034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208030u;
    // 0x208034: 0xafa000f4  sw          $zero, 0xF4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E2B8u, 0x208030u, 0x208038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208038u;
label_208038:
    // 0x208038: 0x14400084  bnez        $v0, . + 4 + (0x84 << 2)
    ctx->pc = 0x208038u;
    {
        const bool branch_taken_0x208038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20803Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208038u;
        // 0x20803c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208038) {
            ctx->pc = 0x20824Cu;
            goto label_20824c;
        }
    }
    ctx->pc = 0x208040u;
    // 0x208040: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x208040u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x208044: 0x27b400d0  addiu       $s4, $sp, 0xD0
    ctx->pc = 0x208044u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x208048: 0x27be00e0  addiu       $fp, $sp, 0xE0
    ctx->pc = 0x208048u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x20804c: 0x7e820000  sq          $v0, 0x0($s4)
    ctx->pc = 0x20804cu;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 2));
    // 0x208050: 0x12e00003  beqz        $s7, . + 4 + (0x3 << 2)
    ctx->pc = 0x208050u;
    {
        const bool branch_taken_0x208050 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x208054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208050u;
        // 0x208054: 0x7fc20000  sq          $v0, 0x0($fp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 30), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208050) {
            ctx->pc = 0x208060u;
            goto label_208060;
        }
    }
    ctx->pc = 0x208058u;
    // 0x208058: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x208058u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
    // 0x20805c: 0xafa000d8  sw          $zero, 0xD8($sp)
    ctx->pc = 0x20805cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 0));
label_208060:
    // 0x208060: 0x27b00090  addiu       $s0, $sp, 0x90
    ctx->pc = 0x208060u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x208064: 0xc0849c0  jal         func_212700
    ctx->pc = 0x208064u;
    SET_GPR_U32(ctx, 31, 0x20806Cu);
    ctx->pc = 0x208068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208064u;
    // 0x208068: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212700u, 0x208064u, 0x20806Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20806Cu;
label_20806c:
    // 0x20806c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20806cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x208070: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x208070u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x208074: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x208074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x208078: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x208078u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20807c: 0xc7a100d8  lwc1        $f1, 0xD8($sp)
    ctx->pc = 0x20807cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x208080: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x208080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208084: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x208084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x208088: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x208088u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20808c: 0xe7a100c8  swc1        $f1, 0xC8($sp)
    ctx->pc = 0x20808cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x208090: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x208090u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x208094: 0xe7a200cc  swc1        $f2, 0xCC($sp)
    ctx->pc = 0x208094u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x208098: 0xafa000c4  sw          $zero, 0xC4($sp)
    ctx->pc = 0x208098u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 0));
    // 0x20809c: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x20809cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2080a0: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x2080a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2080a4: 0x7ba800a0  lq          $t0, 0xA0($sp)
    ctx->pc = 0x2080a4u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2080a8: 0x7ba700c0  lq          $a3, 0xC0($sp)
    ctx->pc = 0x2080a8u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2080ac: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x2080acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x2080b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2080b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2080b4: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2080b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x2080b8: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x2080b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x2080bc: 0x7fa80010  sq          $t0, 0x10($sp)
    ctx->pc = 0x2080bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 8));
    // 0x2080c0: 0x7fa70030  sq          $a3, 0x30($sp)
    ctx->pc = 0x2080c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 7));
    // 0x2080c4: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2080c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2080c8: 0xc089164  jal         func_224590
    ctx->pc = 0x2080C8u;
    SET_GPR_U32(ctx, 31, 0x2080D0u);
    ctx->pc = 0x2080CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2080C8u;
    // 0x2080cc: 0xafa90070  sw          $t1, 0x70($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224590u, 0x2080C8u, 0x2080D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2080D0u;
label_2080d0:
    // 0x2080d0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2080d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2080d4: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x2080d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2080d8: 0x2444d420  addiu       $a0, $v0, -0x2BE0
    ctx->pc = 0x2080d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
    // 0x2080dc: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x2080dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x2080e0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2080e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2080e4: 0x8c8307f8  lw          $v1, 0x7F8($a0)
    ctx->pc = 0x2080e4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3ADC18u));
    // 0x2080e8: 0x10430057  beq         $v0, $v1, . + 4 + (0x57 << 2)
    ctx->pc = 0x2080E8u;
    {
        const bool branch_taken_0x2080e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2080ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2080E8u;
        // 0x2080ec: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2080e8) {
            ctx->pc = 0x208248u;
            goto label_208248;
        }
    }
    ctx->pc = 0x2080F0u;
label_2080f0:
    // 0x2080f0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2080f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2080f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2080f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2080f8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2080f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2080fc: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x2080fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x208100: 0x2c62000b  sltiu       $v0, $v1, 0xB
    ctx->pc = 0x208100u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x208104: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x208104u;
    {
        const bool branch_taken_0x208104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208104u;
        // 0x208108: 0x8c930058  lw          $s3, 0x58($a0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208104) {
            ctx->pc = 0x2081B0u;
            goto label_2081b0;
        }
    }
    ctx->pc = 0x20810Cu;
    // 0x20810c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x20810cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x208110: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x208110u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x208114: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x208114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x208118: 0x8c634310  lw          $v1, 0x4310($v1)
    ctx->pc = 0x208118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17168)));
    // 0x20811c: 0x600008  jr          $v1
    ctx->pc = 0x20811Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x208128u: goto label_208128;
            case 0x208170u: goto label_208170;
            case 0x2081B0u: goto label_2081b0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20811Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x208124u;
    // 0x208124: 0x0  nop
    ctx->pc = 0x208124u;
    // NOP
label_208128:
    // 0x208128: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x208128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x20812c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x20812cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208130: 0x8c520010  lw          $s2, 0x10($v0)
    ctx->pc = 0x208130u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x208134: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x208134u;
    {
        const bool branch_taken_0x208134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208134u;
        // 0x208138: 0x24500020  addiu       $s0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208134) {
            ctx->pc = 0x208144u;
            goto label_208144;
        }
    }
    ctx->pc = 0x20813Cu;
    // 0x20813c: 0x0  nop
    ctx->pc = 0x20813cu;
    // NOP
label_208140:
    // 0x208140: 0x26100050  addiu       $s0, $s0, 0x50
    ctx->pc = 0x208140u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_208144:
    // 0x208144: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x208144u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x208148: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x208148u;
    {
        const bool branch_taken_0x208148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x208148) {
            ctx->pc = 0x2081B0u;
            goto label_2081b0;
        }
    }
    ctx->pc = 0x208150u;
    // 0x208150: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x208150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208154: 0xc081fe2  jal         func_207F88
    ctx->pc = 0x208154u;
    SET_GPR_U32(ctx, 31, 0x20815Cu);
    ctx->pc = 0x208158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208154u;
    // 0x208158: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207F88u, 0x208154u, 0x20815Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20815Cu;
label_20815c:
    // 0x20815c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20815cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208160: 0x50a0fff7  beql        $a1, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x208160u;
    {
        const bool branch_taken_0x208160 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x208160) {
            ctx->pc = 0x208164u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208160u;
            // 0x208164: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208140u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_208140;
        }
    }
    ctx->pc = 0x208168u;
    // 0x208168: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x208168u;
    {
        const bool branch_taken_0x208168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x208168) {
            ctx->pc = 0x2081B0u;
            goto label_2081b0;
        }
    }
    ctx->pc = 0x208170u;
label_208170:
    // 0x208170: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x208170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x208174: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x208174u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208178: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x208178u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20817c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x20817Cu;
    {
        const bool branch_taken_0x20817c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20817Cu;
        // 0x208180: 0x24500010  addiu       $s0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20817c) {
            ctx->pc = 0x20818Cu;
            goto label_20818c;
        }
    }
    ctx->pc = 0x208184u;
    // 0x208184: 0x0  nop
    ctx->pc = 0x208184u;
    // NOP
label_208188:
    // 0x208188: 0x26100050  addiu       $s0, $s0, 0x50
    ctx->pc = 0x208188u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_20818c:
    // 0x20818c: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x20818cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x208190: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x208190u;
    {
        const bool branch_taken_0x208190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x208190) {
            ctx->pc = 0x2081B0u;
            goto label_2081b0;
        }
    }
    ctx->pc = 0x208198u;
    // 0x208198: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x208198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20819c: 0xc081fe2  jal         func_207F88
    ctx->pc = 0x20819Cu;
    SET_GPR_U32(ctx, 31, 0x2081A4u);
    ctx->pc = 0x2081A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20819Cu;
    // 0x2081a0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207F88u, 0x20819Cu, 0x2081A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2081A4u;
label_2081a4:
    // 0x2081a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2081a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2081a8: 0x50a0fff7  beql        $a1, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2081A8u;
    {
        const bool branch_taken_0x2081a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2081a8) {
            ctx->pc = 0x2081ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2081A8u;
            // 0x2081ac: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208188u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_208188;
        }
    }
    ctx->pc = 0x2081B0u;
label_2081b0:
    // 0x2081b0: 0x50a0001e  beql        $a1, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x2081B0u;
    {
        const bool branch_taken_0x2081b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2081b0) {
            ctx->pc = 0x2081B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2081B0u;
            // 0x2081b4: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20822Cu;
            goto label_20822c;
        }
    }
    ctx->pc = 0x2081B8u;
    // 0x2081b8: 0x5260001c  beql        $s3, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x2081B8u;
    {
        const bool branch_taken_0x2081b8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2081b8) {
            ctx->pc = 0x2081BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2081B8u;
            // 0x2081bc: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20822Cu;
            goto label_20822c;
        }
    }
    ctx->pc = 0x2081C0u;
    // 0x2081c0: 0x8e62006c  lw          $v0, 0x6C($s3)
    ctx->pc = 0x2081c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
    // 0x2081c4: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x2081C4u;
    {
        const bool branch_taken_0x2081c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2081c4) {
            ctx->pc = 0x2081C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2081C4u;
            // 0x2081c8: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20822Cu;
            goto label_20822c;
        }
    }
    ctx->pc = 0x2081CCu;
    // 0x2081cc: 0xc08b634  jal         func_22D8D0
    ctx->pc = 0x2081CCu;
    SET_GPR_U32(ctx, 31, 0x2081D4u);
    ctx->pc = 0x2081D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2081CCu;
    // 0x2081d0: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D8D0u, 0x2081CCu, 0x2081D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2081D4u;
label_2081d4:
    // 0x2081d4: 0x96c2003c  lhu         $v0, 0x3C($s6)
    ctx->pc = 0x2081d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 60)));
    // 0x2081d8: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x2081d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x2081dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2081dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2081e0: 0x26c40640  addiu       $a0, $s6, 0x640
    ctx->pc = 0x2081e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 1600));
    // 0x2081e4: 0x8e63006c  lw          $v1, 0x6C($s3)
    ctx->pc = 0x2081e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
    // 0x2081e8: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x2081e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x2081ec: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x2081ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2081f0: 0xac620020  sw          $v0, 0x20($v1)
    ctx->pc = 0x2081f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
    // 0x2081f4: 0x7bc20000  lq          $v0, 0x0($fp)
    ctx->pc = 0x2081f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2081f8: 0xa0650030  sb          $a1, 0x30($v1)
    ctx->pc = 0x2081f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 48), (uint8_t)GPR_U32(ctx, 5));
    // 0x2081fc: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2081FCu;
    {
        const bool branch_taken_0x2081fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x208200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2081FCu;
        // 0x208200: 0x7c620010  sq          $v0, 0x10($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2081fc) {
            ctx->pc = 0x208218u;
            goto label_208218;
        }
    }
    ctx->pc = 0x208204u;
    // 0x208204: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x208204u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x208208: 0xa0650031  sb          $a1, 0x31($v1)
    ctx->pc = 0x208208u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 49), (uint8_t)GPR_U32(ctx, 5));
    // 0x20820c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x20820Cu;
    {
        const bool branch_taken_0x20820c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20820Cu;
        // 0x208210: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20820c) {
            ctx->pc = 0x20821Cu;
            goto label_20821c;
        }
    }
    ctx->pc = 0x208214u;
    // 0x208214: 0x0  nop
    ctx->pc = 0x208214u;
    // NOP
label_208218:
    // 0x208218: 0xa0600031  sb          $zero, 0x31($v1)
    ctx->pc = 0x208218u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 49), (uint8_t)GPR_U32(ctx, 0));
label_20821c:
    // 0x20821c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20821cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x208220: 0x16e00009  bnez        $s7, . + 4 + (0x9 << 2)
    ctx->pc = 0x208220u;
    {
        const bool branch_taken_0x208220 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x208224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208220u;
        // 0x208224: 0xafa400f4  sw          $a0, 0xF4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208220) {
            ctx->pc = 0x208248u;
            goto label_208248;
        }
    }
    ctx->pc = 0x208228u;
    // 0x208228: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x208228u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
label_20822c:
    // 0x20822c: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x20822cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x208230: 0x2483d420  addiu       $v1, $a0, -0x2BE0
    ctx->pc = 0x208230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956064));
    // 0x208234: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x208234u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208238: 0x8c6407f8  lw          $a0, 0x7F8($v1)
    ctx->pc = 0x208238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2040)));
    // 0x20823c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x20823cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x208240: 0x1444ffab  bne         $v0, $a0, . + 4 + (-0x55 << 2)
    ctx->pc = 0x208240u;
    {
        const bool branch_taken_0x208240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x208244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208240u;
        // 0x208244: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208240) {
            ctx->pc = 0x2080F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2080f0;
        }
    }
    ctx->pc = 0x208248u;
label_208248:
    // 0x208248: 0x8fa200f4  lw          $v0, 0xF4($sp)
    ctx->pc = 0x208248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
label_20824c:
    // 0x20824c: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x20824cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x208250: 0xdfb10108  ld          $s1, 0x108($sp)
    ctx->pc = 0x208250u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x208254: 0xdfb20110  ld          $s2, 0x110($sp)
    ctx->pc = 0x208254u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x208258: 0xdfb30118  ld          $s3, 0x118($sp)
    ctx->pc = 0x208258u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x20825c: 0xdfb40120  ld          $s4, 0x120($sp)
    ctx->pc = 0x20825cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x208260: 0xdfb50128  ld          $s5, 0x128($sp)
    ctx->pc = 0x208260u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x208264: 0xdfb60130  ld          $s6, 0x130($sp)
    ctx->pc = 0x208264u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x208268: 0xdfb70138  ld          $s7, 0x138($sp)
    ctx->pc = 0x208268u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x20826c: 0xdfbe0140  ld          $fp, 0x140($sp)
    ctx->pc = 0x20826cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x208270: 0xdfbf0148  ld          $ra, 0x148($sp)
    ctx->pc = 0x208270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x208274: 0x3e00008  jr          $ra
    ctx->pc = 0x208274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208274u;
        // 0x208278: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20827Cu;
    // 0x20827c: 0x0  nop
    ctx->pc = 0x20827cu;
    // NOP
    ctx->pc = 0x208280u;
}
