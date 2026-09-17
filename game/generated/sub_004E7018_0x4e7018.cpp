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

// Function: sub_004E7018
// Address: 0x4e7018 - 0x4e7070
void sub_004E7018_0x4e7018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E7018_0x4e7018");
#endif

    switch (ctx->pc) {
        case 0x4e704cu: goto label_4e704c;
        case 0x4e7054u: goto label_4e7054;
        case 0x4e705cu: goto label_4e705c;
        default: break;
    }

    ctx->pc = 0x4e7018u;

    // 0x4e7018: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4e7018u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4e701c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4e701cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4e7020: 0x2463d680  addiu       $v1, $v1, -0x2980
    ctx->pc = 0x4e7020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956672));
    // 0x4e7024: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x4e7024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x4e7028: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x4e7028u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x4e702c: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x4e702cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x4e7030: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4e7030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4e7034: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e7034u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e7038: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4e7038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4e703c: 0xa46223c4  sh          $v0, 0x23C4($v1)
    ctx->pc = 0x4e703cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x72FA44u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72FA44u, _value); } while (0);
    // 0x4e7040: 0xa465232e  sh          $a1, 0x232E($v1)
    ctx->pc = 0x4e7040u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x72F9AEu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9AEu, _value); } while (0);
    // 0x4e7044: 0xc13d788  jal         func_4F5E20
    ctx->pc = 0x4E7044u;
    SET_GPR_U32(ctx, 31, 0x4E704Cu);
    ctx->pc = 0x4E7048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E7044u;
    // 0x4e7048: 0xa466232c  sh          $a2, 0x232C($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 9004), (uint16_t)GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5E20u, 0x4E7044u, 0x4E704Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E704Cu;
label_4e704c:
    // 0x4e704c: 0xc122f12  jal         func_48BC48
    ctx->pc = 0x4E704Cu;
    SET_GPR_U32(ctx, 31, 0x4E7054u);
    ctx->pc = 0x4E7050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E704Cu;
    // 0x4e7050: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48BC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48BC48u, 0x4E704Cu, 0x4E7054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E7054u;
label_4e7054:
    // 0x4e7054: 0xc1297fa  jal         func_4A5FE8
    ctx->pc = 0x4E7054u;
    SET_GPR_U32(ctx, 31, 0x4E705Cu);
    ctx->pc = 0x4A5FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5FE8u, 0x4E7054u, 0x4E705Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E705Cu;
label_4e705c:
    // 0x4e705c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4e705cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e7060: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e7060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e7064: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e7064u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e7068: 0x812b62c  j           func_4AD8B0
    ctx->pc = 0x4E7068u;
    ctx->pc = 0x4E706Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E7068u;
    // 0x4e706c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    sub_004AD8B0_0x4ad8b0(rdram, ctx, runtime); return;
    ctx->pc = 0x4E7070u;
}
