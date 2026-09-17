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

// Function: sub_003299F0
// Address: 0x3299f0 - 0x329a90
void sub_003299F0_0x3299f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003299F0_0x3299f0");
#endif

    switch (ctx->pc) {
        case 0x3299f0u: goto label_3299f0;
        case 0x3299f4u: goto label_3299f4;
        case 0x3299f8u: goto label_3299f8;
        case 0x3299fcu: goto label_3299fc;
        case 0x329a00u: goto label_329a00;
        case 0x329a04u: goto label_329a04;
        case 0x329a08u: goto label_329a08;
        case 0x329a0cu: goto label_329a0c;
        case 0x329a10u: goto label_329a10;
        case 0x329a14u: goto label_329a14;
        case 0x329a18u: goto label_329a18;
        case 0x329a1cu: goto label_329a1c;
        case 0x329a20u: goto label_329a20;
        case 0x329a24u: goto label_329a24;
        case 0x329a28u: goto label_329a28;
        case 0x329a2cu: goto label_329a2c;
        case 0x329a30u: goto label_329a30;
        case 0x329a34u: goto label_329a34;
        case 0x329a38u: goto label_329a38;
        case 0x329a3cu: goto label_329a3c;
        case 0x329a40u: goto label_329a40;
        case 0x329a44u: goto label_329a44;
        case 0x329a48u: goto label_329a48;
        case 0x329a4cu: goto label_329a4c;
        case 0x329a50u: goto label_329a50;
        case 0x329a54u: goto label_329a54;
        case 0x329a58u: goto label_329a58;
        case 0x329a5cu: goto label_329a5c;
        case 0x329a60u: goto label_329a60;
        case 0x329a64u: goto label_329a64;
        case 0x329a68u: goto label_329a68;
        case 0x329a6cu: goto label_329a6c;
        case 0x329a70u: goto label_329a70;
        case 0x329a74u: goto label_329a74;
        case 0x329a78u: goto label_329a78;
        case 0x329a7cu: goto label_329a7c;
        case 0x329a80u: goto label_329a80;
        case 0x329a84u: goto label_329a84;
        case 0x329a88u: goto label_329a88;
        case 0x329a8cu: goto label_329a8c;
        default: break;
    }

    ctx->pc = 0x3299f0u;

label_3299f0:
    // 0x3299f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3299f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3299f4:
    // 0x3299f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3299f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3299f8:
    // 0x3299f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3299f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3299fc:
    // 0x3299fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3299fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_329a00:
    // 0x329a00: 0x26110030  addiu       $s1, $s0, 0x30
    ctx->pc = 0x329a00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_329a04:
    // 0x329a04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x329a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_329a08:
    // 0x329a08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x329a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_329a0c:
    // 0x329a0c: 0xe60c0030  swc1        $f12, 0x30($s0)
    ctx->pc = 0x329a0cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
label_329a10:
    // 0x329a10: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x329a10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_329a14:
    // 0x329a14: 0xe60d0034  swc1        $f13, 0x34($s0)
    ctx->pc = 0x329a14u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_329a18:
    // 0x329a18: 0xe60e0038  swc1        $f14, 0x38($s0)
    ctx->pc = 0x329a18u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_329a1c:
    // 0x329a1c: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x329a1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
label_329a20:
    // 0x329a20: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x329a20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_329a24:
    // 0x329a24: 0xc0cbe4a  jal         func_32F928
label_329a28:
    if (ctx->pc == 0x329A28u) {
        ctx->pc = 0x329A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329A24u;
        // 0x329a28: 0xae00003c  sw          $zero, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329A2Cu;
        goto label_329a2c;
    }
    ctx->pc = 0x329A24u;
    SET_GPR_U32(ctx, 31, 0x329A2Cu);
    ctx->pc = 0x329A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329A24u;
    // 0x329a28: 0xae00003c  sw          $zero, 0x3C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32F928u, 0x329A24u, 0x329A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329A2Cu;
label_329a2c:
    // 0x329a2c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x329a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_329a30:
    // 0x329a30: 0x50600012  beql        $v1, $zero, . + 4 + (0x12 << 2)
label_329a34:
    if (ctx->pc == 0x329A34u) {
        ctx->pc = 0x329A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329A30u;
        // 0x329a34: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329A38u;
        goto label_329a38;
    }
    ctx->pc = 0x329A30u;
    {
        const bool branch_taken_0x329a30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x329a30) {
            ctx->pc = 0x329A34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x329A30u;
            // 0x329a34: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329A7Cu;
            goto label_329a7c;
        }
    }
    ctx->pc = 0x329A38u;
label_329a38:
    // 0x329a38: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x329a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_329a3c:
    // 0x329a3c: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x329a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_329a40:
    // 0x329a40: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x329a40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_329a44:
    // 0x329a44: 0xc60e0038  lwc1        $f14, 0x38($s0)
    ctx->pc = 0x329a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_329a48:
    // 0x329a48: 0x3c03001e  lui         $v1, 0x1E
    ctx->pc = 0x329a48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)30 << 16));
label_329a4c:
    // 0x329a4c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x329a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_329a50:
    // 0x329a50: 0x8c635a80  lw          $v1, 0x5A80($v1)
    ctx->pc = 0x329a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 23168)));
label_329a54:
    // 0x329a54: 0x8e050054  lw          $a1, 0x54($s0)
    ctx->pc = 0x329a54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_329a58:
    // 0x329a58: 0x8c660024  lw          $a2, 0x24($v1)
    ctx->pc = 0x329a58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_329a5c:
    // 0x329a5c: 0xc60d0034  lwc1        $f13, 0x34($s0)
    ctx->pc = 0x329a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_329a60:
    // 0x329a60: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x329a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_329a64:
    // 0x329a64: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x329a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_329a68:
    // 0x329a68: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x329a68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_329a6c:
    // 0x329a6c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x329a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_329a70:
    // 0x329a70: 0x60f809  jalr        $v1
label_329a74:
    if (ctx->pc == 0x329A74u) {
        ctx->pc = 0x329A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329A70u;
        // 0x329a74: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329A78u;
        goto label_329a78;
    }
    ctx->pc = 0x329A70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x329A78u);
        ctx->pc = 0x329A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329A70u;
        // 0x329a74: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329A70u, 0x329A78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x329A78u;
label_329a78:
    // 0x329a78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x329a78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_329a7c:
    // 0x329a7c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x329a7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_329a80:
    // 0x329a80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x329a80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_329a84:
    // 0x329a84: 0x3e00008  jr          $ra
label_329a88:
    if (ctx->pc == 0x329A88u) {
        ctx->pc = 0x329A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329A84u;
        // 0x329a88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329A8Cu;
        goto label_329a8c;
    }
    ctx->pc = 0x329A84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x329A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329A84u;
        // 0x329a88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329A84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x329A8Cu;
label_329a8c:
    // 0x329a8c: 0x0  nop
    ctx->pc = 0x329a8cu;
    // NOP
    ctx->pc = 0x329a90u;
}
