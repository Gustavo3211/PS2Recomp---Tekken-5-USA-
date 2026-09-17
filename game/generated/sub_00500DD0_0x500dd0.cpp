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

// Function: sub_00500DD0
// Address: 0x500dd0 - 0x500eb0
void sub_00500DD0_0x500dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00500DD0_0x500dd0");
#endif

    switch (ctx->pc) {
        case 0x500dfcu: goto label_500dfc;
        case 0x500e68u: goto label_500e68;
        case 0x500e7cu: goto label_500e7c;
        default: break;
    }

    ctx->pc = 0x500dd0u;

label_500dd0:
    // 0x500dd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x500dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x500dd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x500dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x500dd8: 0x3c10008f  lui         $s0, 0x8F
    ctx->pc = 0x500dd8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)143 << 16));
    // 0x500ddc: 0x2610a6a0  addiu       $s0, $s0, -0x5960
    ctx->pc = 0x500ddcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294944416));
    // 0x500de0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x500de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x500de4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x500de4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500de8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x500de8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500dec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x500decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x500df0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x500df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x500df4: 0xc1403ac  jal         func_500EB0
    ctx->pc = 0x500DF4u;
    SET_GPR_U32(ctx, 31, 0x500DFCu);
    ctx->pc = 0x500DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x500DF4u;
    // 0x500df8: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x500EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x500EB0u, 0x500DF4u, 0x500DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x500DFCu;
label_500dfc:
    // 0x500dfc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x500dfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x500e00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x500e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500e04: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x500e04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500e08: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x500e08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x500e0c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x500e0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500e10: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x500e10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x500e14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x500e14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x500e18: 0x814024c  j           func_500930
    ctx->pc = 0x500E18u;
    ctx->pc = 0x500E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x500E18u;
    // 0x500e1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x500930u;
    sub_00500930_0x500930(rdram, ctx, runtime); return;
    ctx->pc = 0x500E20u;
    // 0x500e20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x500e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x500e24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x500e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x500e28: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x500e28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500e2c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x500e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x500e30: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x500e30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500e34: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x500e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x500e38: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x500e38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500e3c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x500e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x500e40: 0x140982d  daddu       $s3, $t2, $zero
    ctx->pc = 0x500e40u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500e44: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x500e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x500e48: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x500e48u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500e4c: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x500e4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500e50: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x500e50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500e54: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x500e54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500e58: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x500e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x500e5c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x500e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x500e60: 0xc140374  jal         func_500DD0
    ctx->pc = 0x500E60u;
    SET_GPR_U32(ctx, 31, 0x500E68u);
    ctx->pc = 0x500E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x500E60u;
    // 0x500e64: 0x160a02d  daddu       $s4, $t3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x500DD0u;
    goto label_500dd0;
    ctx->pc = 0x500E68u;
label_500e68:
    // 0x500e68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x500e68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500e6c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x500e6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500e70: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x500e70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500e74: 0xc140374  jal         func_500DD0
    ctx->pc = 0x500E74u;
    SET_GPR_U32(ctx, 31, 0x500E7Cu);
    ctx->pc = 0x500E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x500E74u;
    // 0x500e78: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x500DD0u;
    goto label_500dd0;
    ctx->pc = 0x500E7Cu;
label_500e7c:
    // 0x500e7c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x500e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500e80: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x500e80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500e84: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x500e84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x500e88: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x500e88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500e8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x500e8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x500e90: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x500e90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500e94: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x500e94u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x500e98: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x500e98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x500e9c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x500e9cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x500ea0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x500ea0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x500ea4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x500ea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x500ea8: 0x8140374  j           func_500DD0
    ctx->pc = 0x500EA8u;
    ctx->pc = 0x500EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x500EA8u;
    // 0x500eac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x500DD0u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_500dd0;
    ctx->pc = 0x500EB0u;
}
