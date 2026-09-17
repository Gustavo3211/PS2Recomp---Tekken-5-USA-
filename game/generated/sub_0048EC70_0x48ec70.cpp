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

// Function: sub_0048EC70
// Address: 0x48ec70 - 0x48ed20
void sub_0048EC70_0x48ec70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048EC70_0x48ec70");
#endif

    ctx->pc = 0x48ec70u;

    // 0x48ec70: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x48ec70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x48ec74: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x48ec74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x48ec78: 0x8443d716  lh          $v1, -0x28EA($v0)
    ctx->pc = 0x48ec78u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x72D716u));
    // 0x48ec7c: 0x10640006  beq         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x48EC7Cu;
    {
        const bool branch_taken_0x48ec7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x48EC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EC7Cu;
        // 0x48ec80: 0x3c02007e  lui         $v0, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ec7c) {
            ctx->pc = 0x48EC98u;
            goto label_48ec98;
        }
    }
    ctx->pc = 0x48EC84u;
    // 0x48ec84: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x48ec84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x48ec88: 0x2442f650  addiu       $v0, $v0, -0x9B0
    ctx->pc = 0x48ec88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964816));
    // 0x48ec8c: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x48ec8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x48ec90: 0xa443021e  sh          $v1, 0x21E($v0)
    ctx->pc = 0x48ec90u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 542), (uint16_t)GPR_U32(ctx, 3));
    // 0x48ec94: 0xa444021c  sh          $a0, 0x21C($v0)
    ctx->pc = 0x48ec94u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 540), (uint16_t)GPR_U32(ctx, 4));
label_48ec98:
    // 0x48ec98: 0x3e00008  jr          $ra
    ctx->pc = 0x48EC98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48EC98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48ECA0u;
    // 0x48eca0: 0x3c02007e  lui         $v0, 0x7E
    ctx->pc = 0x48eca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)126 << 16));
    // 0x48eca4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x48eca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x48eca8: 0x2442f650  addiu       $v0, $v0, -0x9B0
    ctx->pc = 0x48eca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964816));
    // 0x48ecac: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x48ecacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x48ecb0: 0xa443021e  sh          $v1, 0x21E($v0)
    ctx->pc = 0x48ecb0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7DF86Eu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x7DF86Eu, _value); } while (0);
    // 0x48ecb4: 0x3e00008  jr          $ra
    ctx->pc = 0x48ECB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48ECB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48ECB4u;
        // 0x48ecb8: 0xa444021c  sh          $a0, 0x21C($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 540), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48ECB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48ECBCu;
    // 0x48ecbc: 0x0  nop
    ctx->pc = 0x48ecbcu;
    // NOP
    // 0x48ecc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x48ecc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x48ecc4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x48ecc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x48ecc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48ecc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48eccc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x48ecccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x48ecd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48ecd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48ecd4: 0x8123bd2  j           func_48EF48
    ctx->pc = 0x48ECD4u;
    ctx->pc = 0x48ECD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48ECD4u;
    // 0x48ecd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48EF48u;
    sub_0048EF48_0x48ef48(rdram, ctx, runtime); return;
    ctx->pc = 0x48ECDCu;
    // 0x48ecdc: 0x0  nop
    ctx->pc = 0x48ecdcu;
    // NOP
    // 0x48ece0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x48ece0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x48ece4: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x48ece4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x48ece8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48ece8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48ecec: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x48ececu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x48ecf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48ecf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48ecf4: 0x8123bd2  j           func_48EF48
    ctx->pc = 0x48ECF4u;
    ctx->pc = 0x48ECF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48ECF4u;
    // 0x48ecf8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48EF48u;
    sub_0048EF48_0x48ef48(rdram, ctx, runtime); return;
    ctx->pc = 0x48ECFCu;
    // 0x48ecfc: 0x0  nop
    ctx->pc = 0x48ecfcu;
    // NOP
    // 0x48ed00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x48ed00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x48ed04: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x48ed04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48ed08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48ed08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48ed0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x48ed0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48ed10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48ed10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48ed14: 0x8123bdc  j           func_48EF70
    ctx->pc = 0x48ED14u;
    ctx->pc = 0x48ED18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48ED14u;
    // 0x48ed18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48EF70u;
    sub_0048EF70_0x48ef70(rdram, ctx, runtime); return;
    ctx->pc = 0x48ED1Cu;
    // 0x48ed1c: 0x0  nop
    ctx->pc = 0x48ed1cu;
    // NOP
    ctx->pc = 0x48ed20u;
}
