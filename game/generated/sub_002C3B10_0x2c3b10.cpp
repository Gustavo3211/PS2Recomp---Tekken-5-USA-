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

// Function: sub_002C3B10
// Address: 0x2c3b10 - 0x2c3e10
void sub_002C3B10_0x2c3b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C3B10_0x2c3b10");
#endif

    switch (ctx->pc) {
        case 0x2c3b3cu: goto label_2c3b3c;
        case 0x2c3b4cu: goto label_2c3b4c;
        case 0x2c3b58u: goto label_2c3b58;
        case 0x2c3b60u: goto label_2c3b60;
        case 0x2c3b80u: goto label_2c3b80;
        case 0x2c3bf4u: goto label_2c3bf4;
        case 0x2c3bfcu: goto label_2c3bfc;
        case 0x2c3c18u: goto label_2c3c18;
        case 0x2c3c28u: goto label_2c3c28;
        case 0x2c3c3cu: goto label_2c3c3c;
        case 0x2c3c50u: goto label_2c3c50;
        case 0x2c3c6cu: goto label_2c3c6c;
        case 0x2c3c78u: goto label_2c3c78;
        case 0x2c3cc8u: goto label_2c3cc8;
        case 0x2c3d2cu: goto label_2c3d2c;
        case 0x2c3d54u: goto label_2c3d54;
        case 0x2c3d68u: goto label_2c3d68;
        case 0x2c3d7cu: goto label_2c3d7c;
        case 0x2c3d9cu: goto label_2c3d9c;
        case 0x2c3dacu: goto label_2c3dac;
        case 0x2c3dbcu: goto label_2c3dbc;
        case 0x2c3dc4u: goto label_2c3dc4;
        default: break;
    }

    ctx->pc = 0x2c3b10u;

    // 0x2c3b10: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x2c3b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x2c3b14: 0xffb000b0  sd          $s0, 0xB0($sp)
    ctx->pc = 0x2c3b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 16));
    // 0x2c3b18: 0xffb100b8  sd          $s1, 0xB8($sp)
    ctx->pc = 0x2c3b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 17));
    // 0x2c3b1c: 0xffb200c0  sd          $s2, 0xC0($sp)
    ctx->pc = 0x2c3b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 18));
    // 0x2c3b20: 0xffb300c8  sd          $s3, 0xC8($sp)
    ctx->pc = 0x2c3b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 19));
    // 0x2c3b24: 0xffb400d0  sd          $s4, 0xD0($sp)
    ctx->pc = 0x2c3b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 20));
    // 0x2c3b28: 0xffb500d8  sd          $s5, 0xD8($sp)
    ctx->pc = 0x2c3b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 21));
    // 0x2c3b2c: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x2c3b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
    // 0x2c3b30: 0xe7b500f0  swc1        $f21, 0xF0($sp)
    ctx->pc = 0x2c3b30u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x2c3b34: 0xc08eb20  jal         func_23AC80
    ctx->pc = 0x2C3B34u;
    SET_GPR_U32(ctx, 31, 0x2C3B3Cu);
    ctx->pc = 0x2C3B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3B34u;
    // 0x2c3b38: 0xe7b400e8  swc1        $f20, 0xE8($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x23AC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23AC80u, 0x2C3B34u, 0x2C3B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3B3Cu;
label_2c3b3c:
    // 0x2c3b3c: 0x504000a9  beql        $v0, $zero, . + 4 + (0xA9 << 2)
    ctx->pc = 0x2C3B3Cu;
    {
        const bool branch_taken_0x2c3b3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3b3c) {
            ctx->pc = 0x2C3B40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3B3Cu;
            // 0x2c3b40: 0xdfb000b0  ld          $s0, 0xB0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3DE4u;
            goto label_2c3de4;
        }
    }
    ctx->pc = 0x2C3B44u;
    // 0x2c3b44: 0xc09d47a  jal         func_2751E8
    ctx->pc = 0x2C3B44u;
    SET_GPR_U32(ctx, 31, 0x2C3B4Cu);
    ctx->pc = 0x2C3B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3B44u;
    // 0x2c3b48: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2751E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2751E8u, 0x2C3B44u, 0x2C3B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3B4Cu;
label_2c3b4c:
    // 0x2c3b4c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2c3b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3b50: 0xc09d480  jal         func_275200
    ctx->pc = 0x2C3B50u;
    SET_GPR_U32(ctx, 31, 0x2C3B58u);
    ctx->pc = 0x2C3B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3B50u;
    // 0x2c3b54: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275200u, 0x2C3B50u, 0x2C3B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3B58u;
label_2c3b58:
    // 0x2c3b58: 0xc09d47c  jal         func_2751F0
    ctx->pc = 0x2C3B58u;
    SET_GPR_U32(ctx, 31, 0x2C3B60u);
    ctx->pc = 0x2C3B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3B58u;
    // 0x2c3b5c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2751F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2751F0u, 0x2C3B58u, 0x2C3B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3B60u;
label_2c3b60:
    // 0x2c3b60: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c3b60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3b64: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x2c3b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2c3b68: 0x28a30010  slti        $v1, $a1, 0x10
    ctx->pc = 0x2c3b68u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2c3b6c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c3b6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3b70: 0x1a20001a  blez        $s1, . + 4 + (0x1A << 2)
    ctx->pc = 0x2C3B70u;
    {
        const bool branch_taken_0x2c3b70 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x2C3B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3B70u;
        // 0x2c3b74: 0x43280a  movz        $a1, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3b70) {
            ctx->pc = 0x2C3BDCu;
            goto label_2c3bdc;
        }
    }
    ctx->pc = 0x2C3B78u;
    // 0x2c3b78: 0xc78192e4  lwc1        $f1, -0x6D1C($gp)
    ctx->pc = 0x2c3b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c3b7c: 0x0  nop
    ctx->pc = 0x2c3b7cu;
    // NOP
label_2c3b80:
    // 0x2c3b80: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x2c3b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x2c3b84: 0x2c820005  sltiu       $v0, $a0, 0x5
    ctx->pc = 0x2c3b84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2c3b88: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C3B88u;
    {
        const bool branch_taken_0x2c3b88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3B88u;
        // 0x2c3b8c: 0x8e030898  lw          $v1, 0x898($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3b88) {
            ctx->pc = 0x2C3B98u;
            goto label_2c3b98;
        }
    }
    ctx->pc = 0x2C3B90u;
    // 0x2c3b90: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C3B90u;
    {
        const bool branch_taken_0x2c3b90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C3B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3B90u;
        // 0x2c3b94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3b90) {
            ctx->pc = 0x2C3B9Cu;
            goto label_2c3b9c;
        }
    }
    ctx->pc = 0x2C3B98u;
label_2c3b98:
    // 0x2c3b98: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c3b98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c3b9c:
    // 0x2c3b9c: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2C3B9Cu;
    {
        const bool branch_taken_0x2c3b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3b9c) {
            ctx->pc = 0x2C3BA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3B9Cu;
            // 0x2c3ba0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3BD4u;
            goto label_2c3bd4;
        }
    }
    ctx->pc = 0x2C3BA4u;
    // 0x2c3ba4: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x2c3ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
    // 0x2c3ba8: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C3BA8u;
    {
        const bool branch_taken_0x2c3ba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c3ba8) {
            ctx->pc = 0x2C3BACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3BA8u;
            // 0x2c3bac: 0x200a82d  daddu       $s5, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3BD0u;
            goto label_2c3bd0;
        }
    }
    ctx->pc = 0x2C3BB0u;
    // 0x2c3bb0: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x2c3bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
    // 0x2c3bb4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C3BB4u;
    {
        const bool branch_taken_0x2c3bb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3bb4) {
            ctx->pc = 0x2C3BB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3BB4u;
            // 0x2c3bb8: 0x200a82d  daddu       $s5, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3BD0u;
            goto label_2c3bd0;
        }
    }
    ctx->pc = 0x2C3BBCu;
    // 0x2c3bbc: 0xc4600064  lwc1        $f0, 0x64($v1)
    ctx->pc = 0x2c3bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c3bc0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c3bc0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c3bc4: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x2C3BC4u;
    {
        const bool branch_taken_0x2c3bc4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c3bc4) {
            ctx->pc = 0x2C3BC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3BC4u;
            // 0x2c3bc8: 0x200a82d  daddu       $s5, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3BD0u;
            goto label_2c3bd0;
        }
    }
    ctx->pc = 0x2C3BCCu;
    // 0x2c3bcc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2c3bccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_2c3bd0:
    // 0x2c3bd0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2c3bd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_2c3bd4:
    // 0x2c3bd4: 0x1e20ffea  bgtz        $s1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x2C3BD4u;
    {
        const bool branch_taken_0x2c3bd4 = (GPR_S32(ctx, 17) > 0);
        ctx->pc = 0x2C3BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3BD4u;
        // 0x2c3bd8: 0x261008d0  addiu       $s0, $s0, 0x8D0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3bd4) {
            ctx->pc = 0x2C3B80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c3b80;
        }
    }
    ctx->pc = 0x2C3BDCu;
label_2c3bdc:
    // 0x2c3bdc: 0xc5102a  slt         $v0, $a2, $a1
    ctx->pc = 0x2c3bdcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2c3be0: 0x50400080  beql        $v0, $zero, . + 4 + (0x80 << 2)
    ctx->pc = 0x2C3BE0u;
    {
        const bool branch_taken_0x2c3be0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3be0) {
            ctx->pc = 0x2C3BE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3BE0u;
            // 0x2c3be4: 0xdfb000b0  ld          $s0, 0xB0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3DE4u;
            goto label_2c3de4;
        }
    }
    ctx->pc = 0x2C3BE8u;
    // 0x2c3be8: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x2c3be8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2c3bec: 0xc08c218  jal         func_230860
    ctx->pc = 0x2C3BECu;
    SET_GPR_U32(ctx, 31, 0x2C3BF4u);
    ctx->pc = 0x2C3BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3BECu;
    // 0x2c3bf0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230860u, 0x2C3BECu, 0x2C3BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3BF4u;
label_2c3bf4:
    // 0x2c3bf4: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x2C3BF4u;
    SET_GPR_U32(ctx, 31, 0x2C3BFCu);
    ctx->pc = 0x2C3BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3BF4u;
    // 0x2c3bf8: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x2C3BF4u, 0x2C3BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3BFCu;
label_2c3bfc:
    // 0x2c3bfc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2c3bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c3c00: 0x27b40050  addiu       $s4, $sp, 0x50
    ctx->pc = 0x2c3c00u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2c3c04: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x2c3c04u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2c3c08: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2c3c08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c3c0c: 0x9810  mfhi        $s3
    ctx->pc = 0x2c3c0cu;
    SET_GPR_U64(ctx, 19, ctx->hi);
    // 0x2c3c10: 0xc08c1da  jal         func_230768
    ctx->pc = 0x2C3C10u;
    SET_GPR_U32(ctx, 31, 0x2C3C18u);
    ctx->pc = 0x2C3C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3C10u;
    // 0x2c3c14: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230768u, 0x2C3C10u, 0x2C3C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3C18u;
label_2c3c18:
    // 0x2c3c18: 0x27b00060  addiu       $s0, $sp, 0x60
    ctx->pc = 0x2c3c18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2c3c1c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2c3c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c3c20: 0xc08c1fc  jal         func_2307F0
    ctx->pc = 0x2C3C20u;
    SET_GPR_U32(ctx, 31, 0x2C3C28u);
    ctx->pc = 0x2C3C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3C20u;
    // 0x2c3c24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2307F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2307F0u, 0x2C3C20u, 0x2C3C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3C28u;
label_2c3c28:
    // 0x2c3c28: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c3c28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3c2c: 0x27b20070  addiu       $s2, $sp, 0x70
    ctx->pc = 0x2c3c2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2c3c30: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2c3c30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3c34: 0xc084784  jal         func_211E10
    ctx->pc = 0x2C3C34u;
    SET_GPR_U32(ctx, 31, 0x2C3C3Cu);
    ctx->pc = 0x2C3C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3C34u;
    // 0x2c3c38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211E10u, 0x2C3C34u, 0x2C3C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3C3Cu;
label_2c3c3c:
    // 0x2c3c3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c3c3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3c40: 0x27b10090  addiu       $s1, $sp, 0x90
    ctx->pc = 0x2c3c40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2c3c44: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2c3c44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2c3c48: 0xc04a151  jal         func_128544
    ctx->pc = 0x2C3C48u;
    SET_GPR_U32(ctx, 31, 0x2C3C50u);
    ctx->pc = 0x2C3C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3C48u;
    // 0x2c3c4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x2C3C48u, 0x2C3C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3C50u;
label_2c3c50:
    // 0x2c3c50: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2c3c50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2c3c54: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c3c54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c3c58: 0x27b000a0  addiu       $s0, $sp, 0xA0
    ctx->pc = 0x2c3c58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2c3c5c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2c3c5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3c60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c3c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3c64: 0xc0847da  jal         func_211F68
    ctx->pc = 0x2C3C64u;
    SET_GPR_U32(ctx, 31, 0x2C3C6Cu);
    ctx->pc = 0x2C3C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3C64u;
    // 0x2c3c68: 0xe7a00094  swc1        $f0, 0x94($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x211F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211F68u, 0x2C3C64u, 0x2C3C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3C6Cu;
label_2c3c6c:
    // 0x2c3c6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c3c6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3c70: 0xc084814  jal         func_212050
    ctx->pc = 0x2C3C70u;
    SET_GPR_U32(ctx, 31, 0x2C3C78u);
    ctx->pc = 0x2C3C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3C70u;
    // 0x2c3c74: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212050u, 0x2C3C70u, 0x2C3C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3C78u;
label_2c3c78:
    // 0x2c3c78: 0xc78192e8  lwc1        $f1, -0x6D18($gp)
    ctx->pc = 0x2c3c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c3c7c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c3c7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c3c80: 0x45030058  bc1tl       . + 4 + (0x58 << 2)
    ctx->pc = 0x2C3C80u;
    {
        const bool branch_taken_0x2c3c80 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c3c80) {
            ctx->pc = 0x2C3C84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3C80u;
            // 0x2c3c84: 0xdfb000b0  ld          $s0, 0xB0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3DE4u;
            goto label_2c3de4;
        }
    }
    ctx->pc = 0x2C3C88u;
    // 0x2c3c88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c3c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c3c8c: 0x12620020  beq         $s3, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2C3C8Cu;
    {
        const bool branch_taken_0x2c3c8c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C3C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3C8Cu;
        // 0x2c3c90: 0x2a620002  slti        $v0, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3c8c) {
            ctx->pc = 0x2C3D10u;
            goto label_2c3d10;
        }
    }
    ctx->pc = 0x2C3C94u;
    // 0x2c3c94: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C3C94u;
    {
        const bool branch_taken_0x2c3c94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3c94) {
            ctx->pc = 0x2C3C98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3C94u;
            // 0x2c3c98: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3CB0u;
            goto label_2c3cb0;
        }
    }
    ctx->pc = 0x2C3C9Cu;
    // 0x2c3c9c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C3C9Cu;
    {
        const bool branch_taken_0x2c3c9c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3c9c) {
            ctx->pc = 0x2C3CC0u;
            goto label_2c3cc0;
        }
    }
    ctx->pc = 0x2C3CA4u;
    // 0x2c3ca4: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2C3CA4u;
    {
        const bool branch_taken_0x2c3ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3ca4) {
            ctx->pc = 0x2C3D44u;
            goto label_2c3d44;
        }
    }
    ctx->pc = 0x2C3CACu;
    // 0x2c3cac: 0x0  nop
    ctx->pc = 0x2c3cacu;
    // NOP
label_2c3cb0:
    // 0x2c3cb0: 0x1262001b  beq         $s3, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2C3CB0u;
    {
        const bool branch_taken_0x2c3cb0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c3cb0) {
            ctx->pc = 0x2C3D20u;
            goto label_2c3d20;
        }
    }
    ctx->pc = 0x2C3CB8u;
    // 0x2c3cb8: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2C3CB8u;
    {
        const bool branch_taken_0x2c3cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3cb8) {
            ctx->pc = 0x2C3D44u;
            goto label_2c3d44;
        }
    }
    ctx->pc = 0x2C3CC0u;
label_2c3cc0:
    // 0x2c3cc0: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x2C3CC0u;
    SET_GPR_U32(ctx, 31, 0x2C3CC8u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x2C3CC0u, 0x2C3CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3CC8u;
label_2c3cc8:
    // 0x2c3cc8: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2c3cc8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2c3ccc: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x2c3cccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2c3cd0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2c3cd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2c3cd4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2c3cd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c3cd8: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x2c3cd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x2c3cdc: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2c3cdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2c3ce0: 0x4602a082  mul.s       $f2, $f20, $f2
    ctx->pc = 0x2c3ce0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x2c3ce4: 0xc78392ec  lwc1        $f3, -0x6D14($gp)
    ctx->pc = 0x2c3ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c3ce8: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x2c3ce8u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2c3cec: 0x1810  mfhi        $v1
    ctx->pc = 0x2c3cecu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2c3cf0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2c3cf0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c3cf4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2c3cf4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2c3cf8: 0x46020d01  sub.s       $f20, $f1, $f2
    ctx->pc = 0x2c3cf8u;
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2c3cfc: 0x4600a005  abs.s       $f0, $f20
    ctx->pc = 0x2c3cfcu;
    ctx->f[0] = FPU_ABS_S(ctx->f[20]);
    // 0x2c3d00: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2c3d00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2c3d04: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2C3D04u;
    {
        const bool branch_taken_0x2c3d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3D04u;
        // 0x2c3d08: 0x46030540  add.s       $f21, $f0, $f3 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3d04) {
            ctx->pc = 0x2C3D44u;
            goto label_2c3d44;
        }
    }
    ctx->pc = 0x2C3D0Cu;
    // 0x2c3d0c: 0x0  nop
    ctx->pc = 0x2c3d0cu;
    // NOP
label_2c3d10:
    // 0x2c3d10: 0xc78092f0  lwc1        $f0, -0x6D10($gp)
    ctx->pc = 0x2c3d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c3d14: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C3D14u;
    {
        const bool branch_taken_0x2c3d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3d14) {
            ctx->pc = 0x2C3D24u;
            goto label_2c3d24;
        }
    }
    ctx->pc = 0x2C3D1Cu;
    // 0x2c3d1c: 0x0  nop
    ctx->pc = 0x2c3d1cu;
    // NOP
label_2c3d20:
    // 0x2c3d20: 0xc78092f4  lwc1        $f0, -0x6D0C($gp)
    ctx->pc = 0x2c3d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c3d24:
    // 0x2c3d24: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x2C3D24u;
    SET_GPR_U32(ctx, 31, 0x2C3D2Cu);
    ctx->pc = 0x2C3D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3D24u;
    // 0x2c3d28: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x2C3D24u, 0x2C3D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3D2Cu;
label_2c3d2c:
    // 0x2c3d2c: 0x24042328  addiu       $a0, $zero, 0x2328
    ctx->pc = 0x2c3d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9000));
    // 0x2c3d30: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x2c3d30u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2c3d34: 0x1810  mfhi        $v1
    ctx->pc = 0x2c3d34u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2c3d38: 0x246303e8  addiu       $v1, $v1, 0x3E8
    ctx->pc = 0x2c3d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1000));
    // 0x2c3d3c: 0x4483a800  mtc1        $v1, $f21
    ctx->pc = 0x2c3d3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2c3d40: 0x4680ad60  cvt.s.w     $f21, $f21
    ctx->pc = 0x2c3d40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[21], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
label_2c3d44:
    // 0x2c3d44: 0xc78c92f8  lwc1        $f12, -0x6D08($gp)
    ctx->pc = 0x2c3d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c3d48: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c3d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3d4c: 0xc084cb0  jal         func_2132C0
    ctx->pc = 0x2C3D4Cu;
    SET_GPR_U32(ctx, 31, 0x2C3D54u);
    ctx->pc = 0x2C3D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3D4Cu;
    // 0x2c3d50: 0x460ca302  mul.s       $f12, $f20, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2132C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2132C0u, 0x2C3D4Cu, 0x2C3D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3D54u;
label_2c3d54:
    // 0x2c3d54: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2c3d54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3d58: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x2c3d58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2c3d5c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c3d5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3d60: 0xc08491e  jal         func_212478
    ctx->pc = 0x2C3D60u;
    SET_GPR_U32(ctx, 31, 0x2C3D68u);
    ctx->pc = 0x2C3D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3D60u;
    // 0x2c3d64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212478u, 0x2C3D60u, 0x2C3D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3D68u;
label_2c3d68:
    // 0x2c3d68: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2c3d68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3d6c: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x2c3d6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2c3d70: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2c3d70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3d74: 0xc084774  jal         func_211DD0
    ctx->pc = 0x2C3D74u;
    SET_GPR_U32(ctx, 31, 0x2C3D7Cu);
    ctx->pc = 0x2C3D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3D74u;
    // 0x2c3d78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211DD0u, 0x2C3D74u, 0x2C3D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3D7Cu;
label_2c3d7c:
    // 0x2c3d7c: 0x2662ffff  addiu       $v0, $s3, -0x1
    ctx->pc = 0x2c3d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x2c3d80: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2c3d80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2c3d84: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C3D84u;
    {
        const bool branch_taken_0x2c3d84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3D84u;
        // 0x2c3d88: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3d84) {
            ctx->pc = 0x2C3D94u;
            goto label_2c3d94;
        }
    }
    ctx->pc = 0x2C3D8Cu;
    // 0x2c3d8c: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x2c3d8cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c3d90: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x2c3d90u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
label_2c3d94:
    // 0x2c3d94: 0xc0847da  jal         func_211F68
    ctx->pc = 0x2C3D94u;
    SET_GPR_U32(ctx, 31, 0x2C3D9Cu);
    ctx->pc = 0x2C3D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3D94u;
    // 0x2c3d98: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211F68u, 0x2C3D94u, 0x2C3D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3D9Cu;
label_2c3d9c:
    // 0x2c3d9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c3d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3da0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2c3da0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x2c3da4: 0xc0847a4  jal         func_211E90
    ctx->pc = 0x2C3DA4u;
    SET_GPR_U32(ctx, 31, 0x2C3DACu);
    ctx->pc = 0x2C3DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3DA4u;
    // 0x2c3da8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211E90u, 0x2C3DA4u, 0x2C3DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3DACu;
label_2c3dac:
    // 0x2c3dac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c3dacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3db0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c3db0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3db4: 0xc084774  jal         func_211DD0
    ctx->pc = 0x2C3DB4u;
    SET_GPR_U32(ctx, 31, 0x2C3DBCu);
    ctx->pc = 0x2C3DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3DB4u;
    // 0x2c3db8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211DD0u, 0x2C3DB4u, 0x2C3DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3DBCu;
label_2c3dbc:
    // 0x2c3dbc: 0xc08b634  jal         func_22D8D0
    ctx->pc = 0x2C3DBCu;
    SET_GPR_U32(ctx, 31, 0x2C3DC4u);
    ctx->pc = 0x2C3DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3DBCu;
    // 0x2c3dc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D8D0u, 0x2C3DBCu, 0x2C3DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3DC4u;
label_2c3dc4:
    // 0x2c3dc4: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2c3dc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2c3dc8: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x2c3dc8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c3dcc: 0x7ea20750  sq          $v0, 0x750($s5)
    ctx->pc = 0x2c3dccu;
    WRITE128(ADD32(GPR_U32(ctx, 21), 1872), GPR_VEC(ctx, 2));
    // 0x2c3dd0: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x2c3dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c3dd4: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x2c3dd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x2c3dd8: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x2c3dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c3ddc: 0xe6a10008  swc1        $f1, 0x8($s5)
    ctx->pc = 0x2c3ddcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
    // 0x2c3de0: 0xdfb000b0  ld          $s0, 0xB0($sp)
    ctx->pc = 0x2c3de0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_2c3de4:
    // 0x2c3de4: 0xdfb100b8  ld          $s1, 0xB8($sp)
    ctx->pc = 0x2c3de4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2c3de8: 0xdfb200c0  ld          $s2, 0xC0($sp)
    ctx->pc = 0x2c3de8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2c3dec: 0xdfb300c8  ld          $s3, 0xC8($sp)
    ctx->pc = 0x2c3decu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2c3df0: 0xdfb400d0  ld          $s4, 0xD0($sp)
    ctx->pc = 0x2c3df0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2c3df4: 0xdfb500d8  ld          $s5, 0xD8($sp)
    ctx->pc = 0x2c3df4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2c3df8: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x2c3df8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2c3dfc: 0xc7b500f0  lwc1        $f21, 0xF0($sp)
    ctx->pc = 0x2c3dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2c3e00: 0xc7b400e8  lwc1        $f20, 0xE8($sp)
    ctx->pc = 0x2c3e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c3e04: 0x3e00008  jr          $ra
    ctx->pc = 0x2C3E04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C3E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3E04u;
        // 0x2c3e08: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C3E04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C3E0Cu;
    // 0x2c3e0c: 0x0  nop
    ctx->pc = 0x2c3e0cu;
    // NOP
    ctx->pc = 0x2c3e10u;
}
