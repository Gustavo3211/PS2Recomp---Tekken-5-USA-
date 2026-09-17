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

// Function: sub_0048EB20
// Address: 0x48eb20 - 0x48ebc8
void sub_0048EB20_0x48eb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048EB20_0x48eb20");
#endif

    switch (ctx->pc) {
        case 0x48eb54u: goto label_48eb54;
        case 0x48eb8cu: goto label_48eb8c;
        case 0x48eb94u: goto label_48eb94;
        case 0x48eb9cu: goto label_48eb9c;
        case 0x48eba4u: goto label_48eba4;
        case 0x48ebacu: goto label_48ebac;
        default: break;
    }

    ctx->pc = 0x48eb20u;

    // 0x48eb20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x48eb20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x48eb24: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x48eb24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x48eb28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x48eb28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x48eb2c: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x48eb2cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
    // 0x48eb30: 0x2610d680  addiu       $s0, $s0, -0x2980
    ctx->pc = 0x48eb30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956672));
    // 0x48eb34: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x48eb34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x48eb38: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x48eb38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48eb3c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x48eb3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x48eb40: 0xa6110008  sh          $s1, 0x8($s0)
    ctx->pc = 0x48eb40u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x72D688u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72D688u, _value); } while (0);
    // 0x48eb44: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x48eb44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x48eb48: 0xa602000a  sh          $v0, 0xA($s0)
    ctx->pc = 0x48eb48u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x72D68Au, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72D68Au, _value); } while (0);
    // 0x48eb4c: 0xc124910  jal         func_492440
    ctx->pc = 0x48EB4Cu;
    SET_GPR_U32(ctx, 31, 0x48EB54u);
    ctx->pc = 0x48EB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48EB4Cu;
    // 0x48eb50: 0xa6000000  sh          $zero, 0x0($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x492440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x492440u, 0x48EB4Cu, 0x48EB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48EB54u;
label_48eb54:
    // 0x48eb54: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x48eb54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x48eb58: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x48eb58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x48eb5c: 0x24426e10  addiu       $v0, $v0, 0x6E10
    ctx->pc = 0x48eb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28176));
    // 0x48eb60: 0x2463deb8  addiu       $v1, $v1, -0x2148
    ctx->pc = 0x48eb60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958776));
    // 0x48eb64: 0x22402  srl         $a0, $v0, 16
    ctx->pc = 0x48eb64u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x48eb68: 0x32c02  srl         $a1, $v1, 16
    ctx->pc = 0x48eb68u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x48eb6c: 0xa6020010  sh          $v0, 0x10($s0)
    ctx->pc = 0x48eb6cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x48eb70: 0xa6050012  sh          $a1, 0x12($s0)
    ctx->pc = 0x48eb70u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 5));
    // 0x48eb74: 0xa6030014  sh          $v1, 0x14($s0)
    ctx->pc = 0x48eb74u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x48eb78: 0xa604000e  sh          $a0, 0xE($s0)
    ctx->pc = 0x48eb78u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 4));
    // 0x48eb7c: 0xa611001a  sh          $s1, 0x1A($s0)
    ctx->pc = 0x48eb7cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 26), (uint16_t)GPR_U32(ctx, 17));
    // 0x48eb80: 0xa6000016  sh          $zero, 0x16($s0)
    ctx->pc = 0x48eb80u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 0));
    // 0x48eb84: 0xc12376c  jal         func_48DDB0
    ctx->pc = 0x48EB84u;
    SET_GPR_U32(ctx, 31, 0x48EB8Cu);
    ctx->pc = 0x48EB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48EB84u;
    // 0x48eb88: 0xa60022c4  sh          $zero, 0x22C4($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 8900), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48DDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48DDB0u, 0x48EB84u, 0x48EB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48EB8Cu;
label_48eb8c:
    // 0x48eb8c: 0xc123c54  jal         func_48F150
    ctx->pc = 0x48EB8Cu;
    SET_GPR_U32(ctx, 31, 0x48EB94u);
    ctx->pc = 0x48EB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48EB8Cu;
    // 0x48eb90: 0xa60022d4  sh          $zero, 0x22D4($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 8916), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48F150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48F150u, 0x48EB8Cu, 0x48EB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48EB94u;
label_48eb94:
    // 0x48eb94: 0xc123228  jal         func_48C8A0
    ctx->pc = 0x48EB94u;
    SET_GPR_U32(ctx, 31, 0x48EB9Cu);
    ctx->pc = 0x48C8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48C8A0u, 0x48EB94u, 0x48EB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48EB9Cu;
label_48eb9c:
    // 0x48eb9c: 0xc124c72  jal         func_4931C8
    ctx->pc = 0x48EB9Cu;
    SET_GPR_U32(ctx, 31, 0x48EBA4u);
    ctx->pc = 0x4931C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4931C8u, 0x48EB9Cu, 0x48EBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48EBA4u;
label_48eba4:
    // 0x48eba4: 0xc12413e  jal         func_4904F8
    ctx->pc = 0x48EBA4u;
    SET_GPR_U32(ctx, 31, 0x48EBACu);
    ctx->pc = 0x48EBA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48EBA4u;
    // 0x48eba8: 0x24040021  addiu       $a0, $zero, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4904F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4904F8u, 0x48EBA4u, 0x48EBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48EBACu;
label_48ebac:
    // 0x48ebac: 0x24040027  addiu       $a0, $zero, 0x27
    ctx->pc = 0x48ebacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x48ebb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x48ebb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48ebb4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x48ebb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x48ebb8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x48ebb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48ebbc: 0x812413e  j           func_4904F8
    ctx->pc = 0x48EBBCu;
    ctx->pc = 0x48EBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48EBBCu;
    // 0x48ebc0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4904F8u;
    sub_004904F8_0x4904f8(rdram, ctx, runtime); return;
    ctx->pc = 0x48EBC4u;
    // 0x48ebc4: 0x0  nop
    ctx->pc = 0x48ebc4u;
    // NOP
    ctx->pc = 0x48ebc8u;
}
