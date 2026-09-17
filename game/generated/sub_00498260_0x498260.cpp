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

// Function: sub_00498260
// Address: 0x498260 - 0x4982b0
void sub_00498260_0x498260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00498260_0x498260");
#endif

    switch (ctx->pc) {
        case 0x498284u: goto label_498284;
        case 0x49828cu: goto label_49828c;
        default: break;
    }

    ctx->pc = 0x498260u;

    // 0x498260: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x498260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x498264: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x498264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x498268: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x498268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x49826c: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x49826cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
    // 0x498270: 0x2610d680  addiu       $s0, $s0, -0x2980
    ctx->pc = 0x498270u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956672));
    // 0x498274: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x498274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x498278: 0xa602000a  sh          $v0, 0xA($s0)
    ctx->pc = 0x498278u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x72D68Au, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72D68Au, _value); } while (0);
    // 0x49827c: 0xc124910  jal         func_492440
    ctx->pc = 0x49827Cu;
    SET_GPR_U32(ctx, 31, 0x498284u);
    ctx->pc = 0x498280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49827Cu;
    // 0x498280: 0x3c040032  lui         $a0, 0x32 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x492440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x492440u, 0x49827Cu, 0x498284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x498284u;
label_498284:
    // 0x498284: 0xc12a0e2  jal         func_4A8388
    ctx->pc = 0x498284u;
    SET_GPR_U32(ctx, 31, 0x49828Cu);
    ctx->pc = 0x498288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x498284u;
    // 0x498288: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8388u, 0x498284u, 0x49828Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49828Cu;
label_49828c:
    // 0x49828c: 0xa600220a  sh          $zero, 0x220A($s0)
    ctx->pc = 0x49828cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8714), (uint16_t)GPR_U32(ctx, 0));
    // 0x498290: 0x2402014a  addiu       $v0, $zero, 0x14A
    ctx->pc = 0x498290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 330));
    // 0x498294: 0xa6000010  sh          $zero, 0x10($s0)
    ctx->pc = 0x498294u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x498298: 0xa6020018  sh          $v0, 0x18($s0)
    ctx->pc = 0x498298u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 24), (uint16_t)GPR_U32(ctx, 2));
    // 0x49829c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x49829cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4982a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4982a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4982a4: 0x3e00008  jr          $ra
    ctx->pc = 0x4982A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4982A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4982A4u;
        // 0x4982a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4982A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4982ACu;
    // 0x4982ac: 0x0  nop
    ctx->pc = 0x4982acu;
    // NOP
    ctx->pc = 0x4982b0u;
}
