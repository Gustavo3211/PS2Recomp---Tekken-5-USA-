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

// Function: sub_004A8C70
// Address: 0x4a8c70 - 0x4a8e78
void sub_004A8C70_0x4a8c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A8C70_0x4a8c70");
#endif

    switch (ctx->pc) {
        case 0x4a8c88u: goto label_4a8c88;
        default: break;
    }

    ctx->pc = 0x4a8c70u;

    // 0x4a8c70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4a8c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4a8c74: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4a8c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4a8c78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4a8c78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a8c7c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x4a8c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x4a8c80: 0xc123316  jal         func_48CC58
    ctx->pc = 0x4A8C80u;
    SET_GPR_U32(ctx, 31, 0x4A8C88u);
    ctx->pc = 0x4A8C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A8C80u;
    // 0x4a8c84: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CC58u, 0x4A8C80u, 0x4A8C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A8C88u;
label_4a8c88:
    // 0x4a8c88: 0x240304fe  addiu       $v1, $zero, 0x4FE
    ctx->pc = 0x4a8c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1278));
    // 0x4a8c8c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a8c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a8c90: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4a8c90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4a8c94: 0x3c05ffe8  lui         $a1, 0xFFE8
    ctx->pc = 0x4a8c94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65512 << 16));
    // 0x4a8c98: 0x3c07001e  lui         $a3, 0x1E
    ctx->pc = 0x4a8c98u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)30 << 16));
    // 0x4a8c9c: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x4a8c9cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a8ca0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4a8ca0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4a8ca4: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4a8ca4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4a8ca8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x4a8ca8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a8cac: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a8cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a8cb0: 0x24097fff  addiu       $t1, $zero, 0x7FFF
    ctx->pc = 0x4a8cb0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x4a8cb4: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x4a8cb4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4a8cb8: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x4a8cb8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4a8cbc: 0xa4400008  sh          $zero, 0x8($v0)
    ctx->pc = 0x4a8cbcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x4a8cc0: 0x240c0258  addiu       $t4, $zero, 0x258
    ctx->pc = 0x4a8cc0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x4a8cc4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a8cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a8cc8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x4a8cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x4a8ccc: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4a8cccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4a8cd0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4a8cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x4a8cd4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x4a8cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a8cd8: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x4a8cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x4a8cdc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4a8cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a8ce0: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4a8ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4a8ce4: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4a8ce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4a8ce8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4a8ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4a8cec: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a8cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a8cf0: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x4a8cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x4a8cf4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4a8cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4a8cf8: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4a8cf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4a8cfc: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4a8cfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x4a8d00: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4a8d00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x4a8d04: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x4a8d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a8d08: 0xa488014a  sh          $t0, 0x14A($a0)
    ctx->pc = 0x4a8d08u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 330), (uint16_t)GPR_U32(ctx, 8));
    // 0x4a8d0c: 0x96030010  lhu         $v1, 0x10($s0)
    ctx->pc = 0x4a8d0cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x4a8d10: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x4a8d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a8d14: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x4a8d14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4a8d18: 0xa4830130  sh          $v1, 0x130($a0)
    ctx->pc = 0x4a8d18u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 304), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a8d1c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a8d1cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a8d20: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x4a8d20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4a8d24: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x4a8d24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a8d28: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4a8d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4a8d2c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x4a8d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x4a8d30: 0x24a50124  addiu       $a1, $a1, 0x124
    ctx->pc = 0x4a8d30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 292));
    // 0x4a8d34: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x4a8d34u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4a8d38: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x4a8d38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x4a8d3c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4a8d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a8d40: 0x861024  and         $v0, $a0, $a2
    ctx->pc = 0x4a8d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x4a8d44: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4a8d44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4a8d48: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4a8d48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4a8d4c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a8d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a8d50: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a8d50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a8d54: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4a8d54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4a8d58: 0x86020014  lh          $v0, 0x14($s0)
    ctx->pc = 0x4a8d58u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x4a8d5c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x4a8d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a8d60: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4a8d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4a8d64: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4a8d64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4a8d68: 0x41c00  sll         $v1, $a0, 16
    ctx->pc = 0x4a8d68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4a8d6c: 0xa4a40132  sh          $a0, 0x132($a1)
    ctx->pc = 0x4a8d6cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 306), (uint16_t)GPR_U32(ctx, 4));
    // 0x4a8d70: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4a8d70u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4a8d74: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x4a8d74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4a8d78: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x4a8d78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a8d7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a8d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4a8d80: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x4a8d80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x4a8d84: 0x24a50128  addiu       $a1, $a1, 0x128
    ctx->pc = 0x4a8d84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 296));
    // 0x4a8d88: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x4a8d88u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4a8d8c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4a8d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a8d90: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x4a8d90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x4a8d94: 0x861024  and         $v0, $a0, $a2
    ctx->pc = 0x4a8d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x4a8d98: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4a8d98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4a8d9c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4a8d9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4a8da0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a8da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a8da4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a8da4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a8da8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4a8da8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4a8dac: 0x86020018  lh          $v0, 0x18($s0)
    ctx->pc = 0x4a8dacu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x4a8db0: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x4a8db0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a8db4: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4a8db4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4a8db8: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4a8db8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4a8dbc: 0x41c00  sll         $v1, $a0, 16
    ctx->pc = 0x4a8dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4a8dc0: 0xa4a40134  sh          $a0, 0x134($a1)
    ctx->pc = 0x4a8dc0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 308), (uint16_t)GPR_U32(ctx, 4));
    // 0x4a8dc4: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4a8dc4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4a8dc8: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x4a8dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4a8dcc: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x4a8dccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a8dd0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x4a8dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4a8dd4: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x4a8dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x4a8dd8: 0x24a5012c  addiu       $a1, $a1, 0x12C
    ctx->pc = 0x4a8dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 300));
    // 0x4a8ddc: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x4a8ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4a8de0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4a8de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a8de4: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x4a8de4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x4a8de8: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x4a8de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x4a8dec: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4a8decu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4a8df0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a8df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a8df4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a8df4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a8df8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4a8df8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4a8dfc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a8dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a8e00: 0xa440013c  sh          $zero, 0x13C($v0)
    ctx->pc = 0x4a8e00u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 316), (uint16_t)GPR_U32(ctx, 0));
    // 0x4a8e04: 0x960200ac  lhu         $v0, 0xAC($s0)
    ctx->pc = 0x4a8e04u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x4a8e08: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a8e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a8e0c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x4a8e0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4a8e10: 0xa4620022  sh          $v0, 0x22($v1)
    ctx->pc = 0x4a8e10u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 34), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a8e14: 0x960200ae  lhu         $v0, 0xAE($s0)
    ctx->pc = 0x4a8e14u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 174)));
    // 0x4a8e18: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x4a8e18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a8e1c: 0xa4820024  sh          $v0, 0x24($a0)
    ctx->pc = 0x4a8e1cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 36), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a8e20: 0x960200b0  lhu         $v0, 0xB0($s0)
    ctx->pc = 0x4a8e20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x4a8e24: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a8e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a8e28: 0xa4620026  sh          $v0, 0x26($v1)
    ctx->pc = 0x4a8e28u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 38), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a8e2c: 0x960400b2  lhu         $a0, 0xB2($s0)
    ctx->pc = 0x4a8e2cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 178)));
    // 0x4a8e30: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a8e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a8e34: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4a8e34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a8e38: 0xa4440028  sh          $a0, 0x28($v0)
    ctx->pc = 0x4a8e38u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 40), (uint16_t)GPR_U32(ctx, 4));
    // 0x4a8e3c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a8e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a8e40: 0xa460002a  sh          $zero, 0x2A($v1)
    ctx->pc = 0x4a8e40u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 42), (uint16_t)GPR_U32(ctx, 0));
    // 0x4a8e44: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a8e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a8e48: 0xa449002c  sh          $t1, 0x2C($v0)
    ctx->pc = 0x4a8e48u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 44), (uint16_t)GPR_U32(ctx, 9));
    // 0x4a8e4c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a8e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a8e50: 0xa46a0030  sh          $t2, 0x30($v1)
    ctx->pc = 0x4a8e50u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 48), (uint16_t)GPR_U32(ctx, 10));
    // 0x4a8e54: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a8e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a8e58: 0xa44b002e  sh          $t3, 0x2E($v0)
    ctx->pc = 0x4a8e58u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 46), (uint16_t)GPR_U32(ctx, 11));
    // 0x4a8e5c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a8e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a8e60: 0xa46c015a  sh          $t4, 0x15A($v1)
    ctx->pc = 0x4a8e60u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 346), (uint16_t)GPR_U32(ctx, 12));
    // 0x4a8e64: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a8e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a8e68: 0xa440015c  sh          $zero, 0x15C($v0)
    ctx->pc = 0x4a8e68u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 348), (uint16_t)GPR_U32(ctx, 0));
    // 0x4a8e6c: 0x3e00008  jr          $ra
    ctx->pc = 0x4A8E6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A8E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8E6Cu;
        // 0x4a8e70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A8E6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A8E74u;
    // 0x4a8e74: 0x0  nop
    ctx->pc = 0x4a8e74u;
    // NOP
    ctx->pc = 0x4a8e78u;
}
