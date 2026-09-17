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

// Function: sub_00362AE8
// Address: 0x362ae8 - 0x362b58
void sub_00362AE8_0x362ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00362AE8_0x362ae8");
#endif

    switch (ctx->pc) {
        case 0x362afcu: goto label_362afc;
        case 0x362b10u: goto label_362b10;
        case 0x362b30u: goto label_362b30;
        default: break;
    }

    ctx->pc = 0x362ae8u;

    // 0x362ae8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x362ae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x362aec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x362aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362af0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x362af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x362af4: 0xc0d6062  jal         func_358188
    ctx->pc = 0x362AF4u;
    SET_GPR_U32(ctx, 31, 0x362AFCu);
    ctx->pc = 0x362AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362AF4u;
    // 0x362af8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x358188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358188u, 0x362AF4u, 0x362AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362AFCu;
label_362afc:
    // 0x362afc: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x362afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x362b00: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x362b00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x362b04: 0x3e00008  jr          $ra
    ctx->pc = 0x362B04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x362B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362B04u;
        // 0x362b08: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x362B04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x362B0Cu;
    // 0x362b0c: 0x0  nop
    ctx->pc = 0x362b0cu;
    // NOP
label_362b10:
    // 0x362b10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x362b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x362b14: 0x2c820002  sltiu       $v0, $a0, 0x2
    ctx->pc = 0x362b14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x362b18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x362b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x362b1c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x362B1Cu;
    {
        const bool branch_taken_0x362b1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x362B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362B1Cu;
        // 0x362b20: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362b1c) {
            ctx->pc = 0x362B40u;
            goto label_362b40;
        }
    }
    ctx->pc = 0x362B24u;
    // 0x362b24: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x362b24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x362b28: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x362B28u;
    SET_GPR_U32(ctx, 31, 0x362B30u);
    ctx->pc = 0x362B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362B28u;
    // 0x362b2c: 0x248475e0  addiu       $a0, $a0, 0x75E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x362B28u, 0x362B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362B30u;
label_362b30:
    // 0x362b30: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x362b30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x362b34: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x362B34u;
    {
        const bool branch_taken_0x362b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x362B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362B34u;
        // 0x362b38: 0x3442002c  ori         $v0, $v0, 0x2C (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44);
        ctx->in_delay_slot = false;
        if (branch_taken_0x362b34) {
            ctx->pc = 0x362B4Cu;
            goto label_362b4c;
        }
    }
    ctx->pc = 0x362B3Cu;
    // 0x362b3c: 0x0  nop
    ctx->pc = 0x362b3cu;
    // NOP
label_362b40:
    // 0x362b40: 0x3c03001d  lui         $v1, 0x1D
    ctx->pc = 0x362b40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29 << 16));
    // 0x362b44: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x362b44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362b48: 0xac645cf4  sw          $a0, 0x5CF4($v1)
    ctx->pc = 0x362b48u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1D5CF4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1D5CF4u, _value); } while (0);
label_362b4c:
    // 0x362b4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x362b4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x362b50: 0x3e00008  jr          $ra
    ctx->pc = 0x362B50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x362B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362B50u;
        // 0x362b54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x362B50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x362B58u;
}
