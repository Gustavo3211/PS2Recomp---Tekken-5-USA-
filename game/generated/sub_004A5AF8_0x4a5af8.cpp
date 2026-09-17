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

// Function: sub_004A5AF8
// Address: 0x4a5af8 - 0x4a5b88
void sub_004A5AF8_0x4a5af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A5AF8_0x4a5af8");
#endif

    switch (ctx->pc) {
        case 0x4a5b10u: goto label_4a5b10;
        default: break;
    }

    ctx->pc = 0x4a5af8u;

    // 0x4a5af8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4a5af8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4a5afc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4a5afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4a5b00: 0x48400  sll         $s0, $a0, 16
    ctx->pc = 0x4a5b00u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4a5b04: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x4a5b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x4a5b08: 0xc123332  jal         func_48CCC8
    ctx->pc = 0x4A5B08u;
    SET_GPR_U32(ctx, 31, 0x4A5B10u);
    ctx->pc = 0x4A5B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A5B08u;
    // 0x4a5b0c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CCC8u, 0x4A5B08u, 0x4A5B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A5B10u;
label_4a5b10:
    // 0x4a5b10: 0x240200e5  addiu       $v0, $zero, 0xE5
    ctx->pc = 0x4a5b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 229));
    // 0x4a5b14: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x4a5b14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a5b18: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x4a5b18u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x4a5b1c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x4a5b1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4a5b20: 0xa4820008  sh          $v0, 0x8($a0)
    ctx->pc = 0x4a5b20u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a5b24: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a5b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a5b28: 0xa470014a  sh          $s0, 0x14A($v1)
    ctx->pc = 0x4a5b28u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 330), (uint16_t)GPR_U32(ctx, 16));
    // 0x4a5b2c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4a5b2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a5b30: 0x3e00008  jr          $ra
    ctx->pc = 0x4A5B30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A5B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5B30u;
        // 0x4a5b34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A5B30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A5B38u;
    // 0x4a5b38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4a5b38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4a5b3c: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4a5b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x4a5b40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a5b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a5b44: 0x2445d680  addiu       $a1, $v0, -0x2980
    ctx->pc = 0x4a5b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x4a5b48: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4a5b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4a5b4c: 0xa4a021fc  sh          $zero, 0x21FC($a1)
    ctx->pc = 0x4a5b4cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x72F87Cu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F87Cu, _value); } while (0);
    // 0x4a5b50: 0x84a30008  lh          $v1, 0x8($a1)
    ctx->pc = 0x4a5b50u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x72D688u));
    // 0x4a5b54: 0x10640006  beq         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4A5B54u;
    {
        const bool branch_taken_0x4a5b54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x4A5B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5B54u;
        // 0x4a5b58: 0xa4a02214  sh          $zero, 0x2214($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 8724), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5b54) {
            ctx->pc = 0x4A5B70u;
            goto label_4a5b70;
        }
    }
    ctx->pc = 0x4A5B5Cu;
    // 0x4a5b5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a5b5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a5b60: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4a5b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4a5b64: 0xa4a20016  sh          $v0, 0x16($a1)
    ctx->pc = 0x4a5b64u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 22), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a5b68: 0x3e00008  jr          $ra
    ctx->pc = 0x4A5B68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A5B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5B68u;
        // 0x4a5b6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A5B68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A5B70u;
label_4a5b70:
    // 0x4a5b70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a5b70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a5b74: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4a5b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4a5b78: 0xa4a22268  sh          $v0, 0x2268($a1)
    ctx->pc = 0x4a5b78u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 8808), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a5b7c: 0x8124098  j           func_490260
    ctx->pc = 0x4A5B7Cu;
    ctx->pc = 0x4A5B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A5B7Cu;
    // 0x4a5b80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x490260u;
    sub_00490260_0x490260(rdram, ctx, runtime); return;
    ctx->pc = 0x4A5B84u;
    // 0x4a5b84: 0x0  nop
    ctx->pc = 0x4a5b84u;
    // NOP
    ctx->pc = 0x4a5b88u;
}
