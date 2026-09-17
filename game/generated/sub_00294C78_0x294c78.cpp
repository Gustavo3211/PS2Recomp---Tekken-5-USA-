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

// Function: sub_00294C78
// Address: 0x294c78 - 0x294d40
void sub_00294C78_0x294c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294C78_0x294c78");
#endif

    switch (ctx->pc) {
        case 0x294cdcu: goto label_294cdc;
        case 0x294ce8u: goto label_294ce8;
        case 0x294d08u: goto label_294d08;
        default: break;
    }

    ctx->pc = 0x294c78u;

    // 0x294c78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x294c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x294c7c: 0x2cc20023  sltiu       $v0, $a2, 0x23
    ctx->pc = 0x294c7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)35) ? 1 : 0);
    // 0x294c80: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x294c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x294c84: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x294c84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294c88: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x294c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x294c8c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x294c8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294c90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x294c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x294c94: 0x2ca40005  sltiu       $a0, $a1, 0x5
    ctx->pc = 0x294c94u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x294c98: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x294C98u;
    {
        const bool branch_taken_0x294c98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x294C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294C98u;
        // 0x294c9c: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294c98) {
            ctx->pc = 0x294D24u;
            goto label_294d24;
        }
    }
    ctx->pc = 0x294CA0u;
    // 0x294ca0: 0x10800021  beqz        $a0, . + 4 + (0x21 << 2)
    ctx->pc = 0x294CA0u;
    {
        const bool branch_taken_0x294ca0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x294CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294CA0u;
        // 0x294ca4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294ca0) {
            ctx->pc = 0x294D28u;
            goto label_294d28;
        }
    }
    ctx->pc = 0x294CA8u;
    // 0x294ca8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x294ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x294cac: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x294cacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x294cb0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x294cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x294cb4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x294cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x294cb8: 0x8c500120  lw          $s0, 0x120($v0)
    ctx->pc = 0x294cb8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 288)));
    // 0x294cbc: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
    ctx->pc = 0x294CBCu;
    {
        const bool branch_taken_0x294cbc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x294CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294CBCu;
        // 0x294cc0: 0x8c630094  lw          $v1, 0x94($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294cbc) {
            ctx->pc = 0x294D24u;
            goto label_294d24;
        }
    }
    ctx->pc = 0x294CC4u;
    // 0x294cc4: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x294CC4u;
    {
        const bool branch_taken_0x294cc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x294CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294CC4u;
        // 0x294cc8: 0x3c04003e  lui         $a0, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294cc4) {
            ctx->pc = 0x294D10u;
            goto label_294d10;
        }
    }
    ctx->pc = 0x294CCCu;
    // 0x294ccc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x294cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x294cd0: 0x248437e0  addiu       $a0, $a0, 0x37E0
    ctx->pc = 0x294cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14304));
    // 0x294cd4: 0xc0b7cfa  jal         func_2DF3E8
    ctx->pc = 0x294CD4u;
    SET_GPR_U32(ctx, 31, 0x294CDCu);
    ctx->pc = 0x294CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294CD4u;
    // 0x294cd8: 0xac430078  sw          $v1, 0x78($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 120), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF3E8u, 0x294CD4u, 0x294CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294CDCu;
label_294cdc:
    // 0x294cdc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x294cdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294ce0: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x294CE0u;
    SET_GPR_U32(ctx, 31, 0x294CE8u);
    ctx->pc = 0x294CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294CE0u;
    // 0x294ce4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x294CE0u, 0x294CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294CE8u;
label_294ce8:
    // 0x294ce8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x294ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x294cec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x294cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294cf0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x294cf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294cf4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x294cf4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294cf8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x294cf8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294cfc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x294cfcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x294d00: 0xc0a5b96  jal         func_296E58
    ctx->pc = 0x294D00u;
    SET_GPR_U32(ctx, 31, 0x294D08u);
    ctx->pc = 0x294D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294D00u;
    // 0x294d04: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296E58u, 0x294D00u, 0x294D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294D08u;
label_294d08:
    // 0x294d08: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x294D08u;
    {
        const bool branch_taken_0x294d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x294D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294D08u;
        // 0x294d0c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294d08) {
            ctx->pc = 0x294D28u;
            goto label_294d28;
        }
    }
    ctx->pc = 0x294D10u;
label_294d10:
    // 0x294d10: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x294d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x294d14: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x294d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x294d18: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x294d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x294d1c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x294d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x294d20: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x294d20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_294d24:
    // 0x294d24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x294d24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_294d28:
    // 0x294d28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x294d28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x294d2c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x294d2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x294d30: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x294d30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x294d34: 0x3e00008  jr          $ra
    ctx->pc = 0x294D34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294D34u;
        // 0x294d38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294D34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294D3Cu;
    // 0x294d3c: 0x0  nop
    ctx->pc = 0x294d3cu;
    // NOP
    ctx->pc = 0x294d40u;
}
