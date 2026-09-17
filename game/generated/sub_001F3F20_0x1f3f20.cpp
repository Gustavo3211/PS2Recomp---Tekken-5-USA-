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

// Function: sub_001F3F20
// Address: 0x1f3f20 - 0x1f40c8
void sub_001F3F20_0x1f3f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F3F20_0x1f3f20");
#endif

    switch (ctx->pc) {
        case 0x1f3f34u: goto label_1f3f34;
        case 0x1f3f40u: goto label_1f3f40;
        case 0x1f3f48u: goto label_1f3f48;
        case 0x1f3f50u: goto label_1f3f50;
        case 0x1f3f58u: goto label_1f3f58;
        case 0x1f3f70u: goto label_1f3f70;
        case 0x1f3fd0u: goto label_1f3fd0;
        case 0x1f3fe8u: goto label_1f3fe8;
        case 0x1f4000u: goto label_1f4000;
        case 0x1f4008u: goto label_1f4008;
        case 0x1f4040u: goto label_1f4040;
        case 0x1f4050u: goto label_1f4050;
        case 0x1f40a0u: goto label_1f40a0;
        case 0x1f40a8u: goto label_1f40a8;
        default: break;
    }

    ctx->pc = 0x1f3f20u;

    // 0x1f3f20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f3f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f3f24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f3f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f3f28: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1f3f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1f3f2c: 0xc07ce6a  jal         func_1F39A8
    ctx->pc = 0x1F3F2Cu;
    SET_GPR_U32(ctx, 31, 0x1F3F34u);
    ctx->pc = 0x1F39A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F39A8u, 0x1F3F2Cu, 0x1F3F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3F34u;
label_1f3f34:
    // 0x1f3f34: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f3f34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3f38: 0xc07ce88  jal         func_1F3A20
    ctx->pc = 0x1F3F38u;
    SET_GPR_U32(ctx, 31, 0x1F3F40u);
    ctx->pc = 0x1F3F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3F38u;
    // 0x1f3f3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3A20u, 0x1F3F38u, 0x1F3F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3F40u;
label_1f3f40:
    // 0x1f3f40: 0xc08c3ec  jal         func_230FB0
    ctx->pc = 0x1F3F40u;
    SET_GPR_U32(ctx, 31, 0x1F3F48u);
    ctx->pc = 0x230FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230FB0u, 0x1F3F40u, 0x1F3F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3F48u;
label_1f3f48:
    // 0x1f3f48: 0xc07cf2c  jal         func_1F3CB0
    ctx->pc = 0x1F3F48u;
    SET_GPR_U32(ctx, 31, 0x1F3F50u);
    ctx->pc = 0x1F3F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3F48u;
    // 0x1f3f4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3CB0u, 0x1F3F48u, 0x1F3F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3F50u;
label_1f3f50:
    // 0x1f3f50: 0xc08215c  jal         func_208570
    ctx->pc = 0x1F3F50u;
    SET_GPR_U32(ctx, 31, 0x1F3F58u);
    ctx->pc = 0x208570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208570u, 0x1F3F50u, 0x1F3F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3F58u;
label_1f3f58:
    // 0x1f3f58: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1f3f58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1f3f5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f3f5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f3f60: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1f3f60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f3f64: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1f3f64u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1f3f68: 0x3e00008  jr          $ra
    ctx->pc = 0x1F3F68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F3F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3F68u;
        // 0x1f3f6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3F68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F3F70u;
label_1f3f70:
    // 0x1f3f70: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1f3f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1f3f74: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x1f3f74u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x1f3f78: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x1f3f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
    // 0x1f3f7c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1f3f7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3f80: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x1f3f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x1f3f84: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1f3f84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3f88: 0xffb30098  sd          $s3, 0x98($sp)
    ctx->pc = 0x1f3f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 19));
    // 0x1f3f8c: 0x26330010  addiu       $s3, $s1, 0x10
    ctx->pc = 0x1f3f8cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1f3f90: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x1f3f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x1f3f94: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f3f94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3f98: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1f3f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1f3f9c: 0x92220047  lbu         $v0, 0x47($s1)
    ctx->pc = 0x1f3f9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 71)));
    // 0x1f3fa0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F3FA0u;
    {
        const bool branch_taken_0x1f3fa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F3FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3FA0u;
        // 0x1f3fa4: 0x63403  sra         $a2, $a2, 16 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3fa0) {
            ctx->pc = 0x1F3FB4u;
            goto label_1f3fb4;
        }
    }
    ctx->pc = 0x1F3FA8u;
    // 0x1f3fa8: 0x924201fc  lbu         $v0, 0x1FC($s2)
    ctx->pc = 0x1f3fa8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 508)));
    // 0x1f3fac: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1F3FACu;
    {
        const bool branch_taken_0x1f3fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3fac) {
            ctx->pc = 0x1F3FB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F3FACu;
            // 0x1f3fb0: 0x92220045  lbu         $v0, 0x45($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 69)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F3FF0u;
            goto label_1f3ff0;
        }
    }
    ctx->pc = 0x1F3FB4u;
label_1f3fb4:
    // 0x1f3fb4: 0x86300040  lh          $s0, 0x40($s1)
    ctx->pc = 0x1f3fb4u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x1f3fb8: 0xd0102a  slt         $v0, $a2, $s0
    ctx->pc = 0x1f3fb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1f3fbc: 0xc2800a  movz        $s0, $a2, $v0
    ctx->pc = 0x1f3fbcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 6));
    // 0x1f3fc0: 0x2a100015  slti        $s0, $s0, 0x15
    ctx->pc = 0x1f3fc0u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x1f3fc4: 0x3a100001  xori        $s0, $s0, 0x1
    ctx->pc = 0x1f3fc4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)1);
    // 0x1f3fc8: 0xc095904  jal         func_256410
    ctx->pc = 0x1F3FC8u;
    SET_GPR_U32(ctx, 31, 0x1F3FD0u);
    ctx->pc = 0x1F3FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3FC8u;
    // 0x1f3fcc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x256410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256410u, 0x1F3FC8u, 0x1F3FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3FD0u;
label_1f3fd0:
    // 0x1f3fd0: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x1F3FD0u;
    {
        const bool branch_taken_0x1f3fd0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3FD0u;
        // 0x1f3fd4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3fd0) {
            ctx->pc = 0x1F4000u;
            goto label_1f4000;
        }
    }
    ctx->pc = 0x1F3FD8u;
    // 0x1f3fd8: 0x8e42005c  lw          $v0, 0x5C($s2)
    ctx->pc = 0x1f3fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x1f3fdc: 0x9246018f  lbu         $a2, 0x18F($s2)
    ctx->pc = 0x1f3fdcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 399)));
    // 0x1f3fe0: 0xc094dcc  jal         func_253730
    ctx->pc = 0x1F3FE0u;
    SET_GPR_U32(ctx, 31, 0x1F3FE8u);
    ctx->pc = 0x1F3FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3FE0u;
    // 0x1f3fe4: 0x84440012  lh          $a0, 0x12($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253730u, 0x1F3FE0u, 0x1F3FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3FE8u;
label_1f3fe8:
    // 0x1f3fe8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F3FE8u;
    {
        const bool branch_taken_0x1f3fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3fe8) {
            ctx->pc = 0x1F4000u;
            goto label_1f4000;
        }
    }
    ctx->pc = 0x1F3FF0u;
label_1f3ff0:
    // 0x1f3ff0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F3FF0u;
    {
        const bool branch_taken_0x1f3ff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3FF0u;
        // 0x1f3ff4: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3ff0) {
            ctx->pc = 0x1F4010u;
            goto label_1f4010;
        }
    }
    ctx->pc = 0x1F3FF8u;
    // 0x1f3ff8: 0xc095940  jal         func_256500
    ctx->pc = 0x1F3FF8u;
    SET_GPR_U32(ctx, 31, 0x1F4000u);
    ctx->pc = 0x1F3FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3FF8u;
    // 0x1f3ffc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x256500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256500u, 0x1F3FF8u, 0x1F4000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4000u;
label_1f4000:
    // 0x1f4000: 0xc07eb44  jal         func_1FAD10
    ctx->pc = 0x1F4000u;
    SET_GPR_U32(ctx, 31, 0x1F4008u);
    ctx->pc = 0x1F4004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4000u;
    // 0x1f4004: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAD10u, 0x1F4000u, 0x1F4008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4008u;
label_1f4008:
    // 0x1f4008: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1F4008u;
    {
        const bool branch_taken_0x1f4008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F400Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4008u;
        // 0x1f400c: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4008) {
            ctx->pc = 0x1F40ACu;
            goto label_1f40ac;
        }
    }
    ctx->pc = 0x1F4010u;
label_1f4010:
    // 0x1f4010: 0x9222004b  lbu         $v0, 0x4B($s1)
    ctx->pc = 0x1f4010u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 75)));
    // 0x1f4014: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1F4014u;
    {
        const bool branch_taken_0x1f4014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4014u;
        // 0x1f4018: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4014) {
            ctx->pc = 0x1F40A8u;
            goto label_1f40a8;
        }
    }
    ctx->pc = 0x1F401Cu;
    // 0x1f401c: 0xc64c0020  lwc1        $f12, 0x20($s2)
    ctx->pc = 0x1f401cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f4020: 0x244234b0  addiu       $v0, $v0, 0x34B0
    ctx->pc = 0x1f4020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13488));
    // 0x1f4024: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x1f4024u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f4028: 0xdc430008  ld          $v1, 0x8($v0)
    ctx->pc = 0x1f4028u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1f402c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f402cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4030: 0xdc450000  ld          $a1, 0x0($v0)
    ctx->pc = 0x1f4030u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f4034: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x1f4034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x1f4038: 0xc084cb0  jal         func_2132C0
    ctx->pc = 0x1F4038u;
    SET_GPR_U32(ctx, 31, 0x1F4040u);
    ctx->pc = 0x1F403Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4038u;
    // 0x1f403c: 0xffa50000  sd          $a1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2132C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2132C0u, 0x1F4038u, 0x1F4040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4040u;
label_1f4040:
    // 0x1f4040: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f4040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4044: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1f4044u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4048: 0xc08491e  jal         func_212478
    ctx->pc = 0x1F4048u;
    SET_GPR_U32(ctx, 31, 0x1F4050u);
    ctx->pc = 0x1F404Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4048u;
    // 0x1f404c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212478u, 0x1F4048u, 0x1F4050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4050u;
label_1f4050:
    // 0x1f4050: 0xde270010  ld          $a3, 0x10($s1)
    ctx->pc = 0x1f4050u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1f4054: 0xde280018  ld          $t0, 0x18($s1)
    ctx->pc = 0x1f4054u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1f4058: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1f4058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1f405c: 0xde220020  ld          $v0, 0x20($s1)
    ctx->pc = 0x1f405cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1f4060: 0xde230028  ld          $v1, 0x28($s1)
    ctx->pc = 0x1f4060u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1f4064: 0xde250030  ld          $a1, 0x30($s1)
    ctx->pc = 0x1f4064u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1f4068: 0xde260038  ld          $a2, 0x38($s1)
    ctx->pc = 0x1f4068u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x1f406c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1f406cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f4070: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x1f4070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f4074: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x1f4074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f4078: 0xffa20060  sd          $v0, 0x60($sp)
    ctx->pc = 0x1f4078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 2));
    // 0x1f407c: 0xffa30068  sd          $v1, 0x68($sp)
    ctx->pc = 0x1f407cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 3));
    // 0x1f4080: 0xffa70050  sd          $a3, 0x50($sp)
    ctx->pc = 0x1f4080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 7));
    // 0x1f4084: 0xffa80058  sd          $t0, 0x58($sp)
    ctx->pc = 0x1f4084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 8));
    // 0x1f4088: 0xffa50070  sd          $a1, 0x70($sp)
    ctx->pc = 0x1f4088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 5));
    // 0x1f408c: 0xffa60078  sd          $a2, 0x78($sp)
    ctx->pc = 0x1f408cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 6));
    // 0x1f4090: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x1f4090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1f4094: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x1f4094u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1f4098: 0xc09595a  jal         func_256568
    ctx->pc = 0x1F4098u;
    SET_GPR_U32(ctx, 31, 0x1F40A0u);
    ctx->pc = 0x1F409Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4098u;
    // 0x1f409c: 0xe7a20068  swc1        $f2, 0x68($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x256568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256568u, 0x1F4098u, 0x1F40A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F40A0u;
label_1f40a0:
    // 0x1f40a0: 0xc07eb44  jal         func_1FAD10
    ctx->pc = 0x1F40A0u;
    SET_GPR_U32(ctx, 31, 0x1F40A8u);
    ctx->pc = 0x1F40A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F40A0u;
    // 0x1f40a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAD10u, 0x1F40A0u, 0x1F40A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F40A8u;
label_1f40a8:
    // 0x1f40a8: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x1f40a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1f40ac:
    // 0x1f40ac: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x1f40acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1f40b0: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x1f40b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1f40b4: 0xdfb30098  ld          $s3, 0x98($sp)
    ctx->pc = 0x1f40b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f40b8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1f40b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f40bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1F40BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F40C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F40BCu;
        // 0x1f40c0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F40BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F40C4u;
    // 0x1f40c4: 0x0  nop
    ctx->pc = 0x1f40c4u;
    // NOP
    ctx->pc = 0x1f40c8u;
}
