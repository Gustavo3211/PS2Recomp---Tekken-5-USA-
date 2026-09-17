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

// Function: sub_00292E18
// Address: 0x292e18 - 0x292ed0
void sub_00292E18_0x292e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00292E18_0x292e18");
#endif

    switch (ctx->pc) {
        case 0x292e9cu: goto label_292e9c;
        case 0x292eacu: goto label_292eac;
        case 0x292ebcu: goto label_292ebc;
        default: break;
    }

    ctx->pc = 0x292e18u;

    // 0x292e18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x292e18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x292e1c: 0x24840164  addiu       $a0, $a0, 0x164
    ctx->pc = 0x292e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 356));
    // 0x292e20: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x292e20u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x292e24: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x292e24u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x292e28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x292e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x292e2c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x292e2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292e30: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x292e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x292e34: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x292e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x292e38: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x292E38u;
    {
        const bool branch_taken_0x292e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x292E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292E38u;
        // 0x292e3c: 0x2ce80008  sltiu       $t0, $a3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x292e38) {
            ctx->pc = 0x292E54u;
            goto label_292e54;
        }
    }
    ctx->pc = 0x292E40u;
    // 0x292e40: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x292e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x292e44: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x292e44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292e48: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x292e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x292e4c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x292E4Cu;
    {
        const bool branch_taken_0x292e4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x292e4c) {
            ctx->pc = 0x292E60u;
            goto label_292e60;
        }
    }
    ctx->pc = 0x292E54u;
label_292e54:
    // 0x292e54: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x292e54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x292e58: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x292e58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292e5c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x292e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_292e60:
    // 0x292e60: 0x11000016  beqz        $t0, . + 4 + (0x16 << 2)
    ctx->pc = 0x292E60u;
    {
        const bool branch_taken_0x292e60 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x292E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292E60u;
        // 0x292e64: 0x30a50001  andi        $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x292e60) {
            ctx->pc = 0x292EBCu;
            goto label_292ebc;
        }
    }
    ctx->pc = 0x292E68u;
    // 0x292e68: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x292E68u;
    {
        const bool branch_taken_0x292e68 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x292E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292E68u;
        // 0x292e6c: 0x71080  sll         $v0, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292e68) {
            ctx->pc = 0x292E80u;
            goto label_292e80;
        }
    }
    ctx->pc = 0x292E70u;
    // 0x292e70: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x292e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x292e74: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x292E74u;
    {
        const bool branch_taken_0x292e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292E74u;
        // 0x292e78: 0x8c500100  lw          $s0, 0x100($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292e74) {
            ctx->pc = 0x292E88u;
            goto label_292e88;
        }
    }
    ctx->pc = 0x292E7Cu;
    // 0x292e7c: 0x0  nop
    ctx->pc = 0x292e7cu;
    // NOP
label_292e80:
    // 0x292e80: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x292e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x292e84: 0x8c500120  lw          $s0, 0x120($v0)
    ctx->pc = 0x292e84u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 288)));
label_292e88:
    // 0x292e88: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x292E88u;
    {
        const bool branch_taken_0x292e88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x292E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292E88u;
        // 0x292e8c: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292e88) {
            ctx->pc = 0x292EBCu;
            goto label_292ebc;
        }
    }
    ctx->pc = 0x292E90u;
    // 0x292e90: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x292e90u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x292e94: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x292E94u;
    SET_GPR_U32(ctx, 31, 0x292E9Cu);
    ctx->pc = 0x292E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292E94u;
    // 0x292e98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x292E94u, 0x292E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292E9Cu;
label_292e9c:
    // 0x292e9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x292e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292ea0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x292ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x292ea4: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x292EA4u;
    SET_GPR_U32(ctx, 31, 0x292EACu);
    ctx->pc = 0x292EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292EA4u;
    // 0x292ea8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x292EA4u, 0x292EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292EACu;
label_292eac:
    // 0x292eac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x292eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292eb0: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x292eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x292eb4: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x292EB4u;
    SET_GPR_U32(ctx, 31, 0x292EBCu);
    ctx->pc = 0x292EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292EB4u;
    // 0x292eb8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x292EB4u, 0x292EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292EBCu;
label_292ebc:
    // 0x292ebc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x292ebcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x292ec0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x292ec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x292ec4: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x292ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x292ec8: 0x3e00008  jr          $ra
    ctx->pc = 0x292EC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x292ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292EC8u;
        // 0x292ecc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x292EC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x292ED0u;
}
