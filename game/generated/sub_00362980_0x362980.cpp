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

// Function: sub_00362980
// Address: 0x362980 - 0x362a48
void sub_00362980_0x362980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00362980_0x362980");
#endif

    switch (ctx->pc) {
        case 0x362994u: goto label_362994;
        case 0x3629acu: goto label_3629ac;
        case 0x3629d0u: goto label_3629d0;
        case 0x3629d8u: goto label_3629d8;
        case 0x3629e8u: goto label_3629e8;
        case 0x362a18u: goto label_362a18;
        case 0x362a38u: goto label_362a38;
        default: break;
    }

    ctx->pc = 0x362980u;

    // 0x362980: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x362980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x362984: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x362984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x362988: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x362988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x36298c: 0xc0d8ada  jal         func_362B68
    ctx->pc = 0x36298Cu;
    SET_GPR_U32(ctx, 31, 0x362994u);
    ctx->pc = 0x362990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36298Cu;
    // 0x362990: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362B68u, 0x36298Cu, 0x362994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362994u;
label_362994:
    // 0x362994: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x362994u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x362998: 0xaf90c7fc  sw          $s0, -0x3804($gp)
    ctx->pc = 0x362998u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294952956), GPR_U32(ctx, 16));
    // 0x36299c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x36299Cu;
    {
        const bool branch_taken_0x36299c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3629A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36299Cu;
        // 0x3629a0: 0x24847520  addiu       $a0, $a0, 0x7520 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29984));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36299c) {
            ctx->pc = 0x3629C8u;
            goto label_3629c8;
        }
    }
    ctx->pc = 0x3629A4u;
    // 0x3629a4: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x3629A4u;
    SET_GPR_U32(ctx, 31, 0x3629ACu);
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x3629A4u, 0x3629ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3629ACu;
label_3629ac:
    // 0x3629ac: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3629acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3629b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3629b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3629b4: 0x3442002a  ori         $v0, $v0, 0x2A
    ctx->pc = 0x3629b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)42);
    // 0x3629b8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3629b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3629bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3629BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3629C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3629BCu;
        // 0x3629c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3629BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3629C4u;
    // 0x3629c4: 0x0  nop
    ctx->pc = 0x3629c4u;
    // NOP
label_3629c8:
    // 0x3629c8: 0xc0d8b90  jal         func_362E40
    ctx->pc = 0x3629C8u;
    SET_GPR_U32(ctx, 31, 0x3629D0u);
    ctx->pc = 0x362E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362E40u, 0x3629C8u, 0x3629D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3629D0u;
label_3629d0:
    // 0x3629d0: 0xc0d75a8  jal         func_35D6A0
    ctx->pc = 0x3629D0u;
    SET_GPR_U32(ctx, 31, 0x3629D8u);
    ctx->pc = 0x35D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D6A0u, 0x3629D0u, 0x3629D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3629D8u;
label_3629d8:
    // 0x3629d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3629d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3629dc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3629dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3629e0: 0x80d6e3a  j           func_35B8E8
    ctx->pc = 0x3629E0u;
    ctx->pc = 0x3629E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3629E0u;
    // 0x3629e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35B8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B8E8u, 0x3629E0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3629E8u;
label_3629e8:
    // 0x3629e8: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x3629e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x3629ec: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3629ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3629f0: 0x21c03  sra         $v1, $v0, 16
    ctx->pc = 0x3629f0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 16));
    // 0x3629f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3629f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3629f8: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x3629f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3629fc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3629fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362a00: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x362a00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x362a04: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x362A04u;
    {
        const bool branch_taken_0x362a04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x362A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362A04u;
        // 0x362a08: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362a04) {
            ctx->pc = 0x362A28u;
            goto label_362a28;
        }
    }
    ctx->pc = 0x362A0Cu;
    // 0x362a0c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x362a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x362a10: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x362A10u;
    SET_GPR_U32(ctx, 31, 0x362A18u);
    ctx->pc = 0x362A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362A10u;
    // 0x362a14: 0x24847570  addiu       $a0, $a0, 0x7570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x362A10u, 0x362A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362A18u;
label_362a18:
    // 0x362a18: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x362a18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x362a1c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x362A1Cu;
    {
        const bool branch_taken_0x362a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x362A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362A1Cu;
        // 0x362a20: 0x3442002d  ori         $v0, $v0, 0x2D (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45);
        ctx->in_delay_slot = false;
        if (branch_taken_0x362a1c) {
            ctx->pc = 0x362A3Cu;
            goto label_362a3c;
        }
    }
    ctx->pc = 0x362A24u;
    // 0x362a24: 0x0  nop
    ctx->pc = 0x362a24u;
    // NOP
label_362a28:
    // 0x362a28: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x362a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x362a2c: 0xa7a30004  sh          $v1, 0x4($sp)
    ctx->pc = 0x362a2cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x362a30: 0xc0d6dce  jal         func_35B738
    ctx->pc = 0x362A30u;
    SET_GPR_U32(ctx, 31, 0x362A38u);
    ctx->pc = 0x362A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362A30u;
    // 0x362a34: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35B738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B738u, 0x362A30u, 0x362A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362A38u;
label_362a38:
    // 0x362a38: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x362a38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_362a3c:
    // 0x362a3c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x362a3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x362a40: 0x3e00008  jr          $ra
    ctx->pc = 0x362A40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x362A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362A40u;
        // 0x362a44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x362A40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x362A48u;
}
