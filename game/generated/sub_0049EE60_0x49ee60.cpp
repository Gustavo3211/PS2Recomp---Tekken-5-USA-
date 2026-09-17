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

// Function: sub_0049EE60
// Address: 0x49ee60 - 0x49efc8
void sub_0049EE60_0x49ee60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049EE60_0x49ee60");
#endif

    switch (ctx->pc) {
        case 0x49ee90u: goto label_49ee90;
        case 0x49ee98u: goto label_49ee98;
        case 0x49ef28u: goto label_49ef28;
        case 0x49ef50u: goto label_49ef50;
        default: break;
    }

    ctx->pc = 0x49ee60u;

    // 0x49ee60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x49ee60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x49ee64: 0x3c020052  lui         $v0, 0x52
    ctx->pc = 0x49ee64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)82 << 16));
    // 0x49ee68: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x49ee68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x49ee6c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x49ee6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x49ee70: 0x24508260  addiu       $s0, $v0, -0x7DA0
    ctx->pc = 0x49ee70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935136));
    // 0x49ee74: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x49ee74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x49ee78: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x49ee78u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x49ee7c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x49ee7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x49ee80: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x49ee80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x49ee84: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x49ee84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x49ee88: 0x3c130003  lui         $s3, 0x3
    ctx->pc = 0x49ee88u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)3 << 16));
    // 0x49ee8c: 0x0  nop
    ctx->pc = 0x49ee8cu;
    // NOP
label_49ee90:
    // 0x49ee90: 0xc123332  jal         func_48CCC8
    ctx->pc = 0x49EE90u;
    SET_GPR_U32(ctx, 31, 0x49EE98u);
    ctx->pc = 0x49EE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49EE90u;
    // 0x49ee94: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CCC8u, 0x49EE90u, 0x49EE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49EE98u;
label_49ee98:
    // 0x49ee98: 0x240300dc  addiu       $v1, $zero, 0xDC
    ctx->pc = 0x49ee98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
    // 0x49ee9c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x49ee9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49eea0: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x49eea0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x49eea4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x49eea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49eea8: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x49eea8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x49eeac: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x49eeacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x49eeb0: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x49eeb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x49eeb4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x49eeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x49eeb8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x49eeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x49eebc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49eebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49eec0: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x49eec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x49eec4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x49eec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x49eec8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x49eec8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x49eecc: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x49eeccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49eed0: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x49eed0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x49eed4: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x49eed4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x49eed8: 0x24a50014  addiu       $a1, $a1, 0x14
    ctx->pc = 0x49eed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    // 0x49eedc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x49eedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49eee0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x49eee0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x49eee4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49eee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49eee8: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x49eee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x49eeec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x49eeecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x49eef0: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x49eef0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x49eef4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x49eef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49eef8: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x49eef8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x49eefc: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x49eefcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x49ef00: 0x24840018  addiu       $a0, $a0, 0x18
    ctx->pc = 0x49ef00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x49ef04: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x49ef04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x49ef08: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x49ef08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x49ef0c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49ef0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49ef10: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x49ef10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x49ef14: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x49ef14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x49ef18: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x49ef18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x49ef1c: 0x86040000  lh          $a0, 0x0($s0)
    ctx->pc = 0x49ef1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x49ef20: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x49EF20u;
    SET_GPR_U32(ctx, 31, 0x49EF28u);
    ctx->pc = 0x49EF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49EF20u;
    // 0x49ef24: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x49EF20u, 0x49EF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49EF28u;
label_49ef28:
    // 0x49ef28: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x49ef28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49ef2c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x49ef2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49ef30: 0xf11024  and         $v0, $a3, $s1
    ctx->pc = 0x49ef30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 17));
    // 0x49ef34: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x49ef34u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x49ef38: 0xa4820022  sh          $v0, 0x22($a0)
    ctx->pc = 0x49ef38u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 34), (uint16_t)GPR_U32(ctx, 2));
    // 0x49ef3c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x49ef3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49ef40: 0xa4670024  sh          $a3, 0x24($v1)
    ctx->pc = 0x49ef40u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 36), (uint16_t)GPR_U32(ctx, 7));
    // 0x49ef44: 0x86040000  lh          $a0, 0x0($s0)
    ctx->pc = 0x49ef44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x49ef48: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x49EF48u;
    SET_GPR_U32(ctx, 31, 0x49EF50u);
    ctx->pc = 0x49EF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49EF48u;
    // 0x49ef4c: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x49EF48u, 0x49EF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49EF50u;
label_49ef50:
    // 0x49ef50: 0x24067fff  addiu       $a2, $zero, 0x7FFF
    ctx->pc = 0x49ef50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x49ef54: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x49ef54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49ef58: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x49ef58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49ef5c: 0xf11024  and         $v0, $a3, $s1
    ctx->pc = 0x49ef5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 17));
    // 0x49ef60: 0x131c03  sra         $v1, $s3, 16
    ctx->pc = 0x49ef60u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 19), 16));
    // 0x49ef64: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x49ef64u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x49ef68: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x49ef68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x49ef6c: 0xa4820026  sh          $v0, 0x26($a0)
    ctx->pc = 0x49ef6cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 38), (uint16_t)GPR_U32(ctx, 2));
    // 0x49ef70: 0x3642ffff  ori         $v0, $s2, 0xFFFF
    ctx->pc = 0x49ef70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x49ef74: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x49ef74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x49ef78: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x49ef78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49ef7c: 0x439024  and         $s2, $v0, $v1
    ctx->pc = 0x49ef7cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x49ef80: 0x122c00  sll         $a1, $s2, 16
    ctx->pc = 0x49ef80u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x49ef84: 0xa4870028  sh          $a3, 0x28($a0)
    ctx->pc = 0x49ef84u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 40), (uint16_t)GPR_U32(ctx, 7));
    // 0x49ef88: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x49ef88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49ef8c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x49ef8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49ef90: 0xa440002a  sh          $zero, 0x2A($v0)
    ctx->pc = 0x49ef90u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 42), (uint16_t)GPR_U32(ctx, 0));
    // 0x49ef94: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x49ef94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49ef98: 0xa466002c  sh          $a2, 0x2C($v1)
    ctx->pc = 0x49ef98u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 44), (uint16_t)GPR_U32(ctx, 6));
    // 0x49ef9c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x49ef9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49efa0: 0x4a1ffbb  bgez        $a1, . + 4 + (-0x45 << 2)
    ctx->pc = 0x49EFA0u;
    {
        const bool branch_taken_0x49efa0 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x49EFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EFA0u;
        // 0x49efa4: 0xa440014a  sh          $zero, 0x14A($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 330), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49efa0) {
            ctx->pc = 0x49EE90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49ee90;
        }
    }
    ctx->pc = 0x49EFA8u;
    // 0x49efa8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x49efa8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49efac: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x49efacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x49efb0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x49efb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49efb4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x49efb4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x49efb8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x49efb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x49efbc: 0x3e00008  jr          $ra
    ctx->pc = 0x49EFBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49EFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EFBCu;
        // 0x49efc0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49EFBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49EFC4u;
    // 0x49efc4: 0x0  nop
    ctx->pc = 0x49efc4u;
    // NOP
    ctx->pc = 0x49efc8u;
}
