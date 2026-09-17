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

// Function: sub_00503D70
// Address: 0x503d70 - 0x503e18
void sub_00503D70_0x503d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00503D70_0x503d70");
#endif

    switch (ctx->pc) {
        case 0x503dc8u: goto label_503dc8;
        case 0x503e00u: goto label_503e00;
        default: break;
    }

    ctx->pc = 0x503d70u;

    // 0x503d70: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x503d70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x503d74: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x503d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x503d78: 0x30c38000  andi        $v1, $a2, 0x8000
    ctx->pc = 0x503d78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32768);
    // 0x503d7c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x503d7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x503d80: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x503d80u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x503d84: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x503d84u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x503d88: 0x30c41000  andi        $a0, $a2, 0x1000
    ctx->pc = 0x503d88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4096);
    // 0x503d8c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x503d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x503d90: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x503d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x503d94: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x503d94u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x503d98: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x503d98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x503d9c: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x503D9Cu;
    {
        const bool branch_taken_0x503d9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x503DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x503D9Cu;
        // 0x503da0: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x503d9c) {
            ctx->pc = 0x503DD0u;
            goto label_503dd0;
        }
    }
    ctx->pc = 0x503DA4u;
    // 0x503da4: 0x3c10008f  lui         $s0, 0x8F
    ctx->pc = 0x503da4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)143 << 16));
    // 0x503da8: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x503da8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x503dac: 0x2484c480  addiu       $a0, $a0, -0x3B80
    ctx->pc = 0x503dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952064));
    // 0x503db0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x503db0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x503db4: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x503db4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x503db8: 0x2609c400  addiu       $t1, $s0, -0x3C00
    ctx->pc = 0x503db8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 4294951936));
    // 0x503dbc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x503dbcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x503dc0: 0xc044c2c  jal         func_1130B0
    ctx->pc = 0x503DC0u;
    SET_GPR_U32(ctx, 31, 0x503DC8u);
    ctx->pc = 0x503DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x503DC0u;
    // 0x503dc4: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1130B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1130B0u, 0x503DC0u, 0x503DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x503DC8u;
label_503dc8:
    // 0x503dc8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x503DC8u;
    {
        const bool branch_taken_0x503dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x503DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x503DC8u;
        // 0x503dcc: 0x8e02c400  lw          $v0, -0x3C00($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294951936)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x503dc8) {
            ctx->pc = 0x503E04u;
            goto label_503e04;
        }
    }
    ctx->pc = 0x503DD0u;
label_503dd0:
    // 0x503dd0: 0x3c10008f  lui         $s0, 0x8F
    ctx->pc = 0x503dd0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)143 << 16));
    // 0x503dd4: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x503dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x503dd8: 0x2602c400  addiu       $v0, $s0, -0x3C00
    ctx->pc = 0x503dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294951936));
    // 0x503ddc: 0x2484c480  addiu       $a0, $a0, -0x3B80
    ctx->pc = 0x503ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952064));
    // 0x503de0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x503de0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x503de4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x503de4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8EC400u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EC400u, _value); } while (0);
    // 0x503de8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x503de8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x503dec: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x503decu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x503df0: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x503df0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x503df4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x503df4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x503df8: 0xc044c2c  jal         func_1130B0
    ctx->pc = 0x503DF8u;
    SET_GPR_U32(ctx, 31, 0x503E00u);
    ctx->pc = 0x503DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x503DF8u;
    // 0x503dfc: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1130B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1130B0u, 0x503DF8u, 0x503E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x503E00u;
label_503e00:
    // 0x503e00: 0x8e02c400  lw          $v0, -0x3C00($s0)
    ctx->pc = 0x503e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294951936)));
label_503e04:
    // 0x503e04: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x503e04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x503e08: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x503e08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x503e0c: 0x3e00008  jr          $ra
    ctx->pc = 0x503E0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x503E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x503E0Cu;
        // 0x503e10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x503E0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x503E14u;
    // 0x503e14: 0x0  nop
    ctx->pc = 0x503e14u;
    // NOP
    ctx->pc = 0x503e18u;
}
