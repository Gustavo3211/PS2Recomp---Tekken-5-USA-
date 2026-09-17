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

// Function: sub_00209AC0
// Address: 0x209ac0 - 0x209b80
void sub_00209AC0_0x209ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209AC0_0x209ac0");
#endif

    switch (ctx->pc) {
        case 0x209b04u: goto label_209b04;
        case 0x209b0cu: goto label_209b0c;
        case 0x209b1cu: goto label_209b1c;
        case 0x209b34u: goto label_209b34;
        case 0x209b40u: goto label_209b40;
        case 0x209b68u: goto label_209b68;
        default: break;
    }

    ctx->pc = 0x209ac0u;

    // 0x209ac0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x209ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x209ac4: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x209ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x209ac8: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x209ac8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x209acc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x209accu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209ad0: 0x3c0142d2  lui         $at, 0x42D2
    ctx->pc = 0x209ad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17106 << 16));
    // 0x209ad4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x209ad4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x209ad8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x209ad8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209adc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x209adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x209ae0: 0x2450c450  addiu       $s0, $v0, -0x3BB0
    ctx->pc = 0x209ae0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952016));
    // 0x209ae4: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x209ae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x209ae8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x209ae8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x209aec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x209aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209af0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x209af0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209af4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x209af4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x209af8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x209af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x209afc: 0xc0a5ee2  jal         func_297B88
    ctx->pc = 0x209AFCu;
    SET_GPR_U32(ctx, 31, 0x209B04u);
    ctx->pc = 0x209B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209AFCu;
    // 0x209b00: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x297B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297B88u, 0x209AFCu, 0x209B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209B04u;
label_209b04:
    // 0x209b04: 0xc0a3aea  jal         func_28EBA8
    ctx->pc = 0x209B04u;
    SET_GPR_U32(ctx, 31, 0x209B0Cu);
    ctx->pc = 0x28EBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EBA8u, 0x209B04u, 0x209B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209B0Cu;
label_209b0c:
    // 0x209b0c: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x209B0Cu;
    {
        const bool branch_taken_0x209b0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x209b0c) {
            ctx->pc = 0x209B10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209B0Cu;
            // 0x209b10: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x209B6Cu;
            goto label_209b6c;
        }
    }
    ctx->pc = 0x209B14u;
    // 0x209b14: 0xc0a7a6e  jal         func_29E9B8
    ctx->pc = 0x209B14u;
    SET_GPR_U32(ctx, 31, 0x209B1Cu);
    ctx->pc = 0x29E9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E9B8u, 0x209B14u, 0x209B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209B1Cu;
label_209b1c:
    // 0x209b1c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x209B1Cu;
    {
        const bool branch_taken_0x209b1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x209B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209B1Cu;
        // 0x209b20: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209b1c) {
            ctx->pc = 0x209B68u;
            goto label_209b68;
        }
    }
    ctx->pc = 0x209B24u;
    // 0x209b24: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x209b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x209b28: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x209b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x209b2c: 0xc07e252  jal         func_1F8948
    ctx->pc = 0x209B2Cu;
    SET_GPR_U32(ctx, 31, 0x209B34u);
    ctx->pc = 0x209B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209B2Cu;
    // 0x209b30: 0xa04383c4  sb          $v1, -0x7C3C($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294935492), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8948u, 0x209B2Cu, 0x209B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209B34u;
label_209b34:
    // 0x209b34: 0xaf8098ac  sw          $zero, -0x6754($gp)
    ctx->pc = 0x209b34u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940844), GPR_U32(ctx, 0));
    // 0x209b38: 0xc082162  jal         func_208588
    ctx->pc = 0x209B38u;
    SET_GPR_U32(ctx, 31, 0x209B40u);
    ctx->pc = 0x209B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209B38u;
    // 0x209b3c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208588u, 0x209B38u, 0x209B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209B40u;
label_209b40:
    // 0x209b40: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x209b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x209b44: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x209b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x209b48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x209b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209b4c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x209b4cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x209b50: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x209b50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x209b54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x209b54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209b58: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x209b58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209b5c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x209b5cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209b60: 0xc0a5ec2  jal         func_297B08
    ctx->pc = 0x209B60u;
    SET_GPR_U32(ctx, 31, 0x209B68u);
    ctx->pc = 0x209B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209B60u;
    // 0x209b64: 0xac438878  sw          $v1, -0x7788($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294936696), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297B08u, 0x209B60u, 0x209B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209B68u;
label_209b68:
    // 0x209b68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x209b68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_209b6c:
    // 0x209b6c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x209b6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x209b70: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x209b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x209b74: 0x3e00008  jr          $ra
    ctx->pc = 0x209B74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209B74u;
        // 0x209b78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209B74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209B7Cu;
    // 0x209b7c: 0x0  nop
    ctx->pc = 0x209b7cu;
    // NOP
    ctx->pc = 0x209b80u;
}
