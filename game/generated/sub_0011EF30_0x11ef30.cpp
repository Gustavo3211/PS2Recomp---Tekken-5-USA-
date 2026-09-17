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

// Function: sub_0011EF30
// Address: 0x11ef30 - 0x11f000
void sub_0011EF30_0x11ef30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011EF30_0x11ef30");
#endif

    switch (ctx->pc) {
        case 0x11efa8u: goto label_11efa8;
        default: break;
    }

    ctx->pc = 0x11ef30u;

    // 0x11ef30: 0x44036000  mfc1        $v1, $f12
    ctx->pc = 0x11ef30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x11ef34: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x11ef34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ef38: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x11ef38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x11ef3c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x11ef3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x11ef40: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11ef40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11ef44: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x11ef44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x11ef48: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x11ef48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x11ef4c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x11ef4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x11ef50: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11EF50u;
    {
        const bool branch_taken_0x11ef50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EF50u;
        // 0x11ef54: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ef50) {
            ctx->pc = 0x11EF70u;
            goto label_11ef70;
        }
    }
    ctx->pc = 0x11EF58u;
    // 0x11ef58: 0x4a10007  bgez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x11EF58u;
    {
        const bool branch_taken_0x11ef58 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x11EF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EF58u;
        // 0x11ef5c: 0x53dc3  sra         $a3, $a1, 23 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 5), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ef58) {
            ctx->pc = 0x11EF78u;
            goto label_11ef78;
        }
    }
    ctx->pc = 0x11EF60u;
    // 0x11ef60: 0x460c6001  sub.s       $f0, $f12, $f12
    ctx->pc = 0x11ef60u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[12]);
    // 0x11ef64: 0x0  nop
    ctx->pc = 0x11ef64u;
    // NOP
    // 0x11ef68: 0x0  nop
    ctx->pc = 0x11ef68u;
    // NOP
    // 0x11ef6c: 0x46000003  div.s       $f0, $f0, $f0
    ctx->pc = 0x11ef6cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[0];
label_11ef70:
    // 0x11ef70: 0x3e00008  jr          $ra
    ctx->pc = 0x11EF70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11EF70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11EF78u;
label_11ef78:
    // 0x11ef78: 0x24e7ff81  addiu       $a3, $a3, -0x7F
    ctx->pc = 0x11ef78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967169));
    // 0x11ef7c: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x11ef7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x11ef80: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x11ef80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x11ef84: 0x30e40001  andi        $a0, $a3, 0x1
    ctx->pc = 0x11ef84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x11ef88: 0x622825  or          $a1, $v1, $v0
    ctx->pc = 0x11ef88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x11ef8c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11ef8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ef90: 0x852804  sllv        $a1, $a1, $a0
    ctx->pc = 0x11ef90u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
    // 0x11ef94: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x11ef94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x11ef98: 0x73843  sra         $a3, $a3, 1
    ctx->pc = 0x11ef98u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 1));
    // 0x11ef9c: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x11ef9cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x11efa0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11efa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11efa4: 0x0  nop
    ctx->pc = 0x11efa4u;
    // NOP
label_11efa8:
    // 0x11efa8: 0x1041821  addu        $v1, $t0, $a0
    ctx->pc = 0x11efa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x11efac: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x11efacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x11efb0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x11EFB0u;
    {
        const bool branch_taken_0x11efb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11efb0) {
            ctx->pc = 0x11EFB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11EFB0u;
            // 0x11efb4: 0x42042  srl         $a0, $a0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11EFC8u;
            goto label_11efc8;
        }
    }
    ctx->pc = 0x11EFB8u;
    // 0x11efb8: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x11efb8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x11efbc: 0x644021  addu        $t0, $v1, $a0
    ctx->pc = 0x11efbcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x11efc0: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x11efc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x11efc4: 0x42042  srl         $a0, $a0, 1
    ctx->pc = 0x11efc4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_11efc8:
    // 0x11efc8: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x11EFC8u;
    {
        const bool branch_taken_0x11efc8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x11EFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EFC8u;
        // 0x11efcc: 0x52840  sll         $a1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11efc8) {
            ctx->pc = 0x11EFA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11efa8;
        }
    }
    ctx->pc = 0x11EFD0u;
    // 0x11efd0: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x11EFD0u;
    {
        const bool branch_taken_0x11efd0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EFD0u;
        // 0x11efd4: 0x30c20001  andi        $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11efd0) {
            ctx->pc = 0x11EFDCu;
            goto label_11efdc;
        }
    }
    ctx->pc = 0x11EFD8u;
    // 0x11efd8: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x11efd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_11efdc:
    // 0x11efdc: 0x61043  sra         $v0, $a2, 1
    ctx->pc = 0x11efdcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 1));
    // 0x11efe0: 0x71dc0  sll         $v1, $a3, 23
    ctx->pc = 0x11efe0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 23));
    // 0x11efe4: 0x3c053f00  lui         $a1, 0x3F00
    ctx->pc = 0x11efe4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16128 << 16));
    // 0x11efe8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x11efe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x11efec: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x11efecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x11eff0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x11eff0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11eff4: 0x3e00008  jr          $ra
    ctx->pc = 0x11EFF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11EFF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11EFFCu;
    // 0x11effc: 0x0  nop
    ctx->pc = 0x11effcu;
    // NOP
    ctx->pc = 0x11f000u;
}
