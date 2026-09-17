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

// Function: sub_002E4C88
// Address: 0x2e4c88 - 0x2e4d30
void sub_002E4C88_0x2e4c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E4C88_0x2e4c88");
#endif

    switch (ctx->pc) {
        case 0x2e4cacu: goto label_2e4cac;
        case 0x2e4cb8u: goto label_2e4cb8;
        case 0x2e4cc8u: goto label_2e4cc8;
        case 0x2e4cecu: goto label_2e4cec;
        case 0x2e4d00u: goto label_2e4d00;
        case 0x2e4d08u: goto label_2e4d08;
        case 0x2e4d10u: goto label_2e4d10;
        case 0x2e4d18u: goto label_2e4d18;
        default: break;
    }

    ctx->pc = 0x2e4c88u;

    // 0x2e4c88: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x2e4c88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x2e4c8c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e4c8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e4c90: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2e4c90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e4c94: 0x248437e0  addiu       $a0, $a0, 0x37E0
    ctx->pc = 0x2e4c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14304));
    // 0x2e4c98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e4c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e4c9c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2e4c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2e4ca0: 0xe7b50018  swc1        $f21, 0x18($sp)
    ctx->pc = 0x2e4ca0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2e4ca4: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x2E4CA4u;
    SET_GPR_U32(ctx, 31, 0x2E4CACu);
    ctx->pc = 0x2E4CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4CA4u;
    // 0x2e4ca8: 0xe7b40010  swc1        $f20, 0x10($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x2E4CA4u, 0x2E4CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4CACu;
label_2e4cac:
    // 0x2e4cac: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2e4cacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2e4cb0: 0xc0b9362  jal         func_2E4D88
    ctx->pc = 0x2E4CB0u;
    SET_GPR_U32(ctx, 31, 0x2E4CB8u);
    ctx->pc = 0x2E4CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4CB0u;
    // 0x2e4cb4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4D88u, 0x2E4CB0u, 0x2E4CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4CB8u;
label_2e4cb8:
    // 0x2e4cb8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e4cb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e4cbc: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2e4cbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2e4cc0: 0xc0c6870  jal         func_31A1C0
    ctx->pc = 0x2E4CC0u;
    SET_GPR_U32(ctx, 31, 0x2E4CC8u);
    ctx->pc = 0x2E4CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4CC0u;
    // 0x2e4cc4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A1C0u, 0x2E4CC0u, 0x2E4CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4CC8u;
label_2e4cc8:
    // 0x2e4cc8: 0x3c014420  lui         $at, 0x4420
    ctx->pc = 0x2e4cc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17440 << 16));
    // 0x2e4ccc: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x2e4cccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2e4cd0: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x2e4cd0u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x2e4cd4: 0x3c0143e0  lui         $at, 0x43E0
    ctx->pc = 0x2e4cd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17376 << 16));
    // 0x2e4cd8: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x2e4cd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2e4cdc: 0x4600ac46  mov.s       $f17, $f21
    ctx->pc = 0x2e4cdcu;
    ctx->f[17] = FPU_MOV_S(ctx->f[21]);
    // 0x2e4ce0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2e4ce0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2e4ce4: 0xc0c689c  jal         func_31A270
    ctx->pc = 0x2E4CE4u;
    SET_GPR_U32(ctx, 31, 0x2E4CECu);
    ctx->pc = 0x2E4CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4CE4u;
    // 0x2e4ce8: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A270u, 0x2E4CE4u, 0x2E4CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4CECu;
label_2e4cec:
    // 0x2e4cec: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x2e4cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e4cf0: 0xc60e0008  lwc1        $f14, 0x8($s0)
    ctx->pc = 0x2e4cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2e4cf4: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x2e4cf4u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x2e4cf8: 0xc0c6856  jal         func_31A158
    ctx->pc = 0x2E4CF8u;
    SET_GPR_U32(ctx, 31, 0x2E4D00u);
    ctx->pc = 0x2E4CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4CF8u;
    // 0x2e4cfc: 0xc60d0004  lwc1        $f13, 0x4($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A158u, 0x2E4CF8u, 0x2E4D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4D00u;
label_2e4d00:
    // 0x2e4d00: 0xc0c685e  jal         func_31A178
    ctx->pc = 0x2E4D00u;
    SET_GPR_U32(ctx, 31, 0x2E4D08u);
    ctx->pc = 0x2E4D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4D00u;
    // 0x2e4d04: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A178u, 0x2E4D00u, 0x2E4D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4D08u;
label_2e4d08:
    // 0x2e4d08: 0xc0c6866  jal         func_31A198
    ctx->pc = 0x2E4D08u;
    SET_GPR_U32(ctx, 31, 0x2E4D10u);
    ctx->pc = 0x2E4D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4D08u;
    // 0x2e4d0c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A198u, 0x2E4D08u, 0x2E4D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4D10u;
label_2e4d10:
    // 0x2e4d10: 0xc0cb7ce  jal         func_32DF38
    ctx->pc = 0x2E4D10u;
    SET_GPR_U32(ctx, 31, 0x2E4D18u);
    ctx->pc = 0x32DF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DF38u, 0x2E4D10u, 0x2E4D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4D18u;
label_2e4d18:
    // 0x2e4d18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e4d18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e4d1c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2e4d1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e4d20: 0xc7b50018  lwc1        $f21, 0x18($sp)
    ctx->pc = 0x2e4d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2e4d24: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x2e4d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e4d28: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4D28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4D28u;
        // 0x2e4d2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4D28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E4D30u;
}
