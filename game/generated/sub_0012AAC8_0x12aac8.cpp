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

// Function: sub_0012AAC8
// Address: 0x12aac8 - 0x12ab40
void sub_0012AAC8_0x12aac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012AAC8_0x12aac8");
#endif

    switch (ctx->pc) {
        case 0x12ab14u: goto label_12ab14;
        default: break;
    }

    ctx->pc = 0x12aac8u;

    // 0x12aac8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12aac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12aacc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12aaccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12aad0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12aad0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12aad4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12aad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12aad8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x12aad8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12aadc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12aadcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12aae0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x12aae0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12aae4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x12aae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x12aae8: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x12aae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x12aaec: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12AAECu;
    {
        const bool branch_taken_0x12aaec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12AAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AAECu;
        // 0x12aaf0: 0x3c020013  lui         $v0, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12aaec) {
            ctx->pc = 0x12AB00u;
            goto label_12ab00;
        }
    }
    ctx->pc = 0x12AAF4u;
    // 0x12aaf4: 0x8c424728  lw          $v0, 0x4728($v0)
    ctx->pc = 0x12aaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18216)));
    // 0x12aaf8: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x12aaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x12aafc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12aafcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12ab00:
    // 0x12ab00: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x12ab00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x12ab04: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12AB04u;
    {
        const bool branch_taken_0x12ab04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12AB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AB04u;
        // 0x12ab08: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ab04) {
            ctx->pc = 0x12AB1Cu;
            goto label_12ab1c;
        }
    }
    ctx->pc = 0x12AB0Cu;
    // 0x12ab0c: 0xc04b774  jal         func_12DDD0
    ctx->pc = 0x12AB0Cu;
    SET_GPR_U32(ctx, 31, 0x12AB14u);
    ctx->pc = 0x12DDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DDD0u, 0x12AB0Cu, 0x12AB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AB14u;
label_12ab14:
    // 0x12ab14: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x12ab14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x12ab18: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12ab18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12ab1c:
    // 0x12ab1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12ab1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12ab20: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x12ab20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ab24: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12ab24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12ab28: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x12ab28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ab2c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12ab2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12ab30: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x12ab30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12ab34: 0x804aad0  j           func_12AB40
    ctx->pc = 0x12AB34u;
    ctx->pc = 0x12AB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AB34u;
    // 0x12ab38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12AB40u;
    sub_0012AB40_0x12ab40(rdram, ctx, runtime); return;
    ctx->pc = 0x12AB3Cu;
    // 0x12ab3c: 0x0  nop
    ctx->pc = 0x12ab3cu;
    // NOP
    ctx->pc = 0x12ab40u;
}
