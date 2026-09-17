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

// Function: sub_00513BB8
// Address: 0x513bb8 - 0x513c40
void sub_00513BB8_0x513bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00513BB8_0x513bb8");
#endif

    switch (ctx->pc) {
        case 0x513bdcu: goto label_513bdc;
        case 0x513becu: goto label_513bec;
        case 0x513c28u: goto label_513c28;
        default: break;
    }

    ctx->pc = 0x513bb8u;

    // 0x513bb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x513bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x513bbc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x513bbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x513bc0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x513bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x513bc4: 0x3c100090  lui         $s0, 0x90
    ctx->pc = 0x513bc4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)144 << 16));
    // 0x513bc8: 0x26104100  addiu       $s0, $s0, 0x4100
    ctx->pc = 0x513bc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16640));
    // 0x513bcc: 0x24060140  addiu       $a2, $zero, 0x140
    ctx->pc = 0x513bccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x513bd0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x513bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x513bd4: 0xc04a151  jal         func_128544
    ctx->pc = 0x513BD4u;
    SET_GPR_U32(ctx, 31, 0x513BDCu);
    ctx->pc = 0x513BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x513BD4u;
    // 0x513bd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x513BD4u, 0x513BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x513BDCu;
label_513bdc:
    // 0x513bdc: 0x26040140  addiu       $a0, $s0, 0x140
    ctx->pc = 0x513bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
    // 0x513be0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x513be0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x513be4: 0xc04a151  jal         func_128544
    ctx->pc = 0x513BE4u;
    SET_GPR_U32(ctx, 31, 0x513BECu);
    ctx->pc = 0x513BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x513BE4u;
    // 0x513be8: 0x24060140  addiu       $a2, $zero, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x513BE4u, 0x513BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x513BECu;
label_513bec:
    // 0x513bec: 0x2403ff80  addiu       $v1, $zero, -0x80
    ctx->pc = 0x513becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x513bf0: 0xa203026f  sb          $v1, 0x26F($s0)
    ctx->pc = 0x513bf0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 623), (uint8_t)GPR_U32(ctx, 3));
    // 0x513bf4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x513bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x513bf8: 0xa203012c  sb          $v1, 0x12C($s0)
    ctx->pc = 0x513bf8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 300), (uint8_t)GPR_U32(ctx, 3));
    // 0x513bfc: 0xa203012d  sb          $v1, 0x12D($s0)
    ctx->pc = 0x513bfcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 301), (uint8_t)GPR_U32(ctx, 3));
    // 0x513c00: 0xa203012e  sb          $v1, 0x12E($s0)
    ctx->pc = 0x513c00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 302), (uint8_t)GPR_U32(ctx, 3));
    // 0x513c04: 0xa203012f  sb          $v1, 0x12F($s0)
    ctx->pc = 0x513c04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 303), (uint8_t)GPR_U32(ctx, 3));
    // 0x513c08: 0xa203026c  sb          $v1, 0x26C($s0)
    ctx->pc = 0x513c08u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 620), (uint8_t)GPR_U32(ctx, 3));
    // 0x513c0c: 0xa203026d  sb          $v1, 0x26D($s0)
    ctx->pc = 0x513c0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 621), (uint8_t)GPR_U32(ctx, 3));
    // 0x513c10: 0xa203026e  sb          $v1, 0x26E($s0)
    ctx->pc = 0x513c10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 622), (uint8_t)GPR_U32(ctx, 3));
    // 0x513c14: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x513c14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x513c18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x513c18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x513c1c: 0x8042e40  j           func_10B900
    ctx->pc = 0x513C1Cu;
    ctx->pc = 0x513C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x513C1Cu;
    // 0x513c20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B900u;
    sub_0010B900_0x10b900(rdram, ctx, runtime); return;
    ctx->pc = 0x513C24u;
    // 0x513c24: 0x0  nop
    ctx->pc = 0x513c24u;
    // NOP
label_513c28:
    // 0x513c28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x513c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x513c2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x513c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x513c30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x513c30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x513c34: 0x8042ee4  j           func_10BB90
    ctx->pc = 0x513C34u;
    ctx->pc = 0x513C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x513C34u;
    // 0x513c38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BB90u;
    sub_0010BB90_0x10bb90(rdram, ctx, runtime); return;
    ctx->pc = 0x513C3Cu;
    // 0x513c3c: 0x0  nop
    ctx->pc = 0x513c3cu;
    // NOP
    ctx->pc = 0x513c40u;
}
