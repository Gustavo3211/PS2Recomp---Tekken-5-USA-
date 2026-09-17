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

// Function: sub_004EFEE8
// Address: 0x4efee8 - 0x4eff90
void sub_004EFEE8_0x4efee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EFEE8_0x4efee8");
#endif

    switch (ctx->pc) {
        case 0x4eff38u: goto label_4eff38;
        default: break;
    }

    ctx->pc = 0x4efee8u;

    // 0x4efee8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4efee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4efeec: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4efeecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4efef0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4efef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4efef4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4efef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4efef8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4efef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4efefc: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x4efefcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x4eff00: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4eff00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4eff04: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4eff04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eff08: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x4eff08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x4eff0c: 0x26510014  addiu       $s1, $s2, 0x14
    ctx->pc = 0x4eff0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x4eff10: 0xa462f9ac  sh          $v0, -0x654($v1)
    ctx->pc = 0x4eff10u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x72F9ACu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9ACu, _value); } while (0);
    // 0x4eff14: 0x3c05fec0  lui         $a1, 0xFEC0
    ctx->pc = 0x4eff14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65216 << 16));
    // 0x4eff18: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4eff18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4eff1c: 0x701024  and         $v0, $v1, $s0
    ctx->pc = 0x4eff1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
    // 0x4eff20: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4eff20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4eff24: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4eff24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4eff28: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4eff28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4eff2c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4eff2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4eff30: 0xc13d788  jal         func_4F5E20
    ctx->pc = 0x4EFF30u;
    SET_GPR_U32(ctx, 31, 0x4EFF38u);
    ctx->pc = 0x4EFF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EFF30u;
    // 0x4eff34: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5E20u, 0x4EFF30u, 0x4EFF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EFF38u;
label_4eff38:
    // 0x4eff38: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4eff38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4eff3c: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x4eff3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x4eff40: 0x264501bc  addiu       $a1, $s2, 0x1BC
    ctx->pc = 0x4eff40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 444));
    // 0x4eff44: 0x701024  and         $v0, $v1, $s0
    ctx->pc = 0x4eff44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
    // 0x4eff48: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4eff48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4eff4c: 0x3c010140  lui         $at, 0x140
    ctx->pc = 0x4eff4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)320 << 16));
    // 0x4eff50: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x4eff50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x4eff54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4eff54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eff58: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4eff58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4eff5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4eff5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4eff60: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4eff60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4eff64: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x4eff64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4eff68: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4eff68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4eff6c: 0xa646014a  sh          $a2, 0x14A($s2)
    ctx->pc = 0x4eff6cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 330), (uint16_t)GPR_U32(ctx, 6));
    // 0x4eff70: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4eff70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4eff74: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4eff74u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4eff78: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4eff78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4eff7c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4eff7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4eff80: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x4eff80u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4eff84: 0x813c16c  j           func_4F05B0
    ctx->pc = 0x4EFF84u;
    ctx->pc = 0x4EFF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EFF84u;
    // 0x4eff88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F05B0u;
    sub_004F05B0_0x4f05b0(rdram, ctx, runtime); return;
    ctx->pc = 0x4EFF8Cu;
    // 0x4eff8c: 0x0  nop
    ctx->pc = 0x4eff8cu;
    // NOP
    ctx->pc = 0x4eff90u;
}
