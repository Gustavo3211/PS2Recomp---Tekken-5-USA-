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

// Function: sub_00357F48
// Address: 0x357f48 - 0x358078
void sub_00357F48_0x357f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00357F48_0x357f48");
#endif

    switch (ctx->pc) {
        case 0x357f84u: goto label_357f84;
        case 0x357fe8u: goto label_357fe8;
        case 0x35804cu: goto label_35804c;
        default: break;
    }

    ctx->pc = 0x357f48u;

    // 0x357f48: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x357f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x357f4c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x357f4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x357f50: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x357f50u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x357f54: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x357f54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357f58: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x357f58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x357f5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x357f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x357f60: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x357f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x357f64: 0x3c11001c  lui         $s1, 0x1C
    ctx->pc = 0x357f64u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)28 << 16));
    // 0x357f68: 0x2631e780  addiu       $s1, $s1, -0x1880
    ctx->pc = 0x357f68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961024));
    // 0x357f6c: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x357f6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x357f70: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x357f70u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x357f74: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x357f74u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x357f78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x357f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x357f7c: 0xc0d60da  jal         func_358368
    ctx->pc = 0x357F7Cu;
    SET_GPR_U32(ctx, 31, 0x357F84u);
    ctx->pc = 0x357F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357F7Cu;
    // 0x357f80: 0x58403  sra         $s0, $a1, 16 (Delay Slot)
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x358368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358368u, 0x357F7Cu, 0x357F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357F84u;
label_357f84:
    // 0x357f84: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x357F84u;
    {
        const bool branch_taken_0x357f84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x357f84) {
            ctx->pc = 0x357F88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x357F84u;
            // 0x357f88: 0xa6300008  sh          $s0, 0x8($s1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 17), 8), (uint16_t)GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x357F98u;
            goto label_357f98;
        }
    }
    ctx->pc = 0x357F8Cu;
    // 0x357f8c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x357f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x357f90: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x357F90u;
    {
        const bool branch_taken_0x357f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x357F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357F90u;
        // 0x357f94: 0x34420007  ori         $v0, $v0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x357f90) {
            ctx->pc = 0x357FA0u;
            goto label_357fa0;
        }
    }
    ctx->pc = 0x357F98u;
label_357f98:
    // 0x357f98: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x357f98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357f9c: 0xe6340004  swc1        $f20, 0x4($s1)
    ctx->pc = 0x357f9cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_357fa0:
    // 0x357fa0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x357fa0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x357fa4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x357fa4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x357fa8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x357fa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x357fac: 0xc7b40018  lwc1        $f20, 0x18($sp)
    ctx->pc = 0x357facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x357fb0: 0x3e00008  jr          $ra
    ctx->pc = 0x357FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x357FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357FB0u;
        // 0x357fb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x357FB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x357FB8u;
    // 0x357fb8: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x357fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x357fbc: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x357fbcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x357fc0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x357fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357fc4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x357fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x357fc8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x357fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x357fcc: 0x3c10001c  lui         $s0, 0x1C
    ctx->pc = 0x357fccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)28 << 16));
    // 0x357fd0: 0x2610e780  addiu       $s0, $s0, -0x1880
    ctx->pc = 0x357fd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961024));
    // 0x357fd4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x357fd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x357fd8: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x357fd8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x357fdc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x357fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x357fe0: 0xc0d60da  jal         func_358368
    ctx->pc = 0x357FE0u;
    SET_GPR_U32(ctx, 31, 0x357FE8u);
    ctx->pc = 0x357FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357FE0u;
    // 0x357fe4: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x358368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358368u, 0x357FE0u, 0x357FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357FE8u;
label_357fe8:
    // 0x357fe8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x357FE8u;
    {
        const bool branch_taken_0x357fe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x357fe8) {
            ctx->pc = 0x357FECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x357FE8u;
            // 0x357fec: 0xe6140004  swc1        $f20, 0x4($s0) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x358000u;
            goto label_358000;
        }
    }
    ctx->pc = 0x357FF0u;
    // 0x357ff0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x357ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x357ff4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x357FF4u;
    {
        const bool branch_taken_0x357ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x357FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357FF4u;
        // 0x357ff8: 0x34420007  ori         $v0, $v0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x357ff4) {
            ctx->pc = 0x358004u;
            goto label_358004;
        }
    }
    ctx->pc = 0x357FFCu;
    // 0x357ffc: 0x0  nop
    ctx->pc = 0x357ffcu;
    // NOP
label_358000:
    // 0x358000: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x358000u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_358004:
    // 0x358004: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x358004u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x358008: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x358008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35800c: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x35800cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x358010: 0x3e00008  jr          $ra
    ctx->pc = 0x358010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x358014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358010u;
        // 0x358014: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x358010u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x358018u;
    // 0x358018: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x358018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x35801c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35801cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x358020: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x358020u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x358024: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x358024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358028: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x358028u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x35802c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35802cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x358030: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x358030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x358034: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x358034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x358038: 0x3c10001c  lui         $s0, 0x1C
    ctx->pc = 0x358038u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)28 << 16));
    // 0x35803c: 0x2610e780  addiu       $s0, $s0, -0x1880
    ctx->pc = 0x35803cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961024));
    // 0x358040: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x358040u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x358044: 0xc0d60da  jal         func_358368
    ctx->pc = 0x358044u;
    SET_GPR_U32(ctx, 31, 0x35804Cu);
    ctx->pc = 0x358048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358044u;
    // 0x358048: 0x58c03  sra         $s1, $a1, 16 (Delay Slot)
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x358368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358368u, 0x358044u, 0x35804Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35804Cu;
label_35804c:
    // 0x35804c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x35804Cu;
    {
        const bool branch_taken_0x35804c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35804c) {
            ctx->pc = 0x358050u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35804Cu;
            // 0x358050: 0xa6110008  sh          $s1, 0x8($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x358060u;
            goto label_358060;
        }
    }
    ctx->pc = 0x358054u;
    // 0x358054: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x358054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x358058: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x358058u;
    {
        const bool branch_taken_0x358058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35805Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358058u;
        // 0x35805c: 0x34420007  ori         $v0, $v0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x358058) {
            ctx->pc = 0x358064u;
            goto label_358064;
        }
    }
    ctx->pc = 0x358060u;
label_358060:
    // 0x358060: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x358060u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_358064:
    // 0x358064: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x358064u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x358068: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x358068u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35806c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35806cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x358070: 0x3e00008  jr          $ra
    ctx->pc = 0x358070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x358074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358070u;
        // 0x358074: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x358070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x358078u;
}
