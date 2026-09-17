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

// Function: sub_003089B8
// Address: 0x3089b8 - 0x308a80
void sub_003089B8_0x3089b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003089B8_0x3089b8");
#endif

    switch (ctx->pc) {
        case 0x308a30u: goto label_308a30;
        case 0x308a3cu: goto label_308a3c;
        case 0x308a58u: goto label_308a58;
        default: break;
    }

    ctx->pc = 0x3089b8u;

    // 0x3089b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3089b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3089bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3089bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3089c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3089c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3089c4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3089c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3089c8: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x3089c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x3089cc: 0x4430029  bgezl       $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x3089CCu;
    {
        const bool branch_taken_0x3089cc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x3089cc) {
            ctx->pc = 0x3089D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3089CCu;
            // 0x3089d0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308A74u;
            goto label_308a74;
        }
    }
    ctx->pc = 0x3089D4u;
    // 0x3089d4: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x3089d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3089d8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3089d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3089dc: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x3089dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x3089e0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3089E0u;
    {
        const bool branch_taken_0x3089e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3089E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3089E0u;
        // 0x3089e4: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3089e0) {
            ctx->pc = 0x308A04u;
            goto label_308a04;
        }
    }
    ctx->pc = 0x3089E8u;
    // 0x3089e8: 0x28620007  slti        $v0, $v1, 0x7
    ctx->pc = 0x3089e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x3089ec: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3089ECu;
    {
        const bool branch_taken_0x3089ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3089F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3089ECu;
        // 0x3089f0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3089ec) {
            ctx->pc = 0x308A04u;
            goto label_308a04;
        }
    }
    ctx->pc = 0x3089F4u;
    // 0x3089f4: 0x28630008  slti        $v1, $v1, 0x8
    ctx->pc = 0x3089f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x3089f8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3089f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3089fc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3089fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x308a00: 0x43200a  movz        $a0, $v0, $v1
    ctx->pc = 0x308a00u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_308a04:
    // 0x308a04: 0x480001a  bltz        $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x308A04u;
    {
        const bool branch_taken_0x308a04 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x308A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308A04u;
        // 0x308a08: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x308a04) {
            ctx->pc = 0x308A70u;
            goto label_308a70;
        }
    }
    ctx->pc = 0x308A0Cu;
    // 0x308a0c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x308A0Cu;
    {
        const bool branch_taken_0x308a0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x308A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308A0Cu;
        // 0x308a10: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308a0c) {
            ctx->pc = 0x308A28u;
            goto label_308a28;
        }
    }
    ctx->pc = 0x308A14u;
    // 0x308a14: 0x1082000e  beq         $a0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x308A14u;
    {
        const bool branch_taken_0x308a14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x308a14) {
            ctx->pc = 0x308A50u;
            goto label_308a50;
        }
    }
    ctx->pc = 0x308A1Cu;
    // 0x308a1c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x308A1Cu;
    {
        const bool branch_taken_0x308a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308A1Cu;
        // 0x308a20: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308a1c) {
            ctx->pc = 0x308A74u;
            goto label_308a74;
        }
    }
    ctx->pc = 0x308A24u;
    // 0x308a24: 0x0  nop
    ctx->pc = 0x308a24u;
    // NOP
label_308a28:
    // 0x308a28: 0xc092940  jal         func_24A500
    ctx->pc = 0x308A28u;
    SET_GPR_U32(ctx, 31, 0x308A30u);
    ctx->pc = 0x308A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308A28u;
    // 0x308a2c: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x308A28u, 0x308A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308A30u;
label_308a30:
    // 0x308a30: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x308a30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x308a34: 0xc0c21b6  jal         func_3086D8
    ctx->pc = 0x308A34u;
    SET_GPR_U32(ctx, 31, 0x308A3Cu);
    ctx->pc = 0x308A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308A34u;
    // 0x308a38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3086D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3086D8u, 0x308A34u, 0x308A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308A3Cu;
label_308a3c:
    // 0x308a3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x308a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308a40: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x308a40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x308a44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x308a44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x308a48: 0x80c2164  j           func_308590
    ctx->pc = 0x308A48u;
    ctx->pc = 0x308A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308A48u;
    // 0x308a4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308590u;
    sub_00308590_0x308590(rdram, ctx, runtime); return;
    ctx->pc = 0x308A50u;
label_308a50:
    // 0x308a50: 0xc092940  jal         func_24A500
    ctx->pc = 0x308A50u;
    SET_GPR_U32(ctx, 31, 0x308A58u);
    ctx->pc = 0x308A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308A50u;
    // 0x308a54: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x308A50u, 0x308A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308A58u;
label_308a58:
    // 0x308a58: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x308a58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x308a5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x308a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308a60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x308a60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x308a64: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x308a64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x308a68: 0x80c21b6  j           func_3086D8
    ctx->pc = 0x308A68u;
    ctx->pc = 0x308A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308A68u;
    // 0x308a6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3086D8u;
    sub_003086D8_0x3086d8(rdram, ctx, runtime); return;
    ctx->pc = 0x308A70u;
label_308a70:
    // 0x308a70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x308a70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_308a74:
    // 0x308a74: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x308a74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x308a78: 0x3e00008  jr          $ra
    ctx->pc = 0x308A78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308A78u;
        // 0x308a7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308A78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308A80u;
}
