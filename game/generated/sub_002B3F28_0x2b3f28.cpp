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

// Function: sub_002B3F28
// Address: 0x2b3f28 - 0x2b5348
void sub_002B3F28_0x2b3f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B3F28_0x2b3f28");
#endif

    switch (ctx->pc) {
        case 0x2b3fa4u: goto label_2b3fa4;
        case 0x2b3fd0u: goto label_2b3fd0;
        case 0x2b3fe0u: goto label_2b3fe0;
        case 0x2b3ff0u: goto label_2b3ff0;
        case 0x2b4000u: goto label_2b4000;
        case 0x2b4010u: goto label_2b4010;
        case 0x2b4020u: goto label_2b4020;
        case 0x2b4030u: goto label_2b4030;
        case 0x2b4040u: goto label_2b4040;
        case 0x2b4050u: goto label_2b4050;
        case 0x2b4060u: goto label_2b4060;
        case 0x2b411cu: goto label_2b411c;
        case 0x2b4190u: goto label_2b4190;
        case 0x2b41b0u: goto label_2b41b0;
        case 0x2b41d4u: goto label_2b41d4;
        case 0x2b4208u: goto label_2b4208;
        case 0x2b4228u: goto label_2b4228;
        case 0x2b424cu: goto label_2b424c;
        case 0x2b4280u: goto label_2b4280;
        case 0x2b42a0u: goto label_2b42a0;
        case 0x2b42ccu: goto label_2b42cc;
        case 0x2b430cu: goto label_2b430c;
        case 0x2b4340u: goto label_2b4340;
        case 0x2b4350u: goto label_2b4350;
        case 0x2b4368u: goto label_2b4368;
        case 0x2b4384u: goto label_2b4384;
        case 0x2b43b0u: goto label_2b43b0;
        case 0x2b43d4u: goto label_2b43d4;
        case 0x2b43e8u: goto label_2b43e8;
        case 0x2b4428u: goto label_2b4428;
        case 0x2b444cu: goto label_2b444c;
        case 0x2b44b0u: goto label_2b44b0;
        case 0x2b44d0u: goto label_2b44d0;
        case 0x2b44f4u: goto label_2b44f4;
        case 0x2b4530u: goto label_2b4530;
        case 0x2b4558u: goto label_2b4558;
        case 0x2b4568u: goto label_2b4568;
        case 0x2b4578u: goto label_2b4578;
        case 0x2b4588u: goto label_2b4588;
        case 0x2b4598u: goto label_2b4598;
        case 0x2b45a8u: goto label_2b45a8;
        case 0x2b45b8u: goto label_2b45b8;
        case 0x2b45c8u: goto label_2b45c8;
        case 0x2b45d8u: goto label_2b45d8;
        case 0x2b45e8u: goto label_2b45e8;
        case 0x2b45f8u: goto label_2b45f8;
        case 0x2b4608u: goto label_2b4608;
        case 0x2b4618u: goto label_2b4618;
        case 0x2b4628u: goto label_2b4628;
        case 0x2b4638u: goto label_2b4638;
        case 0x2b4670u: goto label_2b4670;
        case 0x2b46c8u: goto label_2b46c8;
        case 0x2b46d4u: goto label_2b46d4;
        case 0x2b46e0u: goto label_2b46e0;
        case 0x2b46e8u: goto label_2b46e8;
        case 0x2b46f4u: goto label_2b46f4;
        case 0x2b4700u: goto label_2b4700;
        case 0x2b4718u: goto label_2b4718;
        case 0x2b4728u: goto label_2b4728;
        case 0x2b4734u: goto label_2b4734;
        case 0x2b4740u: goto label_2b4740;
        case 0x2b4748u: goto label_2b4748;
        case 0x2b475cu: goto label_2b475c;
        case 0x2b4768u: goto label_2b4768;
        case 0x2b4774u: goto label_2b4774;
        case 0x2b4784u: goto label_2b4784;
        case 0x2b47e0u: goto label_2b47e0;
        case 0x2b4810u: goto label_2b4810;
        case 0x2b4868u: goto label_2b4868;
        case 0x2b48acu: goto label_2b48ac;
        case 0x2b48bcu: goto label_2b48bc;
        case 0x2b48ccu: goto label_2b48cc;
        case 0x2b4920u: goto label_2b4920;
        case 0x2b4964u: goto label_2b4964;
        case 0x2b4974u: goto label_2b4974;
        case 0x2b4984u: goto label_2b4984;
        case 0x2b49d8u: goto label_2b49d8;
        case 0x2b4a14u: goto label_2b4a14;
        case 0x2b4a68u: goto label_2b4a68;
        case 0x2b4aa4u: goto label_2b4aa4;
        case 0x2b4ae8u: goto label_2b4ae8;
        case 0x2b4b48u: goto label_2b4b48;
        case 0x2b4b68u: goto label_2b4b68;
        case 0x2b4b88u: goto label_2b4b88;
        case 0x2b4ba8u: goto label_2b4ba8;
        case 0x2b4bc8u: goto label_2b4bc8;
        case 0x2b4be8u: goto label_2b4be8;
        case 0x2b4c08u: goto label_2b4c08;
        case 0x2b4c28u: goto label_2b4c28;
        case 0x2b4c48u: goto label_2b4c48;
        case 0x2b4c68u: goto label_2b4c68;
        case 0x2b4c88u: goto label_2b4c88;
        case 0x2b4ca8u: goto label_2b4ca8;
        case 0x2b4cc8u: goto label_2b4cc8;
        case 0x2b4cecu: goto label_2b4cec;
        case 0x2b4d10u: goto label_2b4d10;
        case 0x2b4d34u: goto label_2b4d34;
        case 0x2b4d58u: goto label_2b4d58;
        case 0x2b4db8u: goto label_2b4db8;
        case 0x2b4e18u: goto label_2b4e18;
        case 0x2b4e38u: goto label_2b4e38;
        case 0x2b4e58u: goto label_2b4e58;
        case 0x2b4e78u: goto label_2b4e78;
        case 0x2b4e98u: goto label_2b4e98;
        case 0x2b4eb8u: goto label_2b4eb8;
        case 0x2b4ed8u: goto label_2b4ed8;
        case 0x2b4ef8u: goto label_2b4ef8;
        case 0x2b4f18u: goto label_2b4f18;
        case 0x2b4f38u: goto label_2b4f38;
        case 0x2b4f58u: goto label_2b4f58;
        case 0x2b4f78u: goto label_2b4f78;
        case 0x2b4f98u: goto label_2b4f98;
        case 0x2b4fbcu: goto label_2b4fbc;
        case 0x2b4fe0u: goto label_2b4fe0;
        case 0x2b5004u: goto label_2b5004;
        case 0x2b5028u: goto label_2b5028;
        case 0x2b5098u: goto label_2b5098;
        case 0x2b50ccu: goto label_2b50cc;
        case 0x2b5120u: goto label_2b5120;
        case 0x2b5154u: goto label_2b5154;
        case 0x2b51a8u: goto label_2b51a8;
        case 0x2b51ecu: goto label_2b51ec;
        case 0x2b5248u: goto label_2b5248;
        case 0x2b5284u: goto label_2b5284;
        case 0x2b52d0u: goto label_2b52d0;
        case 0x2b5300u: goto label_2b5300;
        default: break;
    }

    ctx->pc = 0x2b3f28u;

    // 0x2b3f28: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2b3f28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2b3f2c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2b3f2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3f30: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2b3f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2b3f34: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x2b3f34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3f38: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2b3f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2b3f3c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2b3f3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3f40: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2b3f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2b3f44: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2b3f44u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3f48: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2b3f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2b3f4c: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x2b3f4cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3f50: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x2b3f50u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2b3f54: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x2b3f54u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x2b3f58: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x2b3f58u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2b3f5c: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x2b3f5cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x2b3f60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b3f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b3f64: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b3f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b3f68: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2b3f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2b3f6c: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x2b3f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x2b3f70: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x2b3f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x2b3f74: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x2b3f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x2b3f78: 0x8e8300c4  lw          $v1, 0xC4($s4)
    ctx->pc = 0x2b3f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 196)));
    // 0x2b3f7c: 0x1460007c  bnez        $v1, . + 4 + (0x7C << 2)
    ctx->pc = 0x2B3F7Cu;
    {
        const bool branch_taken_0x2b3f7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B3F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3F7Cu;
        // 0x2b3f80: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3f7c) {
            ctx->pc = 0x2B4170u;
            goto label_2b4170;
        }
    }
    ctx->pc = 0x2B3F84u;
    // 0x2b3f84: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2b3f84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b3f88: 0xae950064  sw          $s5, 0x64($s4)
    ctx->pc = 0x2b3f88u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 100), GPR_U32(ctx, 21));
    // 0x2b3f8c: 0xae920058  sw          $s2, 0x58($s4)
    ctx->pc = 0x2b3f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 88), GPR_U32(ctx, 18));
    // 0x2b3f90: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2b3f90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3f94: 0xae930060  sw          $s3, 0x60($s4)
    ctx->pc = 0x2b3f94u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 96), GPR_U32(ctx, 19));
    // 0x2b3f98: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2b3f98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b3f9c: 0xc0a9e30  jal         func_2A78C0
    ctx->pc = 0x2B3F9Cu;
    SET_GPR_U32(ctx, 31, 0x2B3FA4u);
    ctx->pc = 0x2B3FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3F9Cu;
    // 0x2b3fa0: 0xae9000c0  sw          $s0, 0xC0($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 192), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A78C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A78C0u, 0x2B3F9Cu, 0x2B3FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3FA4u;
label_2b3fa4:
    // 0x2b3fa4: 0xae8000c8  sw          $zero, 0xC8($s4)
    ctx->pc = 0x2b3fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 200), GPR_U32(ctx, 0));
    // 0x2b3fa8: 0x8e62002c  lw          $v0, 0x2C($s3)
    ctx->pc = 0x2b3fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x2b3fac: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x2B3FACu;
    {
        const bool branch_taken_0x2b3fac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B3FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3FACu;
        // 0x2b3fb0: 0xae8200c8  sw          $v0, 0xC8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 200), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3fac) {
            ctx->pc = 0x2B4070u;
            goto label_2b4070;
        }
    }
    ctx->pc = 0x2B3FB4u;
    // 0x2b3fb4: 0xae70002c  sw          $s0, 0x2C($s3)
    ctx->pc = 0x2b3fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 16));
    // 0x2b3fb8: 0x8e8500c8  lw          $a1, 0xC8($s4)
    ctx->pc = 0x2b3fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 200)));
    // 0x2b3fbc: 0x54a0002e  bnel        $a1, $zero, . + 4 + (0x2E << 2)
    ctx->pc = 0x2B3FBCu;
    {
        const bool branch_taken_0x2b3fbc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b3fbc) {
            ctx->pc = 0x2B3FC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3FBCu;
            // 0x2b3fc0: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4078u;
            goto label_2b4078;
        }
    }
    ctx->pc = 0x2B3FC4u;
    // 0x2b3fc4: 0x8e640030  lw          $a0, 0x30($s3)
    ctx->pc = 0x2b3fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x2b3fc8: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2B3FC8u;
    SET_GPR_U32(ctx, 31, 0x2B3FD0u);
    ctx->pc = 0x2B3FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3FC8u;
    // 0x2b3fcc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2B3FC8u, 0x2B3FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3FD0u;
label_2b3fd0:
    // 0x2b3fd0: 0x8e64003c  lw          $a0, 0x3C($s3)
    ctx->pc = 0x2b3fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
    // 0x2b3fd4: 0xae620030  sw          $v0, 0x30($s3)
    ctx->pc = 0x2b3fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 2));
    // 0x2b3fd8: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2B3FD8u;
    SET_GPR_U32(ctx, 31, 0x2B3FE0u);
    ctx->pc = 0x2B3FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3FD8u;
    // 0x2b3fdc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2B3FD8u, 0x2B3FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3FE0u;
label_2b3fe0:
    // 0x2b3fe0: 0x8e640040  lw          $a0, 0x40($s3)
    ctx->pc = 0x2b3fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x2b3fe4: 0xae62003c  sw          $v0, 0x3C($s3)
    ctx->pc = 0x2b3fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 2));
    // 0x2b3fe8: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2B3FE8u;
    SET_GPR_U32(ctx, 31, 0x2B3FF0u);
    ctx->pc = 0x2B3FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3FE8u;
    // 0x2b3fec: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2B3FE8u, 0x2B3FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3FF0u;
label_2b3ff0:
    // 0x2b3ff0: 0x8e640034  lw          $a0, 0x34($s3)
    ctx->pc = 0x2b3ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x2b3ff4: 0xae620040  sw          $v0, 0x40($s3)
    ctx->pc = 0x2b3ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 2));
    // 0x2b3ff8: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2B3FF8u;
    SET_GPR_U32(ctx, 31, 0x2B4000u);
    ctx->pc = 0x2B3FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3FF8u;
    // 0x2b3ffc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2B3FF8u, 0x2B4000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4000u;
label_2b4000:
    // 0x2b4000: 0x8e640038  lw          $a0, 0x38($s3)
    ctx->pc = 0x2b4000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x2b4004: 0xae620034  sw          $v0, 0x34($s3)
    ctx->pc = 0x2b4004u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 2));
    // 0x2b4008: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2B4008u;
    SET_GPR_U32(ctx, 31, 0x2B4010u);
    ctx->pc = 0x2B400Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4008u;
    // 0x2b400c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2B4008u, 0x2B4010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4010u;
label_2b4010:
    // 0x2b4010: 0x8e640044  lw          $a0, 0x44($s3)
    ctx->pc = 0x2b4010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x2b4014: 0xae620038  sw          $v0, 0x38($s3)
    ctx->pc = 0x2b4014u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 2));
    // 0x2b4018: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2B4018u;
    SET_GPR_U32(ctx, 31, 0x2B4020u);
    ctx->pc = 0x2B401Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4018u;
    // 0x2b401c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2B4018u, 0x2B4020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4020u;
label_2b4020:
    // 0x2b4020: 0x8e640048  lw          $a0, 0x48($s3)
    ctx->pc = 0x2b4020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x2b4024: 0xae620044  sw          $v0, 0x44($s3)
    ctx->pc = 0x2b4024u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 2));
    // 0x2b4028: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2B4028u;
    SET_GPR_U32(ctx, 31, 0x2B4030u);
    ctx->pc = 0x2B402Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4028u;
    // 0x2b402c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2B4028u, 0x2B4030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4030u;
label_2b4030:
    // 0x2b4030: 0x8e64004c  lw          $a0, 0x4C($s3)
    ctx->pc = 0x2b4030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x2b4034: 0xae620048  sw          $v0, 0x48($s3)
    ctx->pc = 0x2b4034u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 2));
    // 0x2b4038: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2B4038u;
    SET_GPR_U32(ctx, 31, 0x2B4040u);
    ctx->pc = 0x2B403Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4038u;
    // 0x2b403c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2B4038u, 0x2B4040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4040u;
label_2b4040:
    // 0x2b4040: 0x8e640050  lw          $a0, 0x50($s3)
    ctx->pc = 0x2b4040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x2b4044: 0xae62004c  sw          $v0, 0x4C($s3)
    ctx->pc = 0x2b4044u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 2));
    // 0x2b4048: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2B4048u;
    SET_GPR_U32(ctx, 31, 0x2B4050u);
    ctx->pc = 0x2B404Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4048u;
    // 0x2b404c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2B4048u, 0x2B4050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4050u;
label_2b4050:
    // 0x2b4050: 0x8e640054  lw          $a0, 0x54($s3)
    ctx->pc = 0x2b4050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x2b4054: 0xae620050  sw          $v0, 0x50($s3)
    ctx->pc = 0x2b4054u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 80), GPR_U32(ctx, 2));
    // 0x2b4058: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2B4058u;
    SET_GPR_U32(ctx, 31, 0x2B4060u);
    ctx->pc = 0x2B405Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4058u;
    // 0x2b405c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2B4058u, 0x2B4060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4060u;
label_2b4060:
    // 0x2b4060: 0xae620054  sw          $v0, 0x54($s3)
    ctx->pc = 0x2b4060u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
    // 0x2b4064: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B4064u;
    {
        const bool branch_taken_0x2b4064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4064u;
        // 0x2b4068: 0x8e8500c8  lw          $a1, 0xC8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4064) {
            ctx->pc = 0x2B4074u;
            goto label_2b4074;
        }
    }
    ctx->pc = 0x2B406Cu;
    // 0x2b406c: 0x0  nop
    ctx->pc = 0x2b406cu;
    // NOP
label_2b4070:
    // 0x2b4070: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b4070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b4074:
    // 0x2b4074: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x2b4074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_2b4078:
    // 0x2b4078: 0xae820068  sw          $v0, 0x68($s4)
    ctx->pc = 0x2b4078u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 104), GPR_U32(ctx, 2));
    // 0x2b407c: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x2b407cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x2b4080: 0xae83006c  sw          $v1, 0x6C($s4)
    ctx->pc = 0x2b4080u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 108), GPR_U32(ctx, 3));
    // 0x2b4084: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x2b4084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x2b4088: 0xae820070  sw          $v0, 0x70($s4)
    ctx->pc = 0x2b4088u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 112), GPR_U32(ctx, 2));
    // 0x2b408c: 0x8e630018  lw          $v1, 0x18($s3)
    ctx->pc = 0x2b408cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x2b4090: 0xae830074  sw          $v1, 0x74($s4)
    ctx->pc = 0x2b4090u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 116), GPR_U32(ctx, 3));
    // 0x2b4094: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x2b4094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x2b4098: 0xae820078  sw          $v0, 0x78($s4)
    ctx->pc = 0x2b4098u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 120), GPR_U32(ctx, 2));
    // 0x2b409c: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x2b409cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x2b40a0: 0xae83007c  sw          $v1, 0x7C($s4)
    ctx->pc = 0x2b40a0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 124), GPR_U32(ctx, 3));
    // 0x2b40a4: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x2b40a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x2b40a8: 0xae820080  sw          $v0, 0x80($s4)
    ctx->pc = 0x2b40a8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 128), GPR_U32(ctx, 2));
    // 0x2b40ac: 0x8e630028  lw          $v1, 0x28($s3)
    ctx->pc = 0x2b40acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x2b40b0: 0xae830084  sw          $v1, 0x84($s4)
    ctx->pc = 0x2b40b0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 132), GPR_U32(ctx, 3));
    // 0x2b40b4: 0x8e62002c  lw          $v0, 0x2C($s3)
    ctx->pc = 0x2b40b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x2b40b8: 0xae820088  sw          $v0, 0x88($s4)
    ctx->pc = 0x2b40b8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 136), GPR_U32(ctx, 2));
    // 0x2b40bc: 0x8e700030  lw          $s0, 0x30($s3)
    ctx->pc = 0x2b40bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x2b40c0: 0xae90008c  sw          $s0, 0x8C($s4)
    ctx->pc = 0x2b40c0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 140), GPR_U32(ctx, 16));
    // 0x2b40c4: 0x8e620034  lw          $v0, 0x34($s3)
    ctx->pc = 0x2b40c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x2b40c8: 0xae820090  sw          $v0, 0x90($s4)
    ctx->pc = 0x2b40c8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 144), GPR_U32(ctx, 2));
    // 0x2b40cc: 0x8e630038  lw          $v1, 0x38($s3)
    ctx->pc = 0x2b40ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x2b40d0: 0xae830094  sw          $v1, 0x94($s4)
    ctx->pc = 0x2b40d0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 148), GPR_U32(ctx, 3));
    // 0x2b40d4: 0x8e620040  lw          $v0, 0x40($s3)
    ctx->pc = 0x2b40d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x2b40d8: 0xae820098  sw          $v0, 0x98($s4)
    ctx->pc = 0x2b40d8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 152), GPR_U32(ctx, 2));
    // 0x2b40dc: 0x8e63003c  lw          $v1, 0x3C($s3)
    ctx->pc = 0x2b40dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
    // 0x2b40e0: 0xae83009c  sw          $v1, 0x9C($s4)
    ctx->pc = 0x2b40e0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 156), GPR_U32(ctx, 3));
    // 0x2b40e4: 0x8e620044  lw          $v0, 0x44($s3)
    ctx->pc = 0x2b40e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x2b40e8: 0xae8200a0  sw          $v0, 0xA0($s4)
    ctx->pc = 0x2b40e8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 160), GPR_U32(ctx, 2));
    // 0x2b40ec: 0x8e630048  lw          $v1, 0x48($s3)
    ctx->pc = 0x2b40ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x2b40f0: 0xae8300a4  sw          $v1, 0xA4($s4)
    ctx->pc = 0x2b40f0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 164), GPR_U32(ctx, 3));
    // 0x2b40f4: 0x8e62004c  lw          $v0, 0x4C($s3)
    ctx->pc = 0x2b40f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x2b40f8: 0xae8200a8  sw          $v0, 0xA8($s4)
    ctx->pc = 0x2b40f8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 168), GPR_U32(ctx, 2));
    // 0x2b40fc: 0x8e630050  lw          $v1, 0x50($s3)
    ctx->pc = 0x2b40fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x2b4100: 0xae8300ac  sw          $v1, 0xAC($s4)
    ctx->pc = 0x2b4100u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 172), GPR_U32(ctx, 3));
    // 0x2b4104: 0x8e620054  lw          $v0, 0x54($s3)
    ctx->pc = 0x2b4104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x2b4108: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B4108u;
    {
        const bool branch_taken_0x2b4108 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B410Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4108u;
        // 0x2b410c: 0xae8200b0  sw          $v0, 0xB0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4108) {
            ctx->pc = 0x2B4120u;
            goto label_2b4120;
        }
    }
    ctx->pc = 0x2B4110u;
    // 0x2b4110: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2b4110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2b4114: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2B4114u;
    SET_GPR_U32(ctx, 31, 0x2B411Cu);
    ctx->pc = 0x2B4118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4114u;
    // 0x2b4118: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2B4114u, 0x2B411Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B411Cu;
label_2b411c:
    // 0x2b411c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2b411cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_2b4120:
    // 0x2b4120: 0x0  nop
    ctx->pc = 0x2b4120u;
    // NOP
    // 0x2b4124: 0x0  nop
    ctx->pc = 0x2b4124u;
    // NOP
    // 0x2b4128: 0x4615a083  div.s       $f2, $f20, $f21
    ctx->pc = 0x2b4128u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[2] = ctx->f[20] / ctx->f[21];
    // 0x2b412c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2b412cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2b4130: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b4130u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4134: 0x8e83008c  lw          $v1, 0x8C($s4)
    ctx->pc = 0x2b4134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 140)));
    // 0x2b4138: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b4138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b413c: 0x4600a042  mul.s       $f1, $f20, $f0
    ctx->pc = 0x2b413cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2b4140: 0x2682004c  addiu       $v0, $s4, 0x4C
    ctx->pc = 0x2b4140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 76));
    // 0x2b4144: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x2b4144u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x2b4148: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2b4148u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2b414c: 0xac64005c  sw          $a0, 0x5C($v1)
    ctx->pc = 0x2b414cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 4));
    // 0x2b4150: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b4150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b4154: 0xac740000  sw          $s4, 0x0($v1)
    ctx->pc = 0x2b4154u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 20));
    // 0x2b4158: 0xe4610054  swc1        $f1, 0x54($v1)
    ctx->pc = 0x2b4158u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 84), bits); }
    // 0x2b415c: 0xe4600050  swc1        $f0, 0x50($v1)
    ctx->pc = 0x2b415cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 80), bits); }
    // 0x2b4160: 0xe4620058  swc1        $f2, 0x58($v1)
    ctx->pc = 0x2b4160u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
    // 0x2b4164: 0x10000469  b           . + 4 + (0x469 << 2)
    ctx->pc = 0x2B4164u;
    {
        const bool branch_taken_0x2b4164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4164u;
        // 0x2b4168: 0xae8400c4  sw          $a0, 0xC4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 196), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4164) {
            ctx->pc = 0x2B530Cu;
            goto label_2b530c;
        }
    }
    ctx->pc = 0x2B416Cu;
    // 0x2b416c: 0x0  nop
    ctx->pc = 0x2b416cu;
    // NOP
label_2b4170:
    // 0x2b4170: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2b4170u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b4174: 0x1471001e  bne         $v1, $s1, . + 4 + (0x1E << 2)
    ctx->pc = 0x2B4174u;
    {
        const bool branch_taken_0x2b4174 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        ctx->pc = 0x2B4178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4174u;
        // 0x2b4178: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4174) {
            ctx->pc = 0x2B41F0u;
            goto label_2b41f0;
        }
    }
    ctx->pc = 0x2B417Cu;
    // 0x2b417c: 0x8e820078  lw          $v0, 0x78($s4)
    ctx->pc = 0x2b417cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 120)));
    // 0x2b4180: 0x18400019  blez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2B4180u;
    {
        const bool branch_taken_0x2b4180 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2B4184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4180u;
        // 0x2b4184: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4180) {
            ctx->pc = 0x2B41E8u;
            goto label_2b41e8;
        }
    }
    ctx->pc = 0x2B4188u;
    // 0x2b4188: 0x8e8200c8  lw          $v0, 0xC8($s4)
    ctx->pc = 0x2b4188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 200)));
    // 0x2b418c: 0x0  nop
    ctx->pc = 0x2b418cu;
    // NOP
label_2b4190:
    // 0x2b4190: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B4190u;
    {
        const bool branch_taken_0x2b4190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B4194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4190u;
        // 0x2b4194: 0x118040  sll         $s0, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4190) {
            ctx->pc = 0x2B41B8u;
            goto label_2b41b8;
        }
    }
    ctx->pc = 0x2B4198u;
    // 0x2b4198: 0x8e8200a0  lw          $v0, 0xA0($s4)
    ctx->pc = 0x2b4198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 160)));
    // 0x2b419c: 0x2112021  addu        $a0, $s0, $s1
    ctx->pc = 0x2b419cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x2b41a0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2b41a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b41a4: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x2b41a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2b41a8: 0xc0aad4c  jal         func_2AB530
    ctx->pc = 0x2B41A8u;
    SET_GPR_U32(ctx, 31, 0x2B41B0u);
    ctx->pc = 0x2B41ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B41A8u;
    // 0x2b41ac: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB530u, 0x2B41A8u, 0x2B41B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B41B0u;
label_2b41b0:
    // 0x2b41b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B41B0u;
    {
        const bool branch_taken_0x2b41b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B41B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B41B0u;
        // 0x2b41b4: 0x8e8200a0  lw          $v0, 0xA0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b41b0) {
            ctx->pc = 0x2B41BCu;
            goto label_2b41bc;
        }
    }
    ctx->pc = 0x2B41B8u;
label_2b41b8:
    // 0x2b41b8: 0x8e8200a0  lw          $v0, 0xA0($s4)
    ctx->pc = 0x2b41b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 160)));
label_2b41bc:
    // 0x2b41bc: 0x2112021  addu        $a0, $s0, $s1
    ctx->pc = 0x2b41bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x2b41c0: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x2b41c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2b41c4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2b41c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b41c8: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x2b41c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b41cc: 0xc0aacf0  jal         func_2AB3C0
    ctx->pc = 0x2B41CCu;
    SET_GPR_U32(ctx, 31, 0x2B41D4u);
    ctx->pc = 0x2B41D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B41CCu;
    // 0x2b41d0: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB3C0u, 0x2B41CCu, 0x2B41D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B41D4u;
label_2b41d4:
    // 0x2b41d4: 0x8e820078  lw          $v0, 0x78($s4)
    ctx->pc = 0x2b41d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 120)));
    // 0x2b41d8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2b41d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2b41dc: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2b41dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b41e0: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2B41E0u;
    {
        const bool branch_taken_0x2b41e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b41e0) {
            ctx->pc = 0x2B41E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B41E0u;
            // 0x2b41e4: 0x8e8200c8  lw          $v0, 0xC8($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 200)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4190u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b4190;
        }
    }
    ctx->pc = 0x2B41E8u;
label_2b41e8:
    // 0x2b41e8: 0x1000043d  b           . + 4 + (0x43D << 2)
    ctx->pc = 0x2B41E8u;
    {
        const bool branch_taken_0x2b41e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B41ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B41E8u;
        // 0x2b41ec: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b41e8) {
            ctx->pc = 0x2B52E0u;
            goto label_2b52e0;
        }
    }
    ctx->pc = 0x2B41F0u;
label_2b41f0:
    // 0x2b41f0: 0x1462001d  bne         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2B41F0u;
    {
        const bool branch_taken_0x2b41f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B41F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B41F0u;
        // 0x2b41f4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b41f0) {
            ctx->pc = 0x2B4268u;
            goto label_2b4268;
        }
    }
    ctx->pc = 0x2B41F8u;
    // 0x2b41f8: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x2b41f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
    // 0x2b41fc: 0x18400017  blez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2B41FCu;
    {
        const bool branch_taken_0x2b41fc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2B4200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B41FCu;
        // 0x2b4200: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b41fc) {
            ctx->pc = 0x2B425Cu;
            goto label_2b425c;
        }
    }
    ctx->pc = 0x2B4204u;
    // 0x2b4204: 0x8e8200c8  lw          $v0, 0xC8($s4)
    ctx->pc = 0x2b4204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 200)));
label_2b4208:
    // 0x2b4208: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B4208u;
    {
        const bool branch_taken_0x2b4208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B420Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4208u;
        // 0x2b420c: 0x118040  sll         $s0, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4208) {
            ctx->pc = 0x2B4230u;
            goto label_2b4230;
        }
    }
    ctx->pc = 0x2B4210u;
    // 0x2b4210: 0x8e820094  lw          $v0, 0x94($s4)
    ctx->pc = 0x2b4210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 148)));
    // 0x2b4214: 0x2112021  addu        $a0, $s0, $s1
    ctx->pc = 0x2b4214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x2b4218: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2b4218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b421c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2b421cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b4220: 0xc0aad98  jal         func_2AB660
    ctx->pc = 0x2B4220u;
    SET_GPR_U32(ctx, 31, 0x2B4228u);
    ctx->pc = 0x2B4224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4220u;
    // 0x2b4224: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB660u, 0x2B4220u, 0x2B4228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4228u;
label_2b4228:
    // 0x2b4228: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B4228u;
    {
        const bool branch_taken_0x2b4228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B422Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4228u;
        // 0x2b422c: 0x8e820094  lw          $v0, 0x94($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4228) {
            ctx->pc = 0x2B4234u;
            goto label_2b4234;
        }
    }
    ctx->pc = 0x2B4230u;
label_2b4230:
    // 0x2b4230: 0x8e820094  lw          $v0, 0x94($s4)
    ctx->pc = 0x2b4230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 148)));
label_2b4234:
    // 0x2b4234: 0x2112021  addu        $a0, $s0, $s1
    ctx->pc = 0x2b4234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x2b4238: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2b4238u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b423c: 0x2322821  addu        $a1, $s1, $s2
    ctx->pc = 0x2b423cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x2b4240: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x2b4240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b4244: 0xc0aad8a  jal         func_2AB628
    ctx->pc = 0x2B4244u;
    SET_GPR_U32(ctx, 31, 0x2B424Cu);
    ctx->pc = 0x2B4248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4244u;
    // 0x2b4248: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB628u, 0x2B4244u, 0x2B424Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B424Cu;
label_2b424c:
    // 0x2b424c: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x2b424cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
    // 0x2b4250: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2b4250u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b4254: 0x5440ffec  bnel        $v0, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2B4254u;
    {
        const bool branch_taken_0x2b4254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b4254) {
            ctx->pc = 0x2B4258u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4254u;
            // 0x2b4258: 0x8e8200c8  lw          $v0, 0xC8($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 200)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b4208;
        }
    }
    ctx->pc = 0x2B425Cu;
label_2b425c:
    // 0x2b425c: 0x10000420  b           . + 4 + (0x420 << 2)
    ctx->pc = 0x2B425Cu;
    {
        const bool branch_taken_0x2b425c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B425Cu;
        // 0x2b4260: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b425c) {
            ctx->pc = 0x2B52E0u;
            goto label_2b52e0;
        }
    }
    ctx->pc = 0x2B4264u;
    // 0x2b4264: 0x0  nop
    ctx->pc = 0x2b4264u;
    // NOP
label_2b4268:
    // 0x2b4268: 0x1462001f  bne         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2B4268u;
    {
        const bool branch_taken_0x2b4268 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B426Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4268u;
        // 0x2b426c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4268) {
            ctx->pc = 0x2B42E8u;
            goto label_2b42e8;
        }
    }
    ctx->pc = 0x2B4270u;
    // 0x2b4270: 0x8e86006c  lw          $a2, 0x6C($s4)
    ctx->pc = 0x2b4270u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
    // 0x2b4274: 0x18c0001a  blez        $a2, . + 4 + (0x1A << 2)
    ctx->pc = 0x2B4274u;
    {
        const bool branch_taken_0x2b4274 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x2B4278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4274u;
        // 0x2b4278: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4274) {
            ctx->pc = 0x2B42E0u;
            goto label_2b42e0;
        }
    }
    ctx->pc = 0x2B427Cu;
    // 0x2b427c: 0x8e8200c8  lw          $v0, 0xC8($s4)
    ctx->pc = 0x2b427cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 200)));
label_2b4280:
    // 0x2b4280: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B4280u;
    {
        const bool branch_taken_0x2b4280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B4284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4280u;
        // 0x2b4284: 0x118080  sll         $s0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4280) {
            ctx->pc = 0x2B42A4u;
            goto label_2b42a4;
        }
    }
    ctx->pc = 0x2B4288u;
    // 0x2b4288: 0x8e820090  lw          $v0, 0x90($s4)
    ctx->pc = 0x2b4288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x2b428c: 0x2112021  addu        $a0, $s0, $s1
    ctx->pc = 0x2b428cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x2b4290: 0x8e85005c  lw          $a1, 0x5C($s4)
    ctx->pc = 0x2b4290u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
    // 0x2b4294: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2b4294u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b4298: 0xc0ac964  jal         func_2B2590
    ctx->pc = 0x2B4298u;
    SET_GPR_U32(ctx, 31, 0x2B42A0u);
    ctx->pc = 0x2B429Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4298u;
    // 0x2b429c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2590u, 0x2B4298u, 0x2B42A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B42A0u;
label_2b42a0:
    // 0x2b42a0: 0x8e86006c  lw          $a2, 0x6C($s4)
    ctx->pc = 0x2b42a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
label_2b42a4:
    // 0x2b42a4: 0x8e850054  lw          $a1, 0x54($s4)
    ctx->pc = 0x2b42a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
    // 0x2b42a8: 0x2112021  addu        $a0, $s0, $s1
    ctx->pc = 0x2b42a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x2b42ac: 0x8e820090  lw          $v0, 0x90($s4)
    ctx->pc = 0x2b42acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x2b42b0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2b42b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b42b4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x2b42b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2b42b8: 0xb12823  subu        $a1, $a1, $s1
    ctx->pc = 0x2b42b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x2b42bc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2b42bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2b42c0: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x2b42c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b42c4: 0xc0ac95e  jal         func_2B2578
    ctx->pc = 0x2B42C4u;
    SET_GPR_U32(ctx, 31, 0x2B42CCu);
    ctx->pc = 0x2B42C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B42C4u;
    // 0x2b42c8: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2578u, 0x2B42C4u, 0x2B42CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B42CCu;
label_2b42cc:
    // 0x2b42cc: 0x8e82006c  lw          $v0, 0x6C($s4)
    ctx->pc = 0x2b42ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
    // 0x2b42d0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2b42d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b42d4: 0x226182a  slt         $v1, $s1, $a2
    ctx->pc = 0x2b42d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2b42d8: 0x5460ffe9  bnel        $v1, $zero, . + 4 + (-0x17 << 2)
    ctx->pc = 0x2B42D8u;
    {
        const bool branch_taken_0x2b42d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b42d8) {
            ctx->pc = 0x2B42DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B42D8u;
            // 0x2b42dc: 0x8e8200c8  lw          $v0, 0xC8($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 200)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4280u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b4280;
        }
    }
    ctx->pc = 0x2B42E0u;
label_2b42e0:
    // 0x2b42e0: 0x100003ff  b           . + 4 + (0x3FF << 2)
    ctx->pc = 0x2B42E0u;
    {
        const bool branch_taken_0x2b42e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B42E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B42E0u;
        // 0x2b42e4: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b42e0) {
            ctx->pc = 0x2B52E0u;
            goto label_2b52e0;
        }
    }
    ctx->pc = 0x2B42E8u;
label_2b42e8:
    // 0x2b42e8: 0x14620047  bne         $v1, $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x2B42E8u;
    {
        const bool branch_taken_0x2b42e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B42ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B42E8u;
        // 0x2b42ec: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b42e8) {
            ctx->pc = 0x2B4408u;
            goto label_2b4408;
        }
    }
    ctx->pc = 0x2B42F0u;
    // 0x2b42f0: 0x8e8200c8  lw          $v0, 0xC8($s4)
    ctx->pc = 0x2b42f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 200)));
    // 0x2b42f4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B42F4u;
    {
        const bool branch_taken_0x2b42f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b42f4) {
            ctx->pc = 0x2B42F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B42F4u;
            // 0x2b42f8: 0x8e82009c  lw          $v0, 0x9C($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 156)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4314u;
            goto label_2b4314;
        }
    }
    ctx->pc = 0x2B42FCu;
    // 0x2b42fc: 0x8e90009c  lw          $s0, 0x9C($s4)
    ctx->pc = 0x2b42fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 156)));
    // 0x2b4300: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2b4300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4304: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2B4304u;
    SET_GPR_U32(ctx, 31, 0x2B430Cu);
    ctx->pc = 0x2B4308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4304u;
    // 0x2b4308: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2B4304u, 0x2B430Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B430Cu;
label_2b430c:
    // 0x2b430c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2b430cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2b4310: 0x8e82009c  lw          $v0, 0x9C($s4)
    ctx->pc = 0x2b4310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 156)));
label_2b4314:
    // 0x2b4314: 0x2695004c  addiu       $s5, $s4, 0x4C
    ctx->pc = 0x2b4314u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 76));
    // 0x2b4318: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2b4318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b431c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2b431cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2b4320: 0xac510034  sw          $s1, 0x34($v0)
    ctx->pc = 0x2b4320u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 17));
    // 0x2b4324: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2b4324u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2b4328: 0xac440038  sw          $a0, 0x38($v0)
    ctx->pc = 0x2b4328u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 4));
    // 0x2b432c: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x2b432cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
    // 0x2b4330: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B4330u;
    {
        const bool branch_taken_0x2b4330 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4330u;
        // 0x2b4334: 0xac550004  sw          $s5, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4330) {
            ctx->pc = 0x2B4348u;
            goto label_2b4348;
        }
    }
    ctx->pc = 0x2B4338u;
    // 0x2b4338: 0xc0ca5ac  jal         func_3296B0
    ctx->pc = 0x2B4338u;
    SET_GPR_U32(ctx, 31, 0x2B4340u);
    ctx->pc = 0x2B433Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4338u;
    // 0x2b433c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3296B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3296B0u, 0x2B4338u, 0x2B4340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4340u;
label_2b4340:
    // 0x2b4340: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2B4340u;
    {
        const bool branch_taken_0x2b4340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4340u;
        // 0x2b4344: 0x8e820070  lw          $v0, 0x70($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4340) {
            ctx->pc = 0x2B4354u;
            goto label_2b4354;
        }
    }
    ctx->pc = 0x2B4348u;
label_2b4348:
    // 0x2b4348: 0xc0ca5ac  jal         func_3296B0
    ctx->pc = 0x2B4348u;
    SET_GPR_U32(ctx, 31, 0x2B4350u);
    ctx->pc = 0x2B434Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4348u;
    // 0x2b434c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3296B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3296B0u, 0x2B4348u, 0x2B4350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4350u;
label_2b4350:
    // 0x2b4350: 0x8e820070  lw          $v0, 0x70($s4)
    ctx->pc = 0x2b4350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
label_2b4354:
    // 0x2b4354: 0x18400029  blez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x2B4354u;
    {
        const bool branch_taken_0x2b4354 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2B4358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4354u;
        // 0x2b4358: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4354) {
            ctx->pc = 0x2B43FCu;
            goto label_2b43fc;
        }
    }
    ctx->pc = 0x2B435Cu;
    // 0x2b435c: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x2b435cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b4360: 0x8e8200c8  lw          $v0, 0xC8($s4)
    ctx->pc = 0x2b4360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 200)));
    // 0x2b4364: 0x0  nop
    ctx->pc = 0x2b4364u;
    // NOP
label_2b4368:
    // 0x2b4368: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B4368u;
    {
        const bool branch_taken_0x2b4368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B436Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4368u;
        // 0x2b436c: 0x1289c0  sll         $s1, $s2, 7 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4368) {
            ctx->pc = 0x2B4388u;
            goto label_2b4388;
        }
    }
    ctx->pc = 0x2B4370u;
    // 0x2b4370: 0x8e900098  lw          $s0, 0x98($s4)
    ctx->pc = 0x2b4370u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 152)));
    // 0x2b4374: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2b4374u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4378: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x2b4378u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x2b437c: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2B437Cu;
    SET_GPR_U32(ctx, 31, 0x2B4384u);
    ctx->pc = 0x2B4380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B437Cu;
    // 0x2b4380: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2B437Cu, 0x2B4384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4384u;
label_2b4384:
    // 0x2b4384: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2b4384u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_2b4388:
    // 0x2b4388: 0x8e820098  lw          $v0, 0x98($s4)
    ctx->pc = 0x2b4388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 152)));
    // 0x2b438c: 0x518021  addu        $s0, $v0, $s1
    ctx->pc = 0x2b438cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2b4390: 0xae120038  sw          $s2, 0x38($s0)
    ctx->pc = 0x2b4390u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 18));
    // 0x2b4394: 0xae140000  sw          $s4, 0x0($s0)
    ctx->pc = 0x2b4394u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 20));
    // 0x2b4398: 0xae150004  sw          $s5, 0x4($s0)
    ctx->pc = 0x2b4398u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 21));
    // 0x2b439c: 0x6400007  bltz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B439Cu;
    {
        const bool branch_taken_0x2b439c = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x2B43A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B439Cu;
        // 0x2b43a0: 0xae160034  sw          $s6, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b439c) {
            ctx->pc = 0x2B43BCu;
            goto label_2b43bc;
        }
    }
    ctx->pc = 0x2B43A4u;
    // 0x2b43a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b43a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b43a8: 0xc0ca4d2  jal         func_329348
    ctx->pc = 0x2B43A8u;
    SET_GPR_U32(ctx, 31, 0x2B43B0u);
    ctx->pc = 0x2B43ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B43A8u;
    // 0x2b43ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329348u, 0x2B43A8u, 0x2B43B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B43B0u;
label_2b43b0:
    // 0x2b43b0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2b43b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2b43b4: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x2b43b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x2b43b8: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2b43b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_2b43bc:
    // 0x2b43bc: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2b43bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2b43c0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b43c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2b43c4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B43C4u;
    {
        const bool branch_taken_0x2b43c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B43C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B43C4u;
        // 0x2b43c8: 0x8e040038  lw          $a0, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b43c4) {
            ctx->pc = 0x2B43E0u;
            goto label_2b43e0;
        }
    }
    ctx->pc = 0x2B43CCu;
    // 0x2b43cc: 0xc0ca5ac  jal         func_3296B0
    ctx->pc = 0x2B43CCu;
    SET_GPR_U32(ctx, 31, 0x2B43D4u);
    ctx->pc = 0x2B43D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B43CCu;
    // 0x2b43d0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3296B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3296B0u, 0x2B43CCu, 0x2B43D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B43D4u;
label_2b43d4:
    // 0x2b43d4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2B43D4u;
    {
        const bool branch_taken_0x2b43d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B43D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B43D4u;
        // 0x2b43d8: 0x8e820070  lw          $v0, 0x70($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b43d4) {
            ctx->pc = 0x2B43ECu;
            goto label_2b43ec;
        }
    }
    ctx->pc = 0x2B43DCu;
    // 0x2b43dc: 0x0  nop
    ctx->pc = 0x2b43dcu;
    // NOP
label_2b43e0:
    // 0x2b43e0: 0xc0ca5ac  jal         func_3296B0
    ctx->pc = 0x2B43E0u;
    SET_GPR_U32(ctx, 31, 0x2B43E8u);
    ctx->pc = 0x2B43E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B43E0u;
    // 0x2b43e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3296B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3296B0u, 0x2B43E0u, 0x2B43E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B43E8u;
label_2b43e8:
    // 0x2b43e8: 0x8e820070  lw          $v0, 0x70($s4)
    ctx->pc = 0x2b43e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
label_2b43ec:
    // 0x2b43ec: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2b43ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2b43f0: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2b43f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b43f4: 0x5440ffdc  bnel        $v0, $zero, . + 4 + (-0x24 << 2)
    ctx->pc = 0x2B43F4u;
    {
        const bool branch_taken_0x2b43f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b43f4) {
            ctx->pc = 0x2B43F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B43F4u;
            // 0x2b43f8: 0x8e8200c8  lw          $v0, 0xC8($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 200)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4368u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b4368;
        }
    }
    ctx->pc = 0x2B43FCu;
label_2b43fc:
    // 0x2b43fc: 0x100003b8  b           . + 4 + (0x3B8 << 2)
    ctx->pc = 0x2B43FCu;
    {
        const bool branch_taken_0x2b43fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B43FCu;
        // 0x2b4400: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b43fc) {
            ctx->pc = 0x2B52E0u;
            goto label_2b52e0;
        }
    }
    ctx->pc = 0x2B4404u;
    // 0x2b4404: 0x0  nop
    ctx->pc = 0x2b4404u;
    // NOP
label_2b4408:
    // 0x2b4408: 0x14620021  bne         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2B4408u;
    {
        const bool branch_taken_0x2b4408 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B440Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4408u;
        // 0x2b440c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4408) {
            ctx->pc = 0x2B4490u;
            goto label_2b4490;
        }
    }
    ctx->pc = 0x2B4410u;
    // 0x2b4410: 0x8e820080  lw          $v0, 0x80($s4)
    ctx->pc = 0x2b4410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 128)));
    // 0x2b4414: 0x1840001b  blez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2B4414u;
    {
        const bool branch_taken_0x2b4414 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2B4418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4414u;
        // 0x2b4418: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4414) {
            ctx->pc = 0x2B4484u;
            goto label_2b4484;
        }
    }
    ctx->pc = 0x2B441Cu;
    // 0x2b441c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2b441cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2b4420: 0x2695004c  addiu       $s5, $s4, 0x4C
    ctx->pc = 0x2b4420u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 76));
    // 0x2b4424: 0x8e8200c8  lw          $v0, 0xC8($s4)
    ctx->pc = 0x2b4424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 200)));
label_2b4428:
    // 0x2b4428: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B4428u;
    {
        const bool branch_taken_0x2b4428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B442Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4428u;
        // 0x2b442c: 0x128900  sll         $s1, $s2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4428) {
            ctx->pc = 0x2B4450u;
            goto label_2b4450;
        }
    }
    ctx->pc = 0x2B4430u;
    // 0x2b4430: 0x8e9000a8  lw          $s0, 0xA8($s4)
    ctx->pc = 0x2b4430u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 168)));
    // 0x2b4434: 0x2321023  subu        $v0, $s1, $s2
    ctx->pc = 0x2b4434u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x2b4438: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2b4438u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b443c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b443cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b4440: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2b4440u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2b4444: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2B4444u;
    SET_GPR_U32(ctx, 31, 0x2B444Cu);
    ctx->pc = 0x2B4448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4444u;
    // 0x2b4448: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2B4444u, 0x2B444Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B444Cu;
label_2b444c:
    // 0x2b444c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2b444cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_2b4450:
    // 0x2b4450: 0x8e8300a8  lw          $v1, 0xA8($s4)
    ctx->pc = 0x2b4450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 168)));
    // 0x2b4454: 0x2321023  subu        $v0, $s1, $s2
    ctx->pc = 0x2b4454u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x2b4458: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b4458u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b445c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2b445cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2b4460: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2b4460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b4464: 0xe4740014  swc1        $f20, 0x14($v1)
    ctx->pc = 0x2b4464u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x2b4468: 0xac740000  sw          $s4, 0x0($v1)
    ctx->pc = 0x2b4468u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 20));
    // 0x2b446c: 0xac750004  sw          $s5, 0x4($v1)
    ctx->pc = 0x2b446cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 21));
    // 0x2b4470: 0xe4740010  swc1        $f20, 0x10($v1)
    ctx->pc = 0x2b4470u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x2b4474: 0x8e820080  lw          $v0, 0x80($s4)
    ctx->pc = 0x2b4474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 128)));
    // 0x2b4478: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2b4478u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b447c: 0x5440ffea  bnel        $v0, $zero, . + 4 + (-0x16 << 2)
    ctx->pc = 0x2B447Cu;
    {
        const bool branch_taken_0x2b447c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b447c) {
            ctx->pc = 0x2B4480u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B447Cu;
            // 0x2b4480: 0x8e8200c8  lw          $v0, 0xC8($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 200)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4428u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b4428;
        }
    }
    ctx->pc = 0x2B4484u;
label_2b4484:
    // 0x2b4484: 0x10000396  b           . + 4 + (0x396 << 2)
    ctx->pc = 0x2B4484u;
    {
        const bool branch_taken_0x2b4484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4484u;
        // 0x2b4488: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4484) {
            ctx->pc = 0x2B52E0u;
            goto label_2b52e0;
        }
    }
    ctx->pc = 0x2B448Cu;
    // 0x2b448c: 0x0  nop
    ctx->pc = 0x2b448cu;
    // NOP
label_2b4490:
    // 0x2b4490: 0x1462001f  bne         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2B4490u;
    {
        const bool branch_taken_0x2b4490 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B4494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4490u;
        // 0x2b4494: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4490) {
            ctx->pc = 0x2B4510u;
            goto label_2b4510;
        }
    }
    ctx->pc = 0x2B4498u;
    // 0x2b4498: 0x8e820084  lw          $v0, 0x84($s4)
    ctx->pc = 0x2b4498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
    // 0x2b449c: 0x1840001a  blez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2B449Cu;
    {
        const bool branch_taken_0x2b449c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2B44A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B449Cu;
        // 0x2b44a0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b449c) {
            ctx->pc = 0x2B4508u;
            goto label_2b4508;
        }
    }
    ctx->pc = 0x2B44A4u;
    // 0x2b44a4: 0x2695004c  addiu       $s5, $s4, 0x4C
    ctx->pc = 0x2b44a4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 76));
    // 0x2b44a8: 0x8e8200c8  lw          $v0, 0xC8($s4)
    ctx->pc = 0x2b44a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 200)));
    // 0x2b44ac: 0x0  nop
    ctx->pc = 0x2b44acu;
    // NOP
label_2b44b0:
    // 0x2b44b0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B44B0u;
    {
        const bool branch_taken_0x2b44b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B44B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B44B0u;
        // 0x2b44b4: 0x118100  sll         $s0, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b44b0) {
            ctx->pc = 0x2B44D8u;
            goto label_2b44d8;
        }
    }
    ctx->pc = 0x2B44B8u;
    // 0x2b44b8: 0x8e8200ac  lw          $v0, 0xAC($s4)
    ctx->pc = 0x2b44b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 172)));
    // 0x2b44bc: 0x2112023  subu        $a0, $s0, $s1
    ctx->pc = 0x2b44bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x2b44c0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2b44c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b44c4: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2b44c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2b44c8: 0xc0abad8  jal         func_2AEB60
    ctx->pc = 0x2B44C8u;
    SET_GPR_U32(ctx, 31, 0x2B44D0u);
    ctx->pc = 0x2B44CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B44C8u;
    // 0x2b44cc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AEB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AEB60u, 0x2B44C8u, 0x2B44D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B44D0u;
label_2b44d0:
    // 0x2b44d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B44D0u;
    {
        const bool branch_taken_0x2b44d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B44D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B44D0u;
        // 0x2b44d4: 0x8e8200ac  lw          $v0, 0xAC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 172)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b44d0) {
            ctx->pc = 0x2B44DCu;
            goto label_2b44dc;
        }
    }
    ctx->pc = 0x2B44D8u;
label_2b44d8:
    // 0x2b44d8: 0x8e8200ac  lw          $v0, 0xAC($s4)
    ctx->pc = 0x2b44d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 172)));
label_2b44dc:
    // 0x2b44dc: 0x2112023  subu        $a0, $s0, $s1
    ctx->pc = 0x2b44dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x2b44e0: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2b44e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2b44e4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2b44e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b44e8: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x2b44e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b44ec: 0xc0abb3a  jal         func_2AECE8
    ctx->pc = 0x2B44ECu;
    SET_GPR_U32(ctx, 31, 0x2B44F4u);
    ctx->pc = 0x2B44F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B44ECu;
    // 0x2b44f0: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AECE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AECE8u, 0x2B44ECu, 0x2B44F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B44F4u;
label_2b44f4:
    // 0x2b44f4: 0x8e820084  lw          $v0, 0x84($s4)
    ctx->pc = 0x2b44f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
    // 0x2b44f8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2b44f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2b44fc: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2b44fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b4500: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2B4500u;
    {
        const bool branch_taken_0x2b4500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b4500) {
            ctx->pc = 0x2B4504u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4500u;
            // 0x2b4504: 0x8e8200c8  lw          $v0, 0xC8($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 200)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B44B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b44b0;
        }
    }
    ctx->pc = 0x2B4508u;
label_2b4508:
    // 0x2b4508: 0x10000375  b           . + 4 + (0x375 << 2)
    ctx->pc = 0x2B4508u;
    {
        const bool branch_taken_0x2b4508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B450Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4508u;
        // 0x2b450c: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4508) {
            ctx->pc = 0x2B52E0u;
            goto label_2b52e0;
        }
    }
    ctx->pc = 0x2B4510u;
label_2b4510:
    // 0x2b4510: 0x1462036b  bne         $v1, $v0, . + 4 + (0x36B << 2)
    ctx->pc = 0x2B4510u;
    {
        const bool branch_taken_0x2b4510 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B4514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4510u;
        // 0x2b4514: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4510) {
            ctx->pc = 0x2B52C0u;
            goto label_2b52c0;
        }
    }
    ctx->pc = 0x2B4518u;
    // 0x2b4518: 0x8e82007c  lw          $v0, 0x7C($s4)
    ctx->pc = 0x2b4518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 124)));
    // 0x2b451c: 0x18400366  blez        $v0, . + 4 + (0x366 << 2)
    ctx->pc = 0x2B451Cu;
    {
        const bool branch_taken_0x2b451c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2B4520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B451Cu;
        // 0x2b4520: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b451c) {
            ctx->pc = 0x2B52B8u;
            goto label_2b52b8;
        }
    }
    ctx->pc = 0x2B4524u;
    // 0x2b4524: 0x8e8600a4  lw          $a2, 0xA4($s4)
    ctx->pc = 0x2b4524u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 164)));
    // 0x2b4528: 0x8e8500c8  lw          $a1, 0xC8($s4)
    ctx->pc = 0x2b4528u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 200)));
    // 0x2b452c: 0x0  nop
    ctx->pc = 0x2b452cu;
    // NOP
label_2b4530:
    // 0x2b4530: 0x14a00044  bnez        $a1, . + 4 + (0x44 << 2)
    ctx->pc = 0x2B4530u;
    {
        const bool branch_taken_0x2b4530 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B4534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4530u;
        // 0x2b4534: 0x17f0c0  sll         $fp, $s7, 3 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 23), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4530) {
            ctx->pc = 0x2B4644u;
            goto label_2b4644;
        }
    }
    ctx->pc = 0x2B4538u;
    // 0x2b4538: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2b4538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b453c: 0x3d78021  addu        $s0, $fp, $s7
    ctx->pc = 0x2b453cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 23)));
    // 0x2b4540: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x2b4540u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2b4544: 0x2178023  subu        $s0, $s0, $s7
    ctx->pc = 0x2b4544u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
    // 0x2b4548: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x2b4548u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2b454c: 0xd08021  addu        $s0, $a2, $s0
    ctx->pc = 0x2b454cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x2b4550: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2B4550u;
    SET_GPR_U32(ctx, 31, 0x2B4558u);
    ctx->pc = 0x2B4554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4550u;
    // 0x2b4554: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2B4550u, 0x2B4558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4558u;
label_2b4558:
    // 0x2b4558: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2b4558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2b455c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2b455cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x2b4560: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2B4560u;
    SET_GPR_U32(ctx, 31, 0x2B4568u);
    ctx->pc = 0x2B4564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4560u;
    // 0x2b4564: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2B4560u, 0x2B4568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4568u;
label_2b4568:
    // 0x2b4568: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2b4568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b456c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2b456cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2b4570: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2B4570u;
    SET_GPR_U32(ctx, 31, 0x2B4578u);
    ctx->pc = 0x2B4574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4570u;
    // 0x2b4574: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2B4570u, 0x2B4578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4578u;
label_2b4578:
    // 0x2b4578: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x2b4578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2b457c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2b457cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2b4580: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2B4580u;
    SET_GPR_U32(ctx, 31, 0x2B4588u);
    ctx->pc = 0x2B4584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4580u;
    // 0x2b4584: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2B4580u, 0x2B4588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4588u;
label_2b4588:
    // 0x2b4588: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x2b4588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2b458c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2b458cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x2b4590: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2B4590u;
    SET_GPR_U32(ctx, 31, 0x2B4598u);
    ctx->pc = 0x2B4594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4590u;
    // 0x2b4594: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2B4590u, 0x2B4598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4598u;
label_2b4598:
    // 0x2b4598: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x2b4598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2b459c: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x2b459cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x2b45a0: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2B45A0u;
    SET_GPR_U32(ctx, 31, 0x2B45A8u);
    ctx->pc = 0x2B45A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B45A0u;
    // 0x2b45a4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2B45A0u, 0x2B45A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B45A8u;
label_2b45a8:
    // 0x2b45a8: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x2b45a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2b45ac: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x2b45acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x2b45b0: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2B45B0u;
    SET_GPR_U32(ctx, 31, 0x2B45B8u);
    ctx->pc = 0x2B45B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B45B0u;
    // 0x2b45b4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2B45B0u, 0x2B45B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B45B8u;
label_2b45b8:
    // 0x2b45b8: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x2b45b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2b45bc: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x2b45bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x2b45c0: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2B45C0u;
    SET_GPR_U32(ctx, 31, 0x2B45C8u);
    ctx->pc = 0x2B45C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B45C0u;
    // 0x2b45c4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2B45C0u, 0x2B45C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B45C8u;
label_2b45c8:
    // 0x2b45c8: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x2b45c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2b45cc: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x2b45ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x2b45d0: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2B45D0u;
    SET_GPR_U32(ctx, 31, 0x2B45D8u);
    ctx->pc = 0x2B45D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B45D0u;
    // 0x2b45d4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2B45D0u, 0x2B45D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B45D8u;
label_2b45d8:
    // 0x2b45d8: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x2b45d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2b45dc: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x2b45dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x2b45e0: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2B45E0u;
    SET_GPR_U32(ctx, 31, 0x2B45E8u);
    ctx->pc = 0x2B45E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B45E0u;
    // 0x2b45e4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2B45E0u, 0x2B45E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B45E8u;
label_2b45e8:
    // 0x2b45e8: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x2b45e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2b45ec: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x2b45ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x2b45f0: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2B45F0u;
    SET_GPR_U32(ctx, 31, 0x2B45F8u);
    ctx->pc = 0x2B45F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B45F0u;
    // 0x2b45f4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2B45F0u, 0x2B45F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B45F8u;
label_2b45f8:
    // 0x2b45f8: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x2b45f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2b45fc: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x2b45fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x2b4600: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2B4600u;
    SET_GPR_U32(ctx, 31, 0x2B4608u);
    ctx->pc = 0x2B4604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4600u;
    // 0x2b4604: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2B4600u, 0x2B4608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4608u;
label_2b4608:
    // 0x2b4608: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x2b4608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2b460c: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x2b460cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x2b4610: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2B4610u;
    SET_GPR_U32(ctx, 31, 0x2B4618u);
    ctx->pc = 0x2B4614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4610u;
    // 0x2b4614: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2B4610u, 0x2B4618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4618u;
label_2b4618:
    // 0x2b4618: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x2b4618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2b461c: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x2b461cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x2b4620: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2B4620u;
    SET_GPR_U32(ctx, 31, 0x2B4628u);
    ctx->pc = 0x2B4624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4620u;
    // 0x2b4624: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2B4620u, 0x2B4628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4628u;
label_2b4628:
    // 0x2b4628: 0x8e040078  lw          $a0, 0x78($s0)
    ctx->pc = 0x2b4628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x2b462c: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x2b462cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x2b4630: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2B4630u;
    SET_GPR_U32(ctx, 31, 0x2B4638u);
    ctx->pc = 0x2B4634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4630u;
    // 0x2b4634: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2B4630u, 0x2B4638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4638u;
label_2b4638:
    // 0x2b4638: 0xae020078  sw          $v0, 0x78($s0)
    ctx->pc = 0x2b4638u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
    // 0x2b463c: 0x8e8500c8  lw          $a1, 0xC8($s4)
    ctx->pc = 0x2b463cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 200)));
    // 0x2b4640: 0x8e8600a4  lw          $a2, 0xA4($s4)
    ctx->pc = 0x2b4640u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 164)));
label_2b4644:
    // 0x2b4644: 0x3d71021  addu        $v0, $fp, $s7
    ctx->pc = 0x2b4644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 23)));
    // 0x2b4648: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2b4648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b464c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b464cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b4650: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2b4650u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4654: 0x571023  subu        $v0, $v0, $s7
    ctx->pc = 0x2b4654u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x2b4658: 0x14a00312  bnez        $a1, . + 4 + (0x312 << 2)
    ctx->pc = 0x2B4658u;
    {
        const bool branch_taken_0x2b4658 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B465Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4658u;
        // 0x2b465c: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4658) {
            ctx->pc = 0x2B52A4u;
            goto label_2b52a4;
        }
    }
    ctx->pc = 0x2B4660u;
    // 0x2b4660: 0xc21821  addu        $v1, $a2, $v0
    ctx->pc = 0x2b4660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2b4664: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x2b4664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x2b4668: 0x18400052  blez        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x2B4668u;
    {
        const bool branch_taken_0x2b4668 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2B466Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4668u;
        // 0x2b466c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4668) {
            ctx->pc = 0x2B47B4u;
            goto label_2b47b4;
        }
    }
    ctx->pc = 0x2B4670u;
label_2b4670:
    // 0x2b4670: 0x971021  addu        $v0, $a0, $s7
    ctx->pc = 0x2b4670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 23)));
    // 0x2b4674: 0x152180  sll         $a0, $s5, 6
    ctx->pc = 0x2b4674u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 6));
    // 0x2b4678: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b4678u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b467c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2b467cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2b4680: 0x571023  subu        $v0, $v0, $s7
    ctx->pc = 0x2b4680u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x2b4684: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b4684u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b4688: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x2b4688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2b468c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2b468cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2b4690: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x2b4690u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b4694: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x2b4694u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2b4698: 0x10650007  beq         $v1, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B4698u;
    {
        const bool branch_taken_0x2b4698 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x2B469Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4698u;
        // 0x2b469c: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4698) {
            ctx->pc = 0x2B46B8u;
            goto label_2b46b8;
        }
    }
    ctx->pc = 0x2B46A0u;
    // 0x2b46a0: 0x14620019  bne         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2B46A0u;
    {
        const bool branch_taken_0x2b46a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B46A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B46A0u;
        // 0x2b46a4: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b46a0) {
            ctx->pc = 0x2B4708u;
            goto label_2b4708;
        }
    }
    ctx->pc = 0x2B46A8u;
    // 0x2b46a8: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x2b46a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2b46ac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b46acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b46b0: 0x54620031  bnel        $v1, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x2B46B0u;
    {
        const bool branch_taken_0x2b46b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b46b0) {
            ctx->pc = 0x2B46B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B46B0u;
            // 0x2b46b4: 0x8e440008  lw          $a0, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4778u;
            goto label_2b4778;
        }
    }
    ctx->pc = 0x2B46B8u;
label_2b46b8:
    // 0x2b46b8: 0x2650000c  addiu       $s0, $s2, 0xC
    ctx->pc = 0x2b46b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x2b46bc: 0x26510010  addiu       $s1, $s2, 0x10
    ctx->pc = 0x2b46bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2b46c0: 0xc0aa7aa  jal         func_2A9EA8
    ctx->pc = 0x2B46C0u;
    SET_GPR_U32(ctx, 31, 0x2B46C8u);
    ctx->pc = 0x2B46C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B46C0u;
    // 0x2b46c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9EA8u, 0x2B46C0u, 0x2B46C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B46C8u;
label_2b46c8:
    // 0x2b46c8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2b46c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b46cc: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2B46CCu;
    SET_GPR_U32(ctx, 31, 0x2B46D4u);
    ctx->pc = 0x2B46D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B46CCu;
    // 0x2b46d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2B46CCu, 0x2B46D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B46D4u;
label_2b46d4:
    // 0x2b46d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b46d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b46d8: 0xc0aa7a6  jal         func_2A9E98
    ctx->pc = 0x2B46D8u;
    SET_GPR_U32(ctx, 31, 0x2B46E0u);
    ctx->pc = 0x2B46DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B46D8u;
    // 0x2b46dc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E98u, 0x2B46D8u, 0x2B46E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B46E0u;
label_2b46e0:
    // 0x2b46e0: 0xc0aa7aa  jal         func_2A9EA8
    ctx->pc = 0x2B46E0u;
    SET_GPR_U32(ctx, 31, 0x2B46E8u);
    ctx->pc = 0x2B46E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B46E0u;
    // 0x2b46e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9EA8u, 0x2B46E0u, 0x2B46E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B46E8u;
label_2b46e8:
    // 0x2b46e8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2b46e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b46ec: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2B46ECu;
    SET_GPR_U32(ctx, 31, 0x2B46F4u);
    ctx->pc = 0x2B46F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B46ECu;
    // 0x2b46f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2B46ECu, 0x2B46F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B46F4u;
label_2b46f4:
    // 0x2b46f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b46f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b46f8: 0xc0aa7a6  jal         func_2A9E98
    ctx->pc = 0x2B46F8u;
    SET_GPR_U32(ctx, 31, 0x2B4700u);
    ctx->pc = 0x2B46FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B46F8u;
    // 0x2b46fc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E98u, 0x2B46F8u, 0x2B4700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4700u;
label_2b4700:
    // 0x2b4700: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2B4700u;
    {
        const bool branch_taken_0x2b4700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4700u;
        // 0x2b4704: 0x8e440008  lw          $a0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4700) {
            ctx->pc = 0x2B4778u;
            goto label_2b4778;
        }
    }
    ctx->pc = 0x2B4708u;
label_2b4708:
    // 0x2b4708: 0x5462001b  bnel        $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2B4708u;
    {
        const bool branch_taken_0x2b4708 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b4708) {
            ctx->pc = 0x2B470Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4708u;
            // 0x2b470c: 0x8e440008  lw          $a0, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4778u;
            goto label_2b4778;
        }
    }
    ctx->pc = 0x2B4710u;
    // 0x2b4710: 0xc0aa7a8  jal         func_2A9EA0
    ctx->pc = 0x2B4710u;
    SET_GPR_U32(ctx, 31, 0x2B4718u);
    ctx->pc = 0x2B4714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4710u;
    // 0x2b4714: 0x26440018  addiu       $a0, $s2, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9EA0u, 0x2B4710u, 0x2B4718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4718u;
label_2b4718:
    // 0x2b4718: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B4718u;
    {
        const bool branch_taken_0x2b4718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B471Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4718u;
        // 0x2b471c: 0x2650000c  addiu       $s0, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4718) {
            ctx->pc = 0x2B4740u;
            goto label_2b4740;
        }
    }
    ctx->pc = 0x2B4720u;
    // 0x2b4720: 0xc0aa7aa  jal         func_2A9EA8
    ctx->pc = 0x2B4720u;
    SET_GPR_U32(ctx, 31, 0x2B4728u);
    ctx->pc = 0x2B4724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4720u;
    // 0x2b4724: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9EA8u, 0x2B4720u, 0x2B4728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4728u;
label_2b4728:
    // 0x2b4728: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2b4728u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b472c: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2B472Cu;
    SET_GPR_U32(ctx, 31, 0x2B4734u);
    ctx->pc = 0x2B4730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B472Cu;
    // 0x2b4730: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2B472Cu, 0x2B4734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4734u;
label_2b4734:
    // 0x2b4734: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b4734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4738: 0xc0aa7a6  jal         func_2A9E98
    ctx->pc = 0x2B4738u;
    SET_GPR_U32(ctx, 31, 0x2B4740u);
    ctx->pc = 0x2B473Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4738u;
    // 0x2b473c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E98u, 0x2B4738u, 0x2B4740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4740u;
label_2b4740:
    // 0x2b4740: 0xc0aa7a8  jal         func_2A9EA0
    ctx->pc = 0x2B4740u;
    SET_GPR_U32(ctx, 31, 0x2B4748u);
    ctx->pc = 0x2B4744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4740u;
    // 0x2b4744: 0x2644001c  addiu       $a0, $s2, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9EA0u, 0x2B4740u, 0x2B4748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4748u;
label_2b4748:
    // 0x2b4748: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2B4748u;
    {
        const bool branch_taken_0x2b4748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b4748) {
            ctx->pc = 0x2B474Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4748u;
            // 0x2b474c: 0x8e440008  lw          $a0, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4778u;
            goto label_2b4778;
        }
    }
    ctx->pc = 0x2B4750u;
    // 0x2b4750: 0x26500010  addiu       $s0, $s2, 0x10
    ctx->pc = 0x2b4750u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2b4754: 0xc0aa7aa  jal         func_2A9EA8
    ctx->pc = 0x2B4754u;
    SET_GPR_U32(ctx, 31, 0x2B475Cu);
    ctx->pc = 0x2B4758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4754u;
    // 0x2b4758: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9EA8u, 0x2B4754u, 0x2B475Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B475Cu;
label_2b475c:
    // 0x2b475c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2b475cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4760: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2B4760u;
    SET_GPR_U32(ctx, 31, 0x2B4768u);
    ctx->pc = 0x2B4764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4760u;
    // 0x2b4764: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2B4760u, 0x2B4768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4768u;
label_2b4768:
    // 0x2b4768: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b4768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b476c: 0xc0aa7a6  jal         func_2A9E98
    ctx->pc = 0x2B476Cu;
    SET_GPR_U32(ctx, 31, 0x2B4774u);
    ctx->pc = 0x2B4770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B476Cu;
    // 0x2b4770: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E98u, 0x2B476Cu, 0x2B4774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4774u;
label_2b4774:
    // 0x2b4774: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x2b4774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2b4778:
    // 0x2b4778: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2b4778u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b477c: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2B477Cu;
    SET_GPR_U32(ctx, 31, 0x2B4784u);
    ctx->pc = 0x2B4780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B477Cu;
    // 0x2b4780: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2B477Cu, 0x2B4784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4784u;
label_2b4784:
    // 0x2b4784: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2b4784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4788: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x2b4788u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x2b478c: 0x3d71821  addu        $v1, $fp, $s7
    ctx->pc = 0x2b478cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 23)));
    // 0x2b4790: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b4790u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b4794: 0x8e8600a4  lw          $a2, 0xA4($s4)
    ctx->pc = 0x2b4794u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 164)));
    // 0x2b4798: 0x771823  subu        $v1, $v1, $s7
    ctx->pc = 0x2b4798u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x2b479c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b479cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b47a0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x2b47a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2b47a4: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x2b47a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x2b47a8: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x2b47a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b47ac: 0x1440ffb0  bnez        $v0, . + 4 + (-0x50 << 2)
    ctx->pc = 0x2B47ACu;
    {
        const bool branch_taken_0x2b47ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B47B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B47ACu;
        // 0x2b47b0: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b47ac) {
            ctx->pc = 0x2B4670u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b4670;
        }
    }
    ctx->pc = 0x2B47B4u;
label_2b47b4:
    // 0x2b47b4: 0x3d71021  addu        $v0, $fp, $s7
    ctx->pc = 0x2b47b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 23)));
    // 0x2b47b8: 0x3c0902d  daddu       $s2, $fp, $zero
    ctx->pc = 0x2b47b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b47bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b47bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b47c0: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2b47c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b47c4: 0x571023  subu        $v0, $v0, $s7
    ctx->pc = 0x2b47c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x2b47c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b47c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b47cc: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2b47ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2b47d0: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x2b47d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x2b47d4: 0x18600015  blez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2B47D4u;
    {
        const bool branch_taken_0x2b47d4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2B47D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B47D4u;
        // 0x2b47d8: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b47d4) {
            ctx->pc = 0x2B482Cu;
            goto label_2b482c;
        }
    }
    ctx->pc = 0x2B47DCu;
    // 0x2b47dc: 0x0  nop
    ctx->pc = 0x2b47dcu;
    // NOP
label_2b47e0:
    // 0x2b47e0: 0x2578821  addu        $s1, $s2, $s7
    ctx->pc = 0x2b47e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 23)));
    // 0x2b47e4: 0x151900  sll         $v1, $s5, 4
    ctx->pc = 0x2b47e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x2b47e8: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x2b47e8u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2b47ec: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2b47ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b47f0: 0x2378823  subu        $s1, $s1, $s7
    ctx->pc = 0x2b47f0u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
    // 0x2b47f4: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2b47f4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2b47f8: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x2b47f8u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2b47fc: 0x911021  addu        $v0, $a0, $s1
    ctx->pc = 0x2b47fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x2b4800: 0x8c500078  lw          $s0, 0x78($v0)
    ctx->pc = 0x2b4800u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x2b4804: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x2b4804u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2b4808: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2B4808u;
    SET_GPR_U32(ctx, 31, 0x2B4810u);
    ctx->pc = 0x2B480Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4808u;
    // 0x2b480c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2B4808u, 0x2B4810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4810u;
label_2b4810:
    // 0x2b4810: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2b4810u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2b4814: 0x8e8600a4  lw          $a2, 0xA4($s4)
    ctx->pc = 0x2b4814u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 164)));
    // 0x2b4818: 0xd18821  addu        $s1, $a2, $s1
    ctx->pc = 0x2b4818u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x2b481c: 0x8e22007c  lw          $v0, 0x7C($s1)
    ctx->pc = 0x2b481cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x2b4820: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x2b4820u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b4824: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2B4824u;
    {
        const bool branch_taken_0x2b4824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B4828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4824u;
        // 0x2b4828: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4824) {
            ctx->pc = 0x2B47E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b47e0;
        }
    }
    ctx->pc = 0x2B482Cu;
label_2b482c:
    // 0x2b482c: 0x3d71021  addu        $v0, $fp, $s7
    ctx->pc = 0x2b482cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 23)));
    // 0x2b4830: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2b4830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4834: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b4834u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b4838: 0x571023  subu        $v0, $v0, $s7
    ctx->pc = 0x2b4838u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x2b483c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x2b483cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b4840: 0xc41821  addu        $v1, $a2, $a0
    ctx->pc = 0x2b4840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2b4844: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x2b4844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x2b4848: 0x18400027  blez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2B4848u;
    {
        const bool branch_taken_0x2b4848 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2B484Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4848u;
        // 0x2b484c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4848) {
            ctx->pc = 0x2B48E8u;
            goto label_2b48e8;
        }
    }
    ctx->pc = 0x2B4850u;
    // 0x2b4850: 0x3c160100  lui         $s6, 0x100
    ctx->pc = 0x2b4850u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)256 << 16));
    // 0x2b4854: 0x3c15feff  lui         $s5, 0xFEFF
    ctx->pc = 0x2b4854u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65279 << 16));
    // 0x2b4858: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2b4858u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b485c: 0x36d60001  ori         $s6, $s6, 0x1
    ctx->pc = 0x2b485cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)1);
    // 0x2b4860: 0x36b5fffe  ori         $s5, $s5, 0xFFFE
    ctx->pc = 0x2b4860u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)65534);
    // 0x2b4864: 0x0  nop
    ctx->pc = 0x2b4864u;
    // NOP
label_2b4868:
    // 0x2b4868: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x2b4868u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x2b486c: 0xb21821  addu        $v1, $a1, $s2
    ctx->pc = 0x2b486cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x2b4870: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x2b4870u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2b4874: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x2b4874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2b4878: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b4878u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b487c: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x2b487cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2b4880: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b4880u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b4884: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x2b4884u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2b4888: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2b4888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2b488c: 0x751024  and         $v0, $v1, $s5
    ctx->pc = 0x2b488cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 21));
    // 0x2b4890: 0x761824  and         $v1, $v1, $s6
    ctx->pc = 0x2b4890u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 22));
    // 0x2b4894: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2B4894u;
    {
        const bool branch_taken_0x2b4894 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4894u;
        // 0x2b4898: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4894) {
            ctx->pc = 0x2B48D4u;
            goto label_2b48d4;
        }
    }
    ctx->pc = 0x2B489Cu;
    // 0x2b489c: 0x8e040064  lw          $a0, 0x64($s0)
    ctx->pc = 0x2b489cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x2b48a0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2b48a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b48a4: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2B48A4u;
    SET_GPR_U32(ctx, 31, 0x2B48ACu);
    ctx->pc = 0x2B48A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B48A4u;
    // 0x2b48a8: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2B48A4u, 0x2B48ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B48ACu;
label_2b48ac:
    // 0x2b48ac: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x2b48acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2b48b0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x2b48b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x2b48b4: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2B48B4u;
    SET_GPR_U32(ctx, 31, 0x2B48BCu);
    ctx->pc = 0x2B48B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B48B4u;
    // 0x2b48b8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2B48B4u, 0x2B48BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B48BCu;
label_2b48bc:
    // 0x2b48bc: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2b48bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2b48c0: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x2b48c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    // 0x2b48c4: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2B48C4u;
    SET_GPR_U32(ctx, 31, 0x2B48CCu);
    ctx->pc = 0x2B48C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B48C4u;
    // 0x2b48c8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2B48C4u, 0x2B48CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B48CCu;
label_2b48cc:
    // 0x2b48cc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2b48ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2b48d0: 0x8e8600a4  lw          $a2, 0xA4($s4)
    ctx->pc = 0x2b48d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 164)));
label_2b48d4:
    // 0x2b48d4: 0xd21821  addu        $v1, $a2, $s2
    ctx->pc = 0x2b48d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x2b48d8: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x2b48d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x2b48dc: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2b48dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b48e0: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x2B48E0u;
    {
        const bool branch_taken_0x2b48e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B48E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B48E0u;
        // 0x2b48e4: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b48e0) {
            ctx->pc = 0x2B4868u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b4868;
        }
    }
    ctx->pc = 0x2B48E8u;
label_2b48e8:
    // 0x2b48e8: 0x3d71021  addu        $v0, $fp, $s7
    ctx->pc = 0x2b48e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 23)));
    // 0x2b48ec: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2b48ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b48f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b48f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b48f4: 0x571023  subu        $v0, $v0, $s7
    ctx->pc = 0x2b48f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x2b48f8: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x2b48f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b48fc: 0xc41821  addu        $v1, $a2, $a0
    ctx->pc = 0x2b48fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2b4900: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x2b4900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x2b4904: 0x18400026  blez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2B4904u;
    {
        const bool branch_taken_0x2b4904 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2B4908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4904u;
        // 0x2b4908: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4904) {
            ctx->pc = 0x2B49A0u;
            goto label_2b49a0;
        }
    }
    ctx->pc = 0x2B490Cu;
    // 0x2b490c: 0x3c160100  lui         $s6, 0x100
    ctx->pc = 0x2b490cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)256 << 16));
    // 0x2b4910: 0x3c15feff  lui         $s5, 0xFEFF
    ctx->pc = 0x2b4910u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65279 << 16));
    // 0x2b4914: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2b4914u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4918: 0x36d60001  ori         $s6, $s6, 0x1
    ctx->pc = 0x2b4918u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)1);
    // 0x2b491c: 0x36b5fffe  ori         $s5, $s5, 0xFFFE
    ctx->pc = 0x2b491cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)65534);
label_2b4920:
    // 0x2b4920: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x2b4920u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x2b4924: 0xb21821  addu        $v1, $a1, $s2
    ctx->pc = 0x2b4924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x2b4928: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x2b4928u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2b492c: 0x8c640024  lw          $a0, 0x24($v1)
    ctx->pc = 0x2b492cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x2b4930: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b4930u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b4934: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x2b4934u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2b4938: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b4938u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b493c: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x2b493cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2b4940: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2b4940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2b4944: 0x751024  and         $v0, $v1, $s5
    ctx->pc = 0x2b4944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 21));
    // 0x2b4948: 0x761824  and         $v1, $v1, $s6
    ctx->pc = 0x2b4948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 22));
    // 0x2b494c: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2B494Cu;
    {
        const bool branch_taken_0x2b494c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B494Cu;
        // 0x2b4950: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b494c) {
            ctx->pc = 0x2B498Cu;
            goto label_2b498c;
        }
    }
    ctx->pc = 0x2B4954u;
    // 0x2b4954: 0x8e040064  lw          $a0, 0x64($s0)
    ctx->pc = 0x2b4954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x2b4958: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2b4958u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b495c: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2B495Cu;
    SET_GPR_U32(ctx, 31, 0x2B4964u);
    ctx->pc = 0x2B4960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B495Cu;
    // 0x2b4960: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2B495Cu, 0x2B4964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4964u;
label_2b4964:
    // 0x2b4964: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x2b4964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2b4968: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x2b4968u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x2b496c: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2B496Cu;
    SET_GPR_U32(ctx, 31, 0x2B4974u);
    ctx->pc = 0x2B4970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B496Cu;
    // 0x2b4970: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2B496Cu, 0x2B4974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4974u;
label_2b4974:
    // 0x2b4974: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2b4974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2b4978: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x2b4978u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    // 0x2b497c: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2B497Cu;
    SET_GPR_U32(ctx, 31, 0x2B4984u);
    ctx->pc = 0x2B4980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B497Cu;
    // 0x2b4980: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2B497Cu, 0x2B4984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4984u;
label_2b4984:
    // 0x2b4984: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2b4984u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2b4988: 0x8e8600a4  lw          $a2, 0xA4($s4)
    ctx->pc = 0x2b4988u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 164)));
label_2b498c:
    // 0x2b498c: 0xd21821  addu        $v1, $a2, $s2
    ctx->pc = 0x2b498cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x2b4990: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x2b4990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x2b4994: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2b4994u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b4998: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x2B4998u;
    {
        const bool branch_taken_0x2b4998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B499Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4998u;
        // 0x2b499c: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4998) {
            ctx->pc = 0x2B4920u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b4920;
        }
    }
    ctx->pc = 0x2B49A0u;
label_2b49a0:
    // 0x2b49a0: 0x3d71021  addu        $v0, $fp, $s7
    ctx->pc = 0x2b49a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 23)));
    // 0x2b49a4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2b49a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b49a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b49a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b49ac: 0x571023  subu        $v0, $v0, $s7
    ctx->pc = 0x2b49acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x2b49b0: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x2b49b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b49b4: 0xc41821  addu        $v1, $a2, $a0
    ctx->pc = 0x2b49b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2b49b8: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x2b49b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x2b49bc: 0x1840001c  blez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2B49BCu;
    {
        const bool branch_taken_0x2b49bc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2B49C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B49BCu;
        // 0x2b49c0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b49bc) {
            ctx->pc = 0x2B4A30u;
            goto label_2b4a30;
        }
    }
    ctx->pc = 0x2B49C4u;
    // 0x2b49c4: 0x3c160100  lui         $s6, 0x100
    ctx->pc = 0x2b49c4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)256 << 16));
    // 0x2b49c8: 0x3c15feff  lui         $s5, 0xFEFF
    ctx->pc = 0x2b49c8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65279 << 16));
    // 0x2b49cc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2b49ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b49d0: 0x36d60001  ori         $s6, $s6, 0x1
    ctx->pc = 0x2b49d0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)1);
    // 0x2b49d4: 0x36b5fffe  ori         $s5, $s5, 0xFFFE
    ctx->pc = 0x2b49d4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)65534);
label_2b49d8:
    // 0x2b49d8: 0xb21021  addu        $v0, $a1, $s2
    ctx->pc = 0x2b49d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x2b49dc: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x2b49dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x2b49e0: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2b49e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2b49e4: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x2b49e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2b49e8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2b49e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2b49ec: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x2b49ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2b49f0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2b49f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2b49f4: 0x551824  and         $v1, $v0, $s5
    ctx->pc = 0x2b49f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x2b49f8: 0x561024  and         $v0, $v0, $s6
    ctx->pc = 0x2b49f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 22));
    // 0x2b49fc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B49FCu;
    {
        const bool branch_taken_0x2b49fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B49FCu;
        // 0x2b4a00: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b49fc) {
            ctx->pc = 0x2B4A1Cu;
            goto label_2b4a1c;
        }
    }
    ctx->pc = 0x2B4A04u;
    // 0x2b4a04: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x2b4a04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x2b4a08: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2b4a08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4a0c: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2B4A0Cu;
    SET_GPR_U32(ctx, 31, 0x2B4A14u);
    ctx->pc = 0x2B4A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4A0Cu;
    // 0x2b4a10: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2B4A0Cu, 0x2B4A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4A14u;
label_2b4a14:
    // 0x2b4a14: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2b4a14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2b4a18: 0x8e8600a4  lw          $a2, 0xA4($s4)
    ctx->pc = 0x2b4a18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 164)));
label_2b4a1c:
    // 0x2b4a1c: 0xd21821  addu        $v1, $a2, $s2
    ctx->pc = 0x2b4a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x2b4a20: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x2b4a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x2b4a24: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2b4a24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b4a28: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2B4A28u;
    {
        const bool branch_taken_0x2b4a28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B4A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4A28u;
        // 0x2b4a2c: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4a28) {
            ctx->pc = 0x2B49D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b49d8;
        }
    }
    ctx->pc = 0x2B4A30u;
label_2b4a30:
    // 0x2b4a30: 0x3d71021  addu        $v0, $fp, $s7
    ctx->pc = 0x2b4a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 23)));
    // 0x2b4a34: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2b4a34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4a38: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b4a38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b4a3c: 0x571023  subu        $v0, $v0, $s7
    ctx->pc = 0x2b4a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x2b4a40: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x2b4a40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b4a44: 0xc41821  addu        $v1, $a2, $a0
    ctx->pc = 0x2b4a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2b4a48: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x2b4a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x2b4a4c: 0x1840001c  blez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2B4A4Cu;
    {
        const bool branch_taken_0x2b4a4c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2B4A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4A4Cu;
        // 0x2b4a50: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4a4c) {
            ctx->pc = 0x2B4AC0u;
            goto label_2b4ac0;
        }
    }
    ctx->pc = 0x2B4A54u;
    // 0x2b4a54: 0x3c160100  lui         $s6, 0x100
    ctx->pc = 0x2b4a54u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)256 << 16));
    // 0x2b4a58: 0x3c15feff  lui         $s5, 0xFEFF
    ctx->pc = 0x2b4a58u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65279 << 16));
    // 0x2b4a5c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2b4a5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4a60: 0x36d60001  ori         $s6, $s6, 0x1
    ctx->pc = 0x2b4a60u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)1);
    // 0x2b4a64: 0x36b5fffe  ori         $s5, $s5, 0xFFFE
    ctx->pc = 0x2b4a64u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)65534);
label_2b4a68:
    // 0x2b4a68: 0xb21021  addu        $v0, $a1, $s2
    ctx->pc = 0x2b4a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x2b4a6c: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x2b4a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x2b4a70: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2b4a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2b4a74: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x2b4a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x2b4a78: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2b4a78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2b4a7c: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x2b4a7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2b4a80: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2b4a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2b4a84: 0x551824  and         $v1, $v0, $s5
    ctx->pc = 0x2b4a84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x2b4a88: 0x561024  and         $v0, $v0, $s6
    ctx->pc = 0x2b4a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 22));
    // 0x2b4a8c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B4A8Cu;
    {
        const bool branch_taken_0x2b4a8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4A8Cu;
        // 0x2b4a90: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4a8c) {
            ctx->pc = 0x2B4AACu;
            goto label_2b4aac;
        }
    }
    ctx->pc = 0x2B4A94u;
    // 0x2b4a94: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x2b4a94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x2b4a98: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2b4a98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4a9c: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2B4A9Cu;
    SET_GPR_U32(ctx, 31, 0x2B4AA4u);
    ctx->pc = 0x2B4AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4A9Cu;
    // 0x2b4aa0: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2B4A9Cu, 0x2B4AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4AA4u;
label_2b4aa4:
    // 0x2b4aa4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2b4aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2b4aa8: 0x8e8600a4  lw          $a2, 0xA4($s4)
    ctx->pc = 0x2b4aa8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 164)));
label_2b4aac:
    // 0x2b4aac: 0xd21821  addu        $v1, $a2, $s2
    ctx->pc = 0x2b4aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x2b4ab0: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x2b4ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x2b4ab4: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2b4ab4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b4ab8: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2B4AB8u;
    {
        const bool branch_taken_0x2b4ab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B4ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4AB8u;
        // 0x2b4abc: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4ab8) {
            ctx->pc = 0x2B4A68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b4a68;
        }
    }
    ctx->pc = 0x2B4AC0u;
label_2b4ac0:
    // 0x2b4ac0: 0x3d71021  addu        $v0, $fp, $s7
    ctx->pc = 0x2b4ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 23)));
    // 0x2b4ac4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2b4ac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4ac8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b4ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b4acc: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2b4accu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4ad0: 0x571023  subu        $v0, $v0, $s7
    ctx->pc = 0x2b4ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x2b4ad4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b4ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b4ad8: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2b4ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2b4adc: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x2b4adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x2b4ae0: 0x186000aa  blez        $v1, . + 4 + (0xAA << 2)
    ctx->pc = 0x2B4AE0u;
    {
        const bool branch_taken_0x2b4ae0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2B4AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4AE0u;
        // 0x2b4ae4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4ae0) {
            ctx->pc = 0x2B4D8Cu;
            goto label_2b4d8c;
        }
    }
    ctx->pc = 0x2B4AE8u;
label_2b4ae8:
    // 0x2b4ae8: 0x971821  addu        $v1, $a0, $s7
    ctx->pc = 0x2b4ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 23)));
    // 0x2b4aec: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x2b4aecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2b4af0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b4af0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b4af4: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x2b4af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x2b4af8: 0x771823  subu        $v1, $v1, $s7
    ctx->pc = 0x2b4af8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x2b4afc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2b4afcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b4b00: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b4b00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b4b04: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x2b4b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x2b4b08: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2b4b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2b4b0c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2b4b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b4b10: 0x8c65001c  lw          $a1, 0x1C($v1)
    ctx->pc = 0x2b4b10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2b4b14: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x2b4b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x2b4b18: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2b4b18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2b4b1c: 0xa48021  addu        $s0, $a1, $a0
    ctx->pc = 0x2b4b1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2b4b20: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2b4b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2b4b24: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2b4b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2b4b28: 0x1040008d  beqz        $v0, . + 4 + (0x8D << 2)
    ctx->pc = 0x2B4B28u;
    {
        const bool branch_taken_0x2b4b28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4B28u;
        // 0x2b4b2c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4b28) {
            ctx->pc = 0x2B4D60u;
            goto label_2b4d60;
        }
    }
    ctx->pc = 0x2B4B30u;
    // 0x2b4b30: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x2b4b30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x2b4b34: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2b4b34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2b4b38: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x2b4b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x2b4b3c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2b4b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2b4b40: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2B4B40u;
    SET_GPR_U32(ctx, 31, 0x2B4B48u);
    ctx->pc = 0x2B4B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4B40u;
    // 0x2b4b44: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2B4B40u, 0x2B4B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4B48u;
label_2b4b48:
    // 0x2b4b48: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2b4b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2b4b4c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2b4b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2b4b50: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x2b4b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x2b4b54: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B4B54u;
    {
        const bool branch_taken_0x2b4b54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b4b54) {
            ctx->pc = 0x2B4B58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4B54u;
            // 0x2b4b58: 0x30620020  andi        $v0, $v1, 0x20 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4B74u;
            goto label_2b4b74;
        }
    }
    ctx->pc = 0x2B4B5Cu;
    // 0x2b4b5c: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x2b4b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2b4b60: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2B4B60u;
    SET_GPR_U32(ctx, 31, 0x2B4B68u);
    ctx->pc = 0x2B4B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4B60u;
    // 0x2b4b64: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2B4B60u, 0x2B4B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4B68u;
label_2b4b68:
    // 0x2b4b68: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2b4b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2b4b6c: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x2b4b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x2b4b70: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x2b4b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_2b4b74:
    // 0x2b4b74: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B4B74u;
    {
        const bool branch_taken_0x2b4b74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b4b74) {
            ctx->pc = 0x2B4B78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4B74u;
            // 0x2b4b78: 0x30620040  andi        $v0, $v1, 0x40 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4B94u;
            goto label_2b4b94;
        }
    }
    ctx->pc = 0x2B4B7Cu;
    // 0x2b4b7c: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x2b4b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2b4b80: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2B4B80u;
    SET_GPR_U32(ctx, 31, 0x2B4B88u);
    ctx->pc = 0x2B4B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4B80u;
    // 0x2b4b84: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2B4B80u, 0x2B4B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4B88u;
label_2b4b88:
    // 0x2b4b88: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2b4b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2b4b8c: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x2b4b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x2b4b90: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x2b4b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
label_2b4b94:
    // 0x2b4b94: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B4B94u;
    {
        const bool branch_taken_0x2b4b94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b4b94) {
            ctx->pc = 0x2B4B98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4B94u;
            // 0x2b4b98: 0x30620080  andi        $v0, $v1, 0x80 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4BB4u;
            goto label_2b4bb4;
        }
    }
    ctx->pc = 0x2B4B9Cu;
    // 0x2b4b9c: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x2b4b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2b4ba0: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2B4BA0u;
    SET_GPR_U32(ctx, 31, 0x2B4BA8u);
    ctx->pc = 0x2B4BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4BA0u;
    // 0x2b4ba4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2B4BA0u, 0x2B4BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4BA8u;
label_2b4ba8:
    // 0x2b4ba8: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2b4ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2b4bac: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x2b4bacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x2b4bb0: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x2b4bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
label_2b4bb4:
    // 0x2b4bb4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B4BB4u;
    {
        const bool branch_taken_0x2b4bb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b4bb4) {
            ctx->pc = 0x2B4BB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4BB4u;
            // 0x2b4bb8: 0x30620100  andi        $v0, $v1, 0x100 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4BD4u;
            goto label_2b4bd4;
        }
    }
    ctx->pc = 0x2B4BBCu;
    // 0x2b4bbc: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x2b4bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2b4bc0: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2B4BC0u;
    SET_GPR_U32(ctx, 31, 0x2B4BC8u);
    ctx->pc = 0x2B4BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4BC0u;
    // 0x2b4bc4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2B4BC0u, 0x2B4BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4BC8u;
label_2b4bc8:
    // 0x2b4bc8: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2b4bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2b4bcc: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x2b4bccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x2b4bd0: 0x30620100  andi        $v0, $v1, 0x100
    ctx->pc = 0x2b4bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
label_2b4bd4:
    // 0x2b4bd4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B4BD4u;
    {
        const bool branch_taken_0x2b4bd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b4bd4) {
            ctx->pc = 0x2B4BD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4BD4u;
            // 0x2b4bd8: 0x30620200  andi        $v0, $v1, 0x200 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4BF4u;
            goto label_2b4bf4;
        }
    }
    ctx->pc = 0x2B4BDCu;
    // 0x2b4bdc: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x2b4bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2b4be0: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2B4BE0u;
    SET_GPR_U32(ctx, 31, 0x2B4BE8u);
    ctx->pc = 0x2B4BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4BE0u;
    // 0x2b4be4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2B4BE0u, 0x2B4BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4BE8u;
label_2b4be8:
    // 0x2b4be8: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2b4be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2b4bec: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x2b4becu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x2b4bf0: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x2b4bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
label_2b4bf4:
    // 0x2b4bf4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B4BF4u;
    {
        const bool branch_taken_0x2b4bf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b4bf4) {
            ctx->pc = 0x2B4BF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4BF4u;
            // 0x2b4bf8: 0x30620400  andi        $v0, $v1, 0x400 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4C14u;
            goto label_2b4c14;
        }
    }
    ctx->pc = 0x2B4BFCu;
    // 0x2b4bfc: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x2b4bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2b4c00: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2B4C00u;
    SET_GPR_U32(ctx, 31, 0x2B4C08u);
    ctx->pc = 0x2B4C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4C00u;
    // 0x2b4c04: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2B4C00u, 0x2B4C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4C08u;
label_2b4c08:
    // 0x2b4c08: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2b4c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2b4c0c: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x2b4c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x2b4c10: 0x30620400  andi        $v0, $v1, 0x400
    ctx->pc = 0x2b4c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
label_2b4c14:
    // 0x2b4c14: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B4C14u;
    {
        const bool branch_taken_0x2b4c14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b4c14) {
            ctx->pc = 0x2B4C18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4C14u;
            // 0x2b4c18: 0x30620800  andi        $v0, $v1, 0x800 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4C34u;
            goto label_2b4c34;
        }
    }
    ctx->pc = 0x2B4C1Cu;
    // 0x2b4c1c: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x2b4c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2b4c20: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2B4C20u;
    SET_GPR_U32(ctx, 31, 0x2B4C28u);
    ctx->pc = 0x2B4C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4C20u;
    // 0x2b4c24: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2B4C20u, 0x2B4C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4C28u;
label_2b4c28:
    // 0x2b4c28: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2b4c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2b4c2c: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x2b4c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x2b4c30: 0x30620800  andi        $v0, $v1, 0x800
    ctx->pc = 0x2b4c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
label_2b4c34:
    // 0x2b4c34: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B4C34u;
    {
        const bool branch_taken_0x2b4c34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b4c34) {
            ctx->pc = 0x2B4C38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4C34u;
            // 0x2b4c38: 0x30621000  andi        $v0, $v1, 0x1000 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4C54u;
            goto label_2b4c54;
        }
    }
    ctx->pc = 0x2B4C3Cu;
    // 0x2b4c3c: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x2b4c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2b4c40: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2B4C40u;
    SET_GPR_U32(ctx, 31, 0x2B4C48u);
    ctx->pc = 0x2B4C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4C40u;
    // 0x2b4c44: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2B4C40u, 0x2B4C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4C48u;
label_2b4c48:
    // 0x2b4c48: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2b4c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2b4c4c: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x2b4c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x2b4c50: 0x30621000  andi        $v0, $v1, 0x1000
    ctx->pc = 0x2b4c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
label_2b4c54:
    // 0x2b4c54: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B4C54u;
    {
        const bool branch_taken_0x2b4c54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b4c54) {
            ctx->pc = 0x2B4C58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4C54u;
            // 0x2b4c58: 0x30622000  andi        $v0, $v1, 0x2000 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4C74u;
            goto label_2b4c74;
        }
    }
    ctx->pc = 0x2B4C5Cu;
    // 0x2b4c5c: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x2b4c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2b4c60: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2B4C60u;
    SET_GPR_U32(ctx, 31, 0x2B4C68u);
    ctx->pc = 0x2B4C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4C60u;
    // 0x2b4c64: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2B4C60u, 0x2B4C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4C68u;
label_2b4c68:
    // 0x2b4c68: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2b4c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2b4c6c: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x2b4c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x2b4c70: 0x30622000  andi        $v0, $v1, 0x2000
    ctx->pc = 0x2b4c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
label_2b4c74:
    // 0x2b4c74: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B4C74u;
    {
        const bool branch_taken_0x2b4c74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b4c74) {
            ctx->pc = 0x2B4C78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4C74u;
            // 0x2b4c78: 0x30624000  andi        $v0, $v1, 0x4000 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4C94u;
            goto label_2b4c94;
        }
    }
    ctx->pc = 0x2B4C7Cu;
    // 0x2b4c7c: 0x8e040038  lw          $a0, 0x38($s0)
    ctx->pc = 0x2b4c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x2b4c80: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2B4C80u;
    SET_GPR_U32(ctx, 31, 0x2B4C88u);
    ctx->pc = 0x2B4C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4C80u;
    // 0x2b4c84: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2B4C80u, 0x2B4C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4C88u;
label_2b4c88:
    // 0x2b4c88: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2b4c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2b4c8c: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x2b4c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x2b4c90: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x2b4c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
label_2b4c94:
    // 0x2b4c94: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B4C94u;
    {
        const bool branch_taken_0x2b4c94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b4c94) {
            ctx->pc = 0x2B4C98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4C94u;
            // 0x2b4c98: 0x30628000  andi        $v0, $v1, 0x8000 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4CB4u;
            goto label_2b4cb4;
        }
    }
    ctx->pc = 0x2B4C9Cu;
    // 0x2b4c9c: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x2b4c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x2b4ca0: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2B4CA0u;
    SET_GPR_U32(ctx, 31, 0x2B4CA8u);
    ctx->pc = 0x2B4CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4CA0u;
    // 0x2b4ca4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2B4CA0u, 0x2B4CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4CA8u;
label_2b4ca8:
    // 0x2b4ca8: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2b4ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2b4cac: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x2b4cacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x2b4cb0: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x2b4cb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
label_2b4cb4:
    // 0x2b4cb4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B4CB4u;
    {
        const bool branch_taken_0x2b4cb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b4cb4) {
            ctx->pc = 0x2B4CB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4CB4u;
            // 0x2b4cb8: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4CD4u;
            goto label_2b4cd4;
        }
    }
    ctx->pc = 0x2B4CBCu;
    // 0x2b4cbc: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x2b4cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2b4cc0: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2B4CC0u;
    SET_GPR_U32(ctx, 31, 0x2B4CC8u);
    ctx->pc = 0x2B4CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4CC0u;
    // 0x2b4cc4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2B4CC0u, 0x2B4CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4CC8u;
label_2b4cc8:
    // 0x2b4cc8: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2b4cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2b4ccc: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x2b4cccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x2b4cd0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2b4cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_2b4cd4:
    // 0x2b4cd4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2b4cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2b4cd8: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B4CD8u;
    {
        const bool branch_taken_0x2b4cd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b4cd8) {
            ctx->pc = 0x2B4CDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4CD8u;
            // 0x2b4cdc: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4CF8u;
            goto label_2b4cf8;
        }
    }
    ctx->pc = 0x2B4CE0u;
    // 0x2b4ce0: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x2b4ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x2b4ce4: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2B4CE4u;
    SET_GPR_U32(ctx, 31, 0x2B4CECu);
    ctx->pc = 0x2B4CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4CE4u;
    // 0x2b4ce8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2B4CE4u, 0x2B4CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4CECu;
label_2b4cec:
    // 0x2b4cec: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2b4cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2b4cf0: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x2b4cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
    // 0x2b4cf4: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2b4cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_2b4cf8:
    // 0x2b4cf8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2b4cf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2b4cfc: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B4CFCu;
    {
        const bool branch_taken_0x2b4cfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b4cfc) {
            ctx->pc = 0x2B4D00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4CFCu;
            // 0x2b4d00: 0x3c020004  lui         $v0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4D1Cu;
            goto label_2b4d1c;
        }
    }
    ctx->pc = 0x2B4D04u;
    // 0x2b4d04: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x2b4d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x2b4d08: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2B4D08u;
    SET_GPR_U32(ctx, 31, 0x2B4D10u);
    ctx->pc = 0x2B4D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4D08u;
    // 0x2b4d0c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2B4D08u, 0x2B4D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4D10u;
label_2b4d10:
    // 0x2b4d10: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2b4d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2b4d14: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x2b4d14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x2b4d18: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x2b4d18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_2b4d1c:
    // 0x2b4d1c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2b4d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2b4d20: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B4D20u;
    {
        const bool branch_taken_0x2b4d20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b4d20) {
            ctx->pc = 0x2B4D24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4D20u;
            // 0x2b4d24: 0x3c020008  lui         $v0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4D40u;
            goto label_2b4d40;
        }
    }
    ctx->pc = 0x2B4D28u;
    // 0x2b4d28: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x2b4d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x2b4d2c: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2B4D2Cu;
    SET_GPR_U32(ctx, 31, 0x2B4D34u);
    ctx->pc = 0x2B4D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4D2Cu;
    // 0x2b4d30: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2B4D2Cu, 0x2B4D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4D34u;
label_2b4d34:
    // 0x2b4d34: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2b4d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2b4d38: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x2b4d38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
    // 0x2b4d3c: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x2b4d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
label_2b4d40:
    // 0x2b4d40: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2b4d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2b4d44: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B4D44u;
    {
        const bool branch_taken_0x2b4d44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b4d44) {
            ctx->pc = 0x2B4D48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4D44u;
            // 0x2b4d48: 0x8e8600a4  lw          $a2, 0xA4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 164)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4D60u;
            goto label_2b4d60;
        }
    }
    ctx->pc = 0x2B4D4Cu;
    // 0x2b4d4c: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x2b4d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2b4d50: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2B4D50u;
    SET_GPR_U32(ctx, 31, 0x2B4D58u);
    ctx->pc = 0x2B4D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4D50u;
    // 0x2b4d54: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2B4D50u, 0x2B4D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4D58u;
label_2b4d58:
    // 0x2b4d58: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x2b4d58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x2b4d5c: 0x8e8600a4  lw          $a2, 0xA4($s4)
    ctx->pc = 0x2b4d5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 164)));
label_2b4d60:
    // 0x2b4d60: 0x3d71821  addu        $v1, $fp, $s7
    ctx->pc = 0x2b4d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 23)));
    // 0x2b4d64: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2b4d64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2b4d68: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b4d68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b4d6c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2b4d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4d70: 0x771823  subu        $v1, $v1, $s7
    ctx->pc = 0x2b4d70u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x2b4d74: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b4d74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b4d78: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x2b4d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2b4d7c: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x2b4d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x2b4d80: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2b4d80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b4d84: 0x1440ff58  bnez        $v0, . + 4 + (-0xA8 << 2)
    ctx->pc = 0x2B4D84u;
    {
        const bool branch_taken_0x2b4d84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B4D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4D84u;
        // 0x2b4d88: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4d84) {
            ctx->pc = 0x2B4AE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b4ae8;
        }
    }
    ctx->pc = 0x2B4D8Cu;
label_2b4d8c:
    // 0x2b4d8c: 0x3d71021  addu        $v0, $fp, $s7
    ctx->pc = 0x2b4d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 23)));
    // 0x2b4d90: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2b4d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4d94: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b4d94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b4d98: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2b4d98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4d9c: 0x571023  subu        $v0, $v0, $s7
    ctx->pc = 0x2b4d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x2b4da0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b4da0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b4da4: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2b4da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2b4da8: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x2b4da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x2b4dac: 0x186000ab  blez        $v1, . + 4 + (0xAB << 2)
    ctx->pc = 0x2B4DACu;
    {
        const bool branch_taken_0x2b4dac = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2B4DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4DACu;
        // 0x2b4db0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4dac) {
            ctx->pc = 0x2B505Cu;
            goto label_2b505c;
        }
    }
    ctx->pc = 0x2B4DB4u;
    // 0x2b4db4: 0x0  nop
    ctx->pc = 0x2b4db4u;
    // NOP
label_2b4db8:
    // 0x2b4db8: 0x971821  addu        $v1, $a0, $s7
    ctx->pc = 0x2b4db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 23)));
    // 0x2b4dbc: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x2b4dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2b4dc0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b4dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b4dc4: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x2b4dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x2b4dc8: 0x771823  subu        $v1, $v1, $s7
    ctx->pc = 0x2b4dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x2b4dcc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2b4dccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b4dd0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b4dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b4dd4: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x2b4dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x2b4dd8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2b4dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2b4ddc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2b4ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b4de0: 0x8c650030  lw          $a1, 0x30($v1)
    ctx->pc = 0x2b4de0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x2b4de4: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x2b4de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x2b4de8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2b4de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2b4dec: 0xa48021  addu        $s0, $a1, $a0
    ctx->pc = 0x2b4decu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2b4df0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2b4df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2b4df4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2b4df4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2b4df8: 0x1040008d  beqz        $v0, . + 4 + (0x8D << 2)
    ctx->pc = 0x2B4DF8u;
    {
        const bool branch_taken_0x2b4df8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4DF8u;
        // 0x2b4dfc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4df8) {
            ctx->pc = 0x2B5030u;
            goto label_2b5030;
        }
    }
    ctx->pc = 0x2B4E00u;
    // 0x2b4e00: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x2b4e00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x2b4e04: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2b4e04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2b4e08: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x2b4e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x2b4e0c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2b4e0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2b4e10: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2B4E10u;
    SET_GPR_U32(ctx, 31, 0x2B4E18u);
    ctx->pc = 0x2B4E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4E10u;
    // 0x2b4e14: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2B4E10u, 0x2B4E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4E18u;
label_2b4e18:
    // 0x2b4e18: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2b4e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2b4e1c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2b4e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2b4e20: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x2b4e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x2b4e24: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B4E24u;
    {
        const bool branch_taken_0x2b4e24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b4e24) {
            ctx->pc = 0x2B4E28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4E24u;
            // 0x2b4e28: 0x30620020  andi        $v0, $v1, 0x20 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4E44u;
            goto label_2b4e44;
        }
    }
    ctx->pc = 0x2B4E2Cu;
    // 0x2b4e2c: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x2b4e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2b4e30: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2B4E30u;
    SET_GPR_U32(ctx, 31, 0x2B4E38u);
    ctx->pc = 0x2B4E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4E30u;
    // 0x2b4e34: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2B4E30u, 0x2B4E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4E38u;
label_2b4e38:
    // 0x2b4e38: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2b4e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2b4e3c: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x2b4e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x2b4e40: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x2b4e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_2b4e44:
    // 0x2b4e44: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B4E44u;
    {
        const bool branch_taken_0x2b4e44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b4e44) {
            ctx->pc = 0x2B4E48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4E44u;
            // 0x2b4e48: 0x30620040  andi        $v0, $v1, 0x40 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4E64u;
            goto label_2b4e64;
        }
    }
    ctx->pc = 0x2B4E4Cu;
    // 0x2b4e4c: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x2b4e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2b4e50: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2B4E50u;
    SET_GPR_U32(ctx, 31, 0x2B4E58u);
    ctx->pc = 0x2B4E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4E50u;
    // 0x2b4e54: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2B4E50u, 0x2B4E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4E58u;
label_2b4e58:
    // 0x2b4e58: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2b4e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2b4e5c: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x2b4e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x2b4e60: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x2b4e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
label_2b4e64:
    // 0x2b4e64: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B4E64u;
    {
        const bool branch_taken_0x2b4e64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b4e64) {
            ctx->pc = 0x2B4E68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4E64u;
            // 0x2b4e68: 0x30620080  andi        $v0, $v1, 0x80 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4E84u;
            goto label_2b4e84;
        }
    }
    ctx->pc = 0x2B4E6Cu;
    // 0x2b4e6c: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x2b4e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2b4e70: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2B4E70u;
    SET_GPR_U32(ctx, 31, 0x2B4E78u);
    ctx->pc = 0x2B4E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4E70u;
    // 0x2b4e74: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2B4E70u, 0x2B4E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4E78u;
label_2b4e78:
    // 0x2b4e78: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2b4e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2b4e7c: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x2b4e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x2b4e80: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x2b4e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
label_2b4e84:
    // 0x2b4e84: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B4E84u;
    {
        const bool branch_taken_0x2b4e84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b4e84) {
            ctx->pc = 0x2B4E88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4E84u;
            // 0x2b4e88: 0x30620100  andi        $v0, $v1, 0x100 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4EA4u;
            goto label_2b4ea4;
        }
    }
    ctx->pc = 0x2B4E8Cu;
    // 0x2b4e8c: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x2b4e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2b4e90: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2B4E90u;
    SET_GPR_U32(ctx, 31, 0x2B4E98u);
    ctx->pc = 0x2B4E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4E90u;
    // 0x2b4e94: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2B4E90u, 0x2B4E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4E98u;
label_2b4e98:
    // 0x2b4e98: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2b4e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2b4e9c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x2b4e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x2b4ea0: 0x30620100  andi        $v0, $v1, 0x100
    ctx->pc = 0x2b4ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
label_2b4ea4:
    // 0x2b4ea4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B4EA4u;
    {
        const bool branch_taken_0x2b4ea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b4ea4) {
            ctx->pc = 0x2B4EA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4EA4u;
            // 0x2b4ea8: 0x30620200  andi        $v0, $v1, 0x200 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4EC4u;
            goto label_2b4ec4;
        }
    }
    ctx->pc = 0x2B4EACu;
    // 0x2b4eac: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x2b4eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2b4eb0: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2B4EB0u;
    SET_GPR_U32(ctx, 31, 0x2B4EB8u);
    ctx->pc = 0x2B4EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4EB0u;
    // 0x2b4eb4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2B4EB0u, 0x2B4EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4EB8u;
label_2b4eb8:
    // 0x2b4eb8: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2b4eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2b4ebc: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x2b4ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x2b4ec0: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x2b4ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
label_2b4ec4:
    // 0x2b4ec4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B4EC4u;
    {
        const bool branch_taken_0x2b4ec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b4ec4) {
            ctx->pc = 0x2B4EC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4EC4u;
            // 0x2b4ec8: 0x30620400  andi        $v0, $v1, 0x400 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4EE4u;
            goto label_2b4ee4;
        }
    }
    ctx->pc = 0x2B4ECCu;
    // 0x2b4ecc: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x2b4eccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2b4ed0: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2B4ED0u;
    SET_GPR_U32(ctx, 31, 0x2B4ED8u);
    ctx->pc = 0x2B4ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4ED0u;
    // 0x2b4ed4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2B4ED0u, 0x2B4ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4ED8u;
label_2b4ed8:
    // 0x2b4ed8: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2b4ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2b4edc: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x2b4edcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x2b4ee0: 0x30620400  andi        $v0, $v1, 0x400
    ctx->pc = 0x2b4ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
label_2b4ee4:
    // 0x2b4ee4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B4EE4u;
    {
        const bool branch_taken_0x2b4ee4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b4ee4) {
            ctx->pc = 0x2B4EE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4EE4u;
            // 0x2b4ee8: 0x30620800  andi        $v0, $v1, 0x800 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4F04u;
            goto label_2b4f04;
        }
    }
    ctx->pc = 0x2B4EECu;
    // 0x2b4eec: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x2b4eecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2b4ef0: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2B4EF0u;
    SET_GPR_U32(ctx, 31, 0x2B4EF8u);
    ctx->pc = 0x2B4EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4EF0u;
    // 0x2b4ef4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2B4EF0u, 0x2B4EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4EF8u;
label_2b4ef8:
    // 0x2b4ef8: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2b4ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2b4efc: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x2b4efcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x2b4f00: 0x30620800  andi        $v0, $v1, 0x800
    ctx->pc = 0x2b4f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
label_2b4f04:
    // 0x2b4f04: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B4F04u;
    {
        const bool branch_taken_0x2b4f04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b4f04) {
            ctx->pc = 0x2B4F08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4F04u;
            // 0x2b4f08: 0x30621000  andi        $v0, $v1, 0x1000 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4F24u;
            goto label_2b4f24;
        }
    }
    ctx->pc = 0x2B4F0Cu;
    // 0x2b4f0c: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x2b4f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2b4f10: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2B4F10u;
    SET_GPR_U32(ctx, 31, 0x2B4F18u);
    ctx->pc = 0x2B4F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4F10u;
    // 0x2b4f14: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2B4F10u, 0x2B4F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4F18u;
label_2b4f18:
    // 0x2b4f18: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2b4f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2b4f1c: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x2b4f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x2b4f20: 0x30621000  andi        $v0, $v1, 0x1000
    ctx->pc = 0x2b4f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
label_2b4f24:
    // 0x2b4f24: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B4F24u;
    {
        const bool branch_taken_0x2b4f24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b4f24) {
            ctx->pc = 0x2B4F28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4F24u;
            // 0x2b4f28: 0x30622000  andi        $v0, $v1, 0x2000 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4F44u;
            goto label_2b4f44;
        }
    }
    ctx->pc = 0x2B4F2Cu;
    // 0x2b4f2c: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x2b4f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2b4f30: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2B4F30u;
    SET_GPR_U32(ctx, 31, 0x2B4F38u);
    ctx->pc = 0x2B4F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4F30u;
    // 0x2b4f34: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2B4F30u, 0x2B4F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4F38u;
label_2b4f38:
    // 0x2b4f38: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2b4f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2b4f3c: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x2b4f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x2b4f40: 0x30622000  andi        $v0, $v1, 0x2000
    ctx->pc = 0x2b4f40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
label_2b4f44:
    // 0x2b4f44: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B4F44u;
    {
        const bool branch_taken_0x2b4f44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b4f44) {
            ctx->pc = 0x2B4F48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4F44u;
            // 0x2b4f48: 0x30624000  andi        $v0, $v1, 0x4000 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4F64u;
            goto label_2b4f64;
        }
    }
    ctx->pc = 0x2B4F4Cu;
    // 0x2b4f4c: 0x8e040038  lw          $a0, 0x38($s0)
    ctx->pc = 0x2b4f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x2b4f50: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2B4F50u;
    SET_GPR_U32(ctx, 31, 0x2B4F58u);
    ctx->pc = 0x2B4F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4F50u;
    // 0x2b4f54: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2B4F50u, 0x2B4F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4F58u;
label_2b4f58:
    // 0x2b4f58: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2b4f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2b4f5c: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x2b4f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x2b4f60: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x2b4f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
label_2b4f64:
    // 0x2b4f64: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B4F64u;
    {
        const bool branch_taken_0x2b4f64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b4f64) {
            ctx->pc = 0x2B4F68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4F64u;
            // 0x2b4f68: 0x30628000  andi        $v0, $v1, 0x8000 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4F84u;
            goto label_2b4f84;
        }
    }
    ctx->pc = 0x2B4F6Cu;
    // 0x2b4f6c: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x2b4f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x2b4f70: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2B4F70u;
    SET_GPR_U32(ctx, 31, 0x2B4F78u);
    ctx->pc = 0x2B4F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4F70u;
    // 0x2b4f74: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2B4F70u, 0x2B4F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4F78u;
label_2b4f78:
    // 0x2b4f78: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2b4f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2b4f7c: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x2b4f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x2b4f80: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x2b4f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
label_2b4f84:
    // 0x2b4f84: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B4F84u;
    {
        const bool branch_taken_0x2b4f84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b4f84) {
            ctx->pc = 0x2B4F88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4F84u;
            // 0x2b4f88: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4FA4u;
            goto label_2b4fa4;
        }
    }
    ctx->pc = 0x2B4F8Cu;
    // 0x2b4f8c: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x2b4f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2b4f90: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2B4F90u;
    SET_GPR_U32(ctx, 31, 0x2B4F98u);
    ctx->pc = 0x2B4F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4F90u;
    // 0x2b4f94: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2B4F90u, 0x2B4F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4F98u;
label_2b4f98:
    // 0x2b4f98: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2b4f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2b4f9c: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x2b4f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x2b4fa0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2b4fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_2b4fa4:
    // 0x2b4fa4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2b4fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2b4fa8: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B4FA8u;
    {
        const bool branch_taken_0x2b4fa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b4fa8) {
            ctx->pc = 0x2B4FACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4FA8u;
            // 0x2b4fac: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4FC8u;
            goto label_2b4fc8;
        }
    }
    ctx->pc = 0x2B4FB0u;
    // 0x2b4fb0: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x2b4fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x2b4fb4: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2B4FB4u;
    SET_GPR_U32(ctx, 31, 0x2B4FBCu);
    ctx->pc = 0x2B4FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4FB4u;
    // 0x2b4fb8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2B4FB4u, 0x2B4FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4FBCu;
label_2b4fbc:
    // 0x2b4fbc: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2b4fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2b4fc0: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x2b4fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
    // 0x2b4fc4: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2b4fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_2b4fc8:
    // 0x2b4fc8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2b4fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2b4fcc: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B4FCCu;
    {
        const bool branch_taken_0x2b4fcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b4fcc) {
            ctx->pc = 0x2B4FD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4FCCu;
            // 0x2b4fd0: 0x3c020004  lui         $v0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4FECu;
            goto label_2b4fec;
        }
    }
    ctx->pc = 0x2B4FD4u;
    // 0x2b4fd4: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x2b4fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x2b4fd8: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2B4FD8u;
    SET_GPR_U32(ctx, 31, 0x2B4FE0u);
    ctx->pc = 0x2B4FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4FD8u;
    // 0x2b4fdc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2B4FD8u, 0x2B4FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4FE0u;
label_2b4fe0:
    // 0x2b4fe0: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2b4fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2b4fe4: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x2b4fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x2b4fe8: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x2b4fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_2b4fec:
    // 0x2b4fec: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2b4fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2b4ff0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B4FF0u;
    {
        const bool branch_taken_0x2b4ff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b4ff0) {
            ctx->pc = 0x2B4FF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4FF0u;
            // 0x2b4ff4: 0x3c020008  lui         $v0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B5010u;
            goto label_2b5010;
        }
    }
    ctx->pc = 0x2B4FF8u;
    // 0x2b4ff8: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x2b4ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x2b4ffc: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2B4FFCu;
    SET_GPR_U32(ctx, 31, 0x2B5004u);
    ctx->pc = 0x2B5000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4FFCu;
    // 0x2b5000: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2B4FFCu, 0x2B5004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5004u;
label_2b5004:
    // 0x2b5004: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2b5004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2b5008: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x2b5008u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
    // 0x2b500c: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x2b500cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
label_2b5010:
    // 0x2b5010: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2b5010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2b5014: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B5014u;
    {
        const bool branch_taken_0x2b5014 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b5014) {
            ctx->pc = 0x2B5018u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B5014u;
            // 0x2b5018: 0x8e8600a4  lw          $a2, 0xA4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 164)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B5030u;
            goto label_2b5030;
        }
    }
    ctx->pc = 0x2B501Cu;
    // 0x2b501c: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x2b501cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2b5020: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2B5020u;
    SET_GPR_U32(ctx, 31, 0x2B5028u);
    ctx->pc = 0x2B5024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5020u;
    // 0x2b5024: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2B5020u, 0x2B5028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5028u;
label_2b5028:
    // 0x2b5028: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x2b5028u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x2b502c: 0x8e8600a4  lw          $a2, 0xA4($s4)
    ctx->pc = 0x2b502cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 164)));
label_2b5030:
    // 0x2b5030: 0x3d71821  addu        $v1, $fp, $s7
    ctx->pc = 0x2b5030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 23)));
    // 0x2b5034: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2b5034u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2b5038: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b5038u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b503c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2b503cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5040: 0x771823  subu        $v1, $v1, $s7
    ctx->pc = 0x2b5040u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x2b5044: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b5044u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b5048: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x2b5048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2b504c: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x2b504cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x2b5050: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2b5050u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b5054: 0x1440ff58  bnez        $v0, . + 4 + (-0xA8 << 2)
    ctx->pc = 0x2B5054u;
    {
        const bool branch_taken_0x2b5054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B5058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5054u;
        // 0x2b5058: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5054) {
            ctx->pc = 0x2B4DB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b4db8;
        }
    }
    ctx->pc = 0x2B505Cu;
label_2b505c:
    // 0x2b505c: 0x3d71021  addu        $v0, $fp, $s7
    ctx->pc = 0x2b505cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 23)));
    // 0x2b5060: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2b5060u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5064: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b5064u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b5068: 0x571023  subu        $v0, $v0, $s7
    ctx->pc = 0x2b5068u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x2b506c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x2b506cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b5070: 0xc41821  addu        $v1, $a2, $a0
    ctx->pc = 0x2b5070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2b5074: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x2b5074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x2b5078: 0x1840001b  blez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2B5078u;
    {
        const bool branch_taken_0x2b5078 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2B507Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5078u;
        // 0x2b507c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5078) {
            ctx->pc = 0x2B50E8u;
            goto label_2b50e8;
        }
    }
    ctx->pc = 0x2B5080u;
    // 0x2b5080: 0x3c160100  lui         $s6, 0x100
    ctx->pc = 0x2b5080u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)256 << 16));
    // 0x2b5084: 0x3c15feff  lui         $s5, 0xFEFF
    ctx->pc = 0x2b5084u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65279 << 16));
    // 0x2b5088: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b5088u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b508c: 0x36d60001  ori         $s6, $s6, 0x1
    ctx->pc = 0x2b508cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)1);
    // 0x2b5090: 0x36b5fffe  ori         $s5, $s5, 0xFFFE
    ctx->pc = 0x2b5090u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)65534);
    // 0x2b5094: 0x0  nop
    ctx->pc = 0x2b5094u;
    // NOP
label_2b5098:
    // 0x2b5098: 0xb11021  addu        $v0, $a1, $s1
    ctx->pc = 0x2b5098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x2b509c: 0x122180  sll         $a0, $s2, 6
    ctx->pc = 0x2b509cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x2b50a0: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x2b50a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2b50a4: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x2b50a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b50a8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2b50a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2b50ac: 0x551824  and         $v1, $v0, $s5
    ctx->pc = 0x2b50acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x2b50b0: 0x561024  and         $v0, $v0, $s6
    ctx->pc = 0x2b50b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 22));
    // 0x2b50b4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B50B4u;
    {
        const bool branch_taken_0x2b50b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B50B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B50B4u;
        // 0x2b50b8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b50b4) {
            ctx->pc = 0x2B50D4u;
            goto label_2b50d4;
        }
    }
    ctx->pc = 0x2B50BCu;
    // 0x2b50bc: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x2b50bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x2b50c0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2b50c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b50c4: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2B50C4u;
    SET_GPR_U32(ctx, 31, 0x2B50CCu);
    ctx->pc = 0x2B50C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B50C4u;
    // 0x2b50c8: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2B50C4u, 0x2B50CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B50CCu;
label_2b50cc:
    // 0x2b50cc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2b50ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2b50d0: 0x8e8600a4  lw          $a2, 0xA4($s4)
    ctx->pc = 0x2b50d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 164)));
label_2b50d4:
    // 0x2b50d4: 0xd11821  addu        $v1, $a2, $s1
    ctx->pc = 0x2b50d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x2b50d8: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x2b50d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x2b50dc: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2b50dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b50e0: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2B50E0u;
    {
        const bool branch_taken_0x2b50e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B50E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B50E0u;
        // 0x2b50e4: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b50e0) {
            ctx->pc = 0x2B5098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b5098;
        }
    }
    ctx->pc = 0x2B50E8u;
label_2b50e8:
    // 0x2b50e8: 0x3d71021  addu        $v0, $fp, $s7
    ctx->pc = 0x2b50e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 23)));
    // 0x2b50ec: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2b50ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b50f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b50f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b50f4: 0x571023  subu        $v0, $v0, $s7
    ctx->pc = 0x2b50f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x2b50f8: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x2b50f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b50fc: 0xc41821  addu        $v1, $a2, $a0
    ctx->pc = 0x2b50fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2b5100: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x2b5100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x2b5104: 0x1840001a  blez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2B5104u;
    {
        const bool branch_taken_0x2b5104 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2B5108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5104u;
        // 0x2b5108: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5104) {
            ctx->pc = 0x2B5170u;
            goto label_2b5170;
        }
    }
    ctx->pc = 0x2B510Cu;
    // 0x2b510c: 0x3c160100  lui         $s6, 0x100
    ctx->pc = 0x2b510cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)256 << 16));
    // 0x2b5110: 0x3c15feff  lui         $s5, 0xFEFF
    ctx->pc = 0x2b5110u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65279 << 16));
    // 0x2b5114: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b5114u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5118: 0x36d60001  ori         $s6, $s6, 0x1
    ctx->pc = 0x2b5118u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)1);
    // 0x2b511c: 0x36b5fffe  ori         $s5, $s5, 0xFFFE
    ctx->pc = 0x2b511cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)65534);
label_2b5120:
    // 0x2b5120: 0xb11021  addu        $v0, $a1, $s1
    ctx->pc = 0x2b5120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x2b5124: 0x122180  sll         $a0, $s2, 6
    ctx->pc = 0x2b5124u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x2b5128: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x2b5128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2b512c: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x2b512cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b5130: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2b5130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2b5134: 0x551824  and         $v1, $v0, $s5
    ctx->pc = 0x2b5134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x2b5138: 0x561024  and         $v0, $v0, $s6
    ctx->pc = 0x2b5138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 22));
    // 0x2b513c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B513Cu;
    {
        const bool branch_taken_0x2b513c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B513Cu;
        // 0x2b5140: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b513c) {
            ctx->pc = 0x2B515Cu;
            goto label_2b515c;
        }
    }
    ctx->pc = 0x2B5144u;
    // 0x2b5144: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x2b5144u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x2b5148: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2b5148u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b514c: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2B514Cu;
    SET_GPR_U32(ctx, 31, 0x2B5154u);
    ctx->pc = 0x2B5150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B514Cu;
    // 0x2b5150: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2B514Cu, 0x2B5154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5154u;
label_2b5154:
    // 0x2b5154: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2b5154u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2b5158: 0x8e8600a4  lw          $a2, 0xA4($s4)
    ctx->pc = 0x2b5158u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 164)));
label_2b515c:
    // 0x2b515c: 0xd11821  addu        $v1, $a2, $s1
    ctx->pc = 0x2b515cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x2b5160: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x2b5160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x2b5164: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2b5164u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b5168: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2B5168u;
    {
        const bool branch_taken_0x2b5168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B516Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5168u;
        // 0x2b516c: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5168) {
            ctx->pc = 0x2B5120u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b5120;
        }
    }
    ctx->pc = 0x2B5170u;
label_2b5170:
    // 0x2b5170: 0x3d71021  addu        $v0, $fp, $s7
    ctx->pc = 0x2b5170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 23)));
    // 0x2b5174: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2b5174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5178: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b5178u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b517c: 0x571023  subu        $v0, $v0, $s7
    ctx->pc = 0x2b517cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x2b5180: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x2b5180u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b5184: 0xc41821  addu        $v1, $a2, $a0
    ctx->pc = 0x2b5184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2b5188: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x2b5188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x2b518c: 0x1840001e  blez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2B518Cu;
    {
        const bool branch_taken_0x2b518c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2B5190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B518Cu;
        // 0x2b5190: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b518c) {
            ctx->pc = 0x2B5208u;
            goto label_2b5208;
        }
    }
    ctx->pc = 0x2B5194u;
    // 0x2b5194: 0x3c160100  lui         $s6, 0x100
    ctx->pc = 0x2b5194u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)256 << 16));
    // 0x2b5198: 0x3c15feff  lui         $s5, 0xFEFF
    ctx->pc = 0x2b5198u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65279 << 16));
    // 0x2b519c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2b519cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b51a0: 0x36d60001  ori         $s6, $s6, 0x1
    ctx->pc = 0x2b51a0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)1);
    // 0x2b51a4: 0x36b5fffe  ori         $s5, $s5, 0xFFFE
    ctx->pc = 0x2b51a4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)65534);
label_2b51a8:
    // 0x2b51a8: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2b51a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2b51ac: 0xb21821  addu        $v1, $a1, $s2
    ctx->pc = 0x2b51acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x2b51b0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2b51b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2b51b4: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x2b51b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2b51b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b51b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b51bc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2b51bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2b51c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b51c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b51c4: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x2b51c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2b51c8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2b51c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2b51cc: 0x751024  and         $v0, $v1, $s5
    ctx->pc = 0x2b51ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 21));
    // 0x2b51d0: 0x761824  and         $v1, $v1, $s6
    ctx->pc = 0x2b51d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 22));
    // 0x2b51d4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B51D4u;
    {
        const bool branch_taken_0x2b51d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B51D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B51D4u;
        // 0x2b51d8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b51d4) {
            ctx->pc = 0x2B51F4u;
            goto label_2b51f4;
        }
    }
    ctx->pc = 0x2B51DCu;
    // 0x2b51dc: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2b51dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x2b51e0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2b51e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b51e4: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2B51E4u;
    SET_GPR_U32(ctx, 31, 0x2B51ECu);
    ctx->pc = 0x2B51E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B51E4u;
    // 0x2b51e8: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2B51E4u, 0x2B51ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B51ECu;
label_2b51ec:
    // 0x2b51ec: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2b51ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2b51f0: 0x8e8600a4  lw          $a2, 0xA4($s4)
    ctx->pc = 0x2b51f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 164)));
label_2b51f4:
    // 0x2b51f4: 0xd21821  addu        $v1, $a2, $s2
    ctx->pc = 0x2b51f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x2b51f8: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x2b51f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x2b51fc: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2b51fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b5200: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x2B5200u;
    {
        const bool branch_taken_0x2b5200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B5204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5200u;
        // 0x2b5204: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5200) {
            ctx->pc = 0x2B51A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b51a8;
        }
    }
    ctx->pc = 0x2B5208u;
label_2b5208:
    // 0x2b5208: 0x3d71021  addu        $v0, $fp, $s7
    ctx->pc = 0x2b5208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 23)));
    // 0x2b520c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2b520cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5210: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b5210u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b5214: 0x571023  subu        $v0, $v0, $s7
    ctx->pc = 0x2b5214u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x2b5218: 0x28080  sll         $s0, $v0, 2
    ctx->pc = 0x2b5218u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b521c: 0x901821  addu        $v1, $a0, $s0
    ctx->pc = 0x2b521cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2b5220: 0x8c620060  lw          $v0, 0x60($v1)
    ctx->pc = 0x2b5220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x2b5224: 0x1840001f  blez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2B5224u;
    {
        const bool branch_taken_0x2b5224 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2B5228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5224u;
        // 0x2b5228: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5224) {
            ctx->pc = 0x2B52A4u;
            goto label_2b52a4;
        }
    }
    ctx->pc = 0x2B522Cu;
    // 0x2b522c: 0x3c160100  lui         $s6, 0x100
    ctx->pc = 0x2b522cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)256 << 16));
    // 0x2b5230: 0x3c15feff  lui         $s5, 0xFEFF
    ctx->pc = 0x2b5230u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65279 << 16));
    // 0x2b5234: 0x36d60001  ori         $s6, $s6, 0x1
    ctx->pc = 0x2b5234u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)1);
    // 0x2b5238: 0x36b5fffe  ori         $s5, $s5, 0xFFFE
    ctx->pc = 0x2b5238u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)65534);
    // 0x2b523c: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x2b523cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2b5240: 0x901821  addu        $v1, $a0, $s0
    ctx->pc = 0x2b5240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2b5244: 0x0  nop
    ctx->pc = 0x2b5244u;
    // NOP
label_2b5248:
    // 0x2b5248: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2b5248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2b524c: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x2b524cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x2b5250: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b5250u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b5254: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2b5254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2b5258: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b5258u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b525c: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x2b525cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2b5260: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2b5260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2b5264: 0x751024  and         $v0, $v1, $s5
    ctx->pc = 0x2b5264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 21));
    // 0x2b5268: 0x761824  and         $v1, $v1, $s6
    ctx->pc = 0x2b5268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 22));
    // 0x2b526c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B526Cu;
    {
        const bool branch_taken_0x2b526c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B526Cu;
        // 0x2b5270: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b526c) {
            ctx->pc = 0x2B528Cu;
            goto label_2b528c;
        }
    }
    ctx->pc = 0x2B5274u;
    // 0x2b5274: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2b5274u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x2b5278: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2b5278u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b527c: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2B527Cu;
    SET_GPR_U32(ctx, 31, 0x2B5284u);
    ctx->pc = 0x2B5280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B527Cu;
    // 0x2b5280: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2B527Cu, 0x2B5284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5284u;
label_2b5284:
    // 0x2b5284: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x2b5284u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x2b5288: 0x8e8600a4  lw          $a2, 0xA4($s4)
    ctx->pc = 0x2b5288u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 164)));
label_2b528c:
    // 0x2b528c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2b528cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5290: 0x901821  addu        $v1, $a0, $s0
    ctx->pc = 0x2b5290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2b5294: 0x8c620060  lw          $v0, 0x60($v1)
    ctx->pc = 0x2b5294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x2b5298: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2b5298u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b529c: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x2B529Cu;
    {
        const bool branch_taken_0x2b529c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B52A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B529Cu;
        // 0x2b52a0: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b529c) {
            ctx->pc = 0x2B5248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b5248;
        }
    }
    ctx->pc = 0x2B52A4u;
label_2b52a4:
    // 0x2b52a4: 0x8e82007c  lw          $v0, 0x7C($s4)
    ctx->pc = 0x2b52a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 124)));
    // 0x2b52a8: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x2b52a8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x2b52ac: 0x2e2102a  slt         $v0, $s7, $v0
    ctx->pc = 0x2b52acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b52b0: 0x5440fc9f  bnel        $v0, $zero, . + 4 + (-0x361 << 2)
    ctx->pc = 0x2B52B0u;
    {
        const bool branch_taken_0x2b52b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b52b0) {
            ctx->pc = 0x2B52B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B52B0u;
            // 0x2b52b4: 0x8e8500c8  lw          $a1, 0xC8($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 200)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b4530;
        }
    }
    ctx->pc = 0x2B52B8u;
label_2b52b8:
    // 0x2b52b8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2B52B8u;
    {
        const bool branch_taken_0x2b52b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B52BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B52B8u;
        // 0x2b52bc: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b52b8) {
            ctx->pc = 0x2B52E0u;
            goto label_2b52e0;
        }
    }
    ctx->pc = 0x2B52C0u;
label_2b52c0:
    // 0x2b52c0: 0x5462000b  bnel        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2B52C0u;
    {
        const bool branch_taken_0x2b52c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b52c0) {
            ctx->pc = 0x2B52C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B52C0u;
            // 0x2b52c4: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B52F0u;
            goto label_2b52f0;
        }
    }
    ctx->pc = 0x2B52C8u;
    // 0x2b52c8: 0xc0ad96c  jal         func_2B65B0
    ctx->pc = 0x2B52C8u;
    SET_GPR_U32(ctx, 31, 0x2B52D0u);
    ctx->pc = 0x2B65B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B65B0u, 0x2B52C8u, 0x2B52D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B52D0u;
label_2b52d0:
    // 0x2b52d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B52D0u;
    {
        const bool branch_taken_0x2b52d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B52D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B52D0u;
        // 0x2b52d4: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b52d0) {
            ctx->pc = 0x2B52E0u;
            goto label_2b52e0;
        }
    }
    ctx->pc = 0x2B52D8u;
    // 0x2b52d8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2B52D8u;
    {
        const bool branch_taken_0x2b52d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B52DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B52D8u;
        // 0x2b52dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b52d8) {
            ctx->pc = 0x2B530Cu;
            goto label_2b530c;
        }
    }
    ctx->pc = 0x2B52E0u;
label_2b52e0:
    // 0x2b52e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b52e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b52e4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2B52E4u;
    {
        const bool branch_taken_0x2b52e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B52E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B52E4u;
        // 0x2b52e8: 0xae8300c4  sw          $v1, 0xC4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 196), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b52e4) {
            ctx->pc = 0x2B530Cu;
            goto label_2b530c;
        }
    }
    ctx->pc = 0x2B52ECu;
    // 0x2b52ec: 0x0  nop
    ctx->pc = 0x2b52ecu;
    // NOP
label_2b52f0:
    // 0x2b52f0: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B52F0u;
    {
        const bool branch_taken_0x2b52f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b52f0) {
            ctx->pc = 0x2B52F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B52F0u;
            // 0x2b52f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B530Cu;
            goto label_2b530c;
        }
    }
    ctx->pc = 0x2B52F8u;
    // 0x2b52f8: 0xc0ad6c4  jal         func_2B5B10
    ctx->pc = 0x2B52F8u;
    SET_GPR_U32(ctx, 31, 0x2B5300u);
    ctx->pc = 0x2B52FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B52F8u;
    // 0x2b52fc: 0x8e8500b4  lw          $a1, 0xB4($s4) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 180)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5B10u, 0x2B52F8u, 0x2B5300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5300u;
label_2b5300:
    // 0x2b5300: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2b5300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2b5304: 0xae8200c4  sw          $v0, 0xC4($s4)
    ctx->pc = 0x2b5304u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 196), GPR_U32(ctx, 2));
    // 0x2b5308: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b5308u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b530c:
    // 0x2b530c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b530cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b5310: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b5310u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b5314: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2b5314u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b5318: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2b5318u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b531c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2b531cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b5320: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2b5320u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2b5324: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2b5324u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b5328: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2b5328u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2b532c: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x2b532cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b5330: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2b5330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2b5334: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x2b5334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2b5338: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x2b5338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b533c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B533Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B5340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B533Cu;
        // 0x2b5340: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B533Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B5344u;
    // 0x2b5344: 0x0  nop
    ctx->pc = 0x2b5344u;
    // NOP
    ctx->pc = 0x2b5348u;
}
