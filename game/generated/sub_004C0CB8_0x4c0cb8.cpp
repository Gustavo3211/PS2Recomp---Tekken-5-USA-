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

// Function: sub_004C0CB8
// Address: 0x4c0cb8 - 0x4c0ef8
void sub_004C0CB8_0x4c0cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C0CB8_0x4c0cb8");
#endif

    switch (ctx->pc) {
        case 0x4c0cb8u: goto label_4c0cb8;
        case 0x4c0cbcu: goto label_4c0cbc;
        case 0x4c0cc0u: goto label_4c0cc0;
        case 0x4c0cc4u: goto label_4c0cc4;
        case 0x4c0cc8u: goto label_4c0cc8;
        case 0x4c0cccu: goto label_4c0ccc;
        case 0x4c0cd0u: goto label_4c0cd0;
        case 0x4c0cd4u: goto label_4c0cd4;
        case 0x4c0cd8u: goto label_4c0cd8;
        case 0x4c0cdcu: goto label_4c0cdc;
        case 0x4c0ce0u: goto label_4c0ce0;
        case 0x4c0ce4u: goto label_4c0ce4;
        case 0x4c0ce8u: goto label_4c0ce8;
        case 0x4c0cecu: goto label_4c0cec;
        case 0x4c0cf0u: goto label_4c0cf0;
        case 0x4c0cf4u: goto label_4c0cf4;
        case 0x4c0cf8u: goto label_4c0cf8;
        case 0x4c0cfcu: goto label_4c0cfc;
        case 0x4c0d00u: goto label_4c0d00;
        case 0x4c0d04u: goto label_4c0d04;
        case 0x4c0d08u: goto label_4c0d08;
        case 0x4c0d0cu: goto label_4c0d0c;
        case 0x4c0d10u: goto label_4c0d10;
        case 0x4c0d14u: goto label_4c0d14;
        case 0x4c0d18u: goto label_4c0d18;
        case 0x4c0d1cu: goto label_4c0d1c;
        case 0x4c0d20u: goto label_4c0d20;
        case 0x4c0d24u: goto label_4c0d24;
        case 0x4c0d28u: goto label_4c0d28;
        case 0x4c0d2cu: goto label_4c0d2c;
        case 0x4c0d30u: goto label_4c0d30;
        case 0x4c0d34u: goto label_4c0d34;
        case 0x4c0d38u: goto label_4c0d38;
        case 0x4c0d3cu: goto label_4c0d3c;
        case 0x4c0d40u: goto label_4c0d40;
        case 0x4c0d44u: goto label_4c0d44;
        case 0x4c0d48u: goto label_4c0d48;
        case 0x4c0d4cu: goto label_4c0d4c;
        case 0x4c0d50u: goto label_4c0d50;
        case 0x4c0d54u: goto label_4c0d54;
        case 0x4c0d58u: goto label_4c0d58;
        case 0x4c0d5cu: goto label_4c0d5c;
        case 0x4c0d60u: goto label_4c0d60;
        case 0x4c0d64u: goto label_4c0d64;
        case 0x4c0d68u: goto label_4c0d68;
        case 0x4c0d6cu: goto label_4c0d6c;
        case 0x4c0d70u: goto label_4c0d70;
        case 0x4c0d74u: goto label_4c0d74;
        case 0x4c0d78u: goto label_4c0d78;
        case 0x4c0d7cu: goto label_4c0d7c;
        case 0x4c0d80u: goto label_4c0d80;
        case 0x4c0d84u: goto label_4c0d84;
        case 0x4c0d88u: goto label_4c0d88;
        case 0x4c0d8cu: goto label_4c0d8c;
        case 0x4c0d90u: goto label_4c0d90;
        case 0x4c0d94u: goto label_4c0d94;
        case 0x4c0d98u: goto label_4c0d98;
        case 0x4c0d9cu: goto label_4c0d9c;
        case 0x4c0da0u: goto label_4c0da0;
        case 0x4c0da4u: goto label_4c0da4;
        case 0x4c0da8u: goto label_4c0da8;
        case 0x4c0dacu: goto label_4c0dac;
        case 0x4c0db0u: goto label_4c0db0;
        case 0x4c0db4u: goto label_4c0db4;
        case 0x4c0db8u: goto label_4c0db8;
        case 0x4c0dbcu: goto label_4c0dbc;
        case 0x4c0dc0u: goto label_4c0dc0;
        case 0x4c0dc4u: goto label_4c0dc4;
        case 0x4c0dc8u: goto label_4c0dc8;
        case 0x4c0dccu: goto label_4c0dcc;
        case 0x4c0dd0u: goto label_4c0dd0;
        case 0x4c0dd4u: goto label_4c0dd4;
        case 0x4c0dd8u: goto label_4c0dd8;
        case 0x4c0ddcu: goto label_4c0ddc;
        case 0x4c0de0u: goto label_4c0de0;
        case 0x4c0de4u: goto label_4c0de4;
        case 0x4c0de8u: goto label_4c0de8;
        case 0x4c0decu: goto label_4c0dec;
        case 0x4c0df0u: goto label_4c0df0;
        case 0x4c0df4u: goto label_4c0df4;
        case 0x4c0df8u: goto label_4c0df8;
        case 0x4c0dfcu: goto label_4c0dfc;
        case 0x4c0e00u: goto label_4c0e00;
        case 0x4c0e04u: goto label_4c0e04;
        case 0x4c0e08u: goto label_4c0e08;
        case 0x4c0e0cu: goto label_4c0e0c;
        case 0x4c0e10u: goto label_4c0e10;
        case 0x4c0e14u: goto label_4c0e14;
        case 0x4c0e18u: goto label_4c0e18;
        case 0x4c0e1cu: goto label_4c0e1c;
        case 0x4c0e20u: goto label_4c0e20;
        case 0x4c0e24u: goto label_4c0e24;
        case 0x4c0e28u: goto label_4c0e28;
        case 0x4c0e2cu: goto label_4c0e2c;
        case 0x4c0e30u: goto label_4c0e30;
        case 0x4c0e34u: goto label_4c0e34;
        case 0x4c0e38u: goto label_4c0e38;
        case 0x4c0e3cu: goto label_4c0e3c;
        case 0x4c0e40u: goto label_4c0e40;
        case 0x4c0e44u: goto label_4c0e44;
        case 0x4c0e48u: goto label_4c0e48;
        case 0x4c0e4cu: goto label_4c0e4c;
        case 0x4c0e50u: goto label_4c0e50;
        case 0x4c0e54u: goto label_4c0e54;
        case 0x4c0e58u: goto label_4c0e58;
        case 0x4c0e5cu: goto label_4c0e5c;
        case 0x4c0e60u: goto label_4c0e60;
        case 0x4c0e64u: goto label_4c0e64;
        case 0x4c0e68u: goto label_4c0e68;
        case 0x4c0e6cu: goto label_4c0e6c;
        case 0x4c0e70u: goto label_4c0e70;
        case 0x4c0e74u: goto label_4c0e74;
        case 0x4c0e78u: goto label_4c0e78;
        case 0x4c0e7cu: goto label_4c0e7c;
        case 0x4c0e80u: goto label_4c0e80;
        case 0x4c0e84u: goto label_4c0e84;
        case 0x4c0e88u: goto label_4c0e88;
        case 0x4c0e8cu: goto label_4c0e8c;
        case 0x4c0e90u: goto label_4c0e90;
        case 0x4c0e94u: goto label_4c0e94;
        case 0x4c0e98u: goto label_4c0e98;
        case 0x4c0e9cu: goto label_4c0e9c;
        case 0x4c0ea0u: goto label_4c0ea0;
        case 0x4c0ea4u: goto label_4c0ea4;
        case 0x4c0ea8u: goto label_4c0ea8;
        case 0x4c0eacu: goto label_4c0eac;
        case 0x4c0eb0u: goto label_4c0eb0;
        case 0x4c0eb4u: goto label_4c0eb4;
        case 0x4c0eb8u: goto label_4c0eb8;
        case 0x4c0ebcu: goto label_4c0ebc;
        case 0x4c0ec0u: goto label_4c0ec0;
        case 0x4c0ec4u: goto label_4c0ec4;
        case 0x4c0ec8u: goto label_4c0ec8;
        case 0x4c0eccu: goto label_4c0ecc;
        case 0x4c0ed0u: goto label_4c0ed0;
        case 0x4c0ed4u: goto label_4c0ed4;
        case 0x4c0ed8u: goto label_4c0ed8;
        case 0x4c0edcu: goto label_4c0edc;
        case 0x4c0ee0u: goto label_4c0ee0;
        case 0x4c0ee4u: goto label_4c0ee4;
        case 0x4c0ee8u: goto label_4c0ee8;
        case 0x4c0eecu: goto label_4c0eec;
        case 0x4c0ef0u: goto label_4c0ef0;
        case 0x4c0ef4u: goto label_4c0ef4;
        default: break;
    }

    ctx->pc = 0x4c0cb8u;

label_4c0cb8:
    // 0x4c0cb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4c0cb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4c0cbc:
    // 0x4c0cbc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4c0cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4c0cc0:
    // 0x4c0cc0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4c0cc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4c0cc4:
    // 0x4c0cc4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4c0cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_4c0cc8:
    // 0x4c0cc8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4c0cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4c0ccc:
    // 0x4c0ccc: 0xc1232f2  jal         func_48CBC8
label_4c0cd0:
    if (ctx->pc == 0x4C0CD0u) {
        ctx->pc = 0x4C0CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0CCCu;
        // 0x4c0cd0: 0x261101b4  addiu       $s1, $s0, 0x1B4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C0CD4u;
        goto label_4c0cd4;
    }
    ctx->pc = 0x4C0CCCu;
    SET_GPR_U32(ctx, 31, 0x4C0CD4u);
    ctx->pc = 0x4C0CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C0CCCu;
    // 0x4c0cd0: 0x261101b4  addiu       $s1, $s0, 0x1B4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4C0CCCu, 0x4C0CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C0CD4u;
label_4c0cd4:
    // 0x4c0cd4: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4c0cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
label_4c0cd8:
    // 0x4c0cd8: 0xac620eb4  sw          $v0, 0xEB4($v1)
    ctx->pc = 0x4c0cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3764), GPR_U32(ctx, 2));
label_4c0cdc:
    // 0x4c0cdc: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4c0cdcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4c0ce0:
    // 0x4c0ce0: 0x4400054  bltz        $v0, . + 4 + (0x54 << 2)
label_4c0ce4:
    if (ctx->pc == 0x4C0CE4u) {
        ctx->pc = 0x4C0CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0CE0u;
        // 0x4c0ce4: 0x260a015e  addiu       $t2, $s0, 0x15E (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 350));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C0CE8u;
        goto label_4c0ce8;
    }
    ctx->pc = 0x4C0CE0u;
    {
        const bool branch_taken_0x4c0ce0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4C0CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0CE0u;
        // 0x4c0ce4: 0x260a015e  addiu       $t2, $s0, 0x15E (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 350));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c0ce0) {
            ctx->pc = 0x4C0E34u;
            goto label_4c0e34;
        }
    }
    ctx->pc = 0x4C0CE8u;
label_4c0ce8:
    // 0x4c0ce8: 0xc12b642  jal         func_4AD908
label_4c0cec:
    if (ctx->pc == 0x4C0CECu) {
        ctx->pc = 0x4C0CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0CE8u;
        // 0x4c0cec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C0CF0u;
        goto label_4c0cf0;
    }
    ctx->pc = 0x4C0CE8u;
    SET_GPR_U32(ctx, 31, 0x4C0CF0u);
    ctx->pc = 0x4C0CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C0CE8u;
    // 0x4c0cec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4C0CE8u, 0x4C0CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C0CF0u;
label_4c0cf0:
    // 0x4c0cf0: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4c0cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
label_4c0cf4:
    // 0x4c0cf4: 0x24a50e98  addiu       $a1, $a1, 0xE98
    ctx->pc = 0x4c0cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3736));
label_4c0cf8:
    // 0x4c0cf8: 0x260801be  addiu       $t0, $s0, 0x1BE
    ctx->pc = 0x4c0cf8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 446));
label_4c0cfc:
    // 0x4c0cfc: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x4c0cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4c0d00:
    // 0x4c0d00: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4c0d00u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
label_4c0d04:
    // 0x4c0d04: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x4c0d04u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_4c0d08:
    // 0x4c0d08: 0x3c070054  lui         $a3, 0x54
    ctx->pc = 0x4c0d08u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)84 << 16));
label_4c0d0c:
    // 0x4c0d0c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4c0d0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_4c0d10:
    // 0x4c0d10: 0x24e770e0  addiu       $a3, $a3, 0x70E0
    ctx->pc = 0x4c0d10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 28896));
label_4c0d14:
    // 0x4c0d14: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4c0d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_4c0d18:
    // 0x4c0d18: 0x260a015e  addiu       $t2, $s0, 0x15E
    ctx->pc = 0x4c0d18u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 350));
label_4c0d1c:
    // 0x4c0d1c: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4c0d1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_4c0d20:
    // 0x4c0d20: 0x260901b6  addiu       $t1, $s0, 0x1B6
    ctx->pc = 0x4c0d20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 438));
label_4c0d24:
    // 0x4c0d24: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4c0d24u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_4c0d28:
    // 0x4c0d28: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4c0d28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_4c0d2c:
    // 0x4c0d2c: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4c0d2cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_4c0d30:
    // 0x4c0d30: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x4c0d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_4c0d34:
    // 0x4c0d34: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4c0d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_4c0d38:
    // 0x4c0d38: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4c0d38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_4c0d3c:
    // 0x4c0d3c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4c0d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_4c0d40:
    // 0x4c0d40: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4c0d40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_4c0d44:
    // 0x4c0d44: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4c0d44u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_4c0d48:
    // 0x4c0d48: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4c0d48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_4c0d4c:
    // 0x4c0d4c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4c0d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_4c0d50:
    // 0x4c0d50: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4c0d50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_4c0d54:
    // 0x4c0d54: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4c0d54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_4c0d58:
    // 0x4c0d58: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4c0d58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_4c0d5c:
    // 0x4c0d5c: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4c0d5cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_4c0d60:
    // 0x4c0d60: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4c0d60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_4c0d64:
    // 0x4c0d64: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4c0d64u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
label_4c0d68:
    // 0x4c0d68: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4c0d68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_4c0d6c:
    // 0x4c0d6c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x4c0d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_4c0d70:
    // 0x4c0d70: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x4c0d70u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_4c0d74:
    // 0x4c0d74: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4c0d74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_4c0d78:
    // 0x4c0d78: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4c0d78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_4c0d7c:
    // 0x4c0d7c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4c0d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_4c0d80:
    // 0x4c0d80: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4c0d80u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_4c0d84:
    // 0x4c0d84: 0xa602015a  sh          $v0, 0x15A($s0)
    ctx->pc = 0x4c0d84u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 346), (uint16_t)GPR_U32(ctx, 2));
label_4c0d88:
    // 0x4c0d88: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x4c0d88u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_4c0d8c:
    // 0x4c0d8c: 0xa6030158  sh          $v1, 0x158($s0)
    ctx->pc = 0x4c0d8cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 344), (uint16_t)GPR_U32(ctx, 3));
label_4c0d90:
    // 0x4c0d90: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x4c0d90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_4c0d94:
    // 0x4c0d94: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4c0d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4c0d98:
    // 0x4c0d98: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4c0d98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_4c0d9c:
    // 0x4c0d9c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c0d9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4c0da0:
    // 0x4c0da0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c0da0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4c0da4:
    // 0x4c0da4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4c0da4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_4c0da8:
    // 0x4c0da8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c0da8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4c0dac:
    // 0x4c0dac: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4c0dacu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_4c0db0:
    // 0x4c0db0: 0x30420030  andi        $v0, $v0, 0x30
    ctx->pc = 0x4c0db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)48);
label_4c0db4:
    // 0x4c0db4: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4c0db4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_4c0db8:
    // 0x4c0db8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c0db8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4c0dbc:
    // 0x4c0dbc: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4c0dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_4c0dc0:
    // 0x4c0dc0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c0dc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4c0dc4:
    // 0x4c0dc4: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4c0dc4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_4c0dc8:
    // 0x4c0dc8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4c0dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_4c0dcc:
    // 0x4c0dcc: 0x214c3  sra         $v0, $v0, 19
    ctx->pc = 0x4c0dccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 19));
label_4c0dd0:
    // 0x4c0dd0: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4c0dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_4c0dd4:
    // 0x4c0dd4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c0dd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4c0dd8:
    // 0x4c0dd8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4c0dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_4c0ddc:
    // 0x4c0ddc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c0ddcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4c0de0:
    // 0x4c0de0: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4c0de0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_4c0de4:
    // 0x4c0de4: 0x30421fff  andi        $v0, $v0, 0x1FFF
    ctx->pc = 0x4c0de4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8191);
label_4c0de8:
    // 0x4c0de8: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4c0de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_4c0dec:
    // 0x4c0dec: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c0decu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4c0df0:
    // 0x4c0df0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4c0df0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_4c0df4:
    // 0x4c0df4: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4c0df4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_4c0df8:
    // 0x4c0df8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4c0df8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_4c0dfc:
    // 0x4c0dfc: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4c0dfcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
label_4c0e00:
    // 0x4c0e00: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4c0e00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_4c0e04:
    // 0x4c0e04: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x4c0e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_4c0e08:
    // 0x4c0e08: 0x94430010  lhu         $v1, 0x10($v0)
    ctx->pc = 0x4c0e08u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_4c0e0c:
    // 0x4c0e0c: 0xa600015c  sh          $zero, 0x15C($s0)
    ctx->pc = 0x4c0e0cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 348), (uint16_t)GPR_U32(ctx, 0));
label_4c0e10:
    // 0x4c0e10: 0xa6030162  sh          $v1, 0x162($s0)
    ctx->pc = 0x4c0e10u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 354), (uint16_t)GPR_U32(ctx, 3));
label_4c0e14:
    // 0x4c0e14: 0xa5400000  sh          $zero, 0x0($t2)
    ctx->pc = 0x4c0e14u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 0));
label_4c0e18:
    // 0x4c0e18: 0xa6000120  sh          $zero, 0x120($s0)
    ctx->pc = 0x4c0e18u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 288), (uint16_t)GPR_U32(ctx, 0));
label_4c0e1c:
    // 0x4c0e1c: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x4c0e1cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
label_4c0e20:
    // 0x4c0e20: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x4c0e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_4c0e24:
    // 0x4c0e24: 0xa5220000  sh          $v0, 0x0($t1)
    ctx->pc = 0x4c0e24u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 2));
label_4c0e28:
    // 0x4c0e28: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x4c0e28u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4c0e2c:
    // 0x4c0e2c: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x4c0e2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_4c0e30:
    // 0x4c0e30: 0xa6230000  sh          $v1, 0x0($s1)
    ctx->pc = 0x4c0e30u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 3));
label_4c0e34:
    // 0x4c0e34: 0x85420000  lh          $v0, 0x0($t2)
    ctx->pc = 0x4c0e34u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
label_4c0e38:
    // 0x4c0e38: 0x4400011  bltz        $v0, . + 4 + (0x11 << 2)
label_4c0e3c:
    if (ctx->pc == 0x4C0E3Cu) {
        ctx->pc = 0x4C0E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0E38u;
        // 0x4c0e3c: 0x3c0a007f  lui         $t2, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C0E40u;
        goto label_4c0e40;
    }
    ctx->pc = 0x4C0E38u;
    {
        const bool branch_taken_0x4c0e38 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4C0E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0E38u;
        // 0x4c0e3c: 0x3c0a007f  lui         $t2, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c0e38) {
            ctx->pc = 0x4C0E80u;
            goto label_4c0e80;
        }
    }
    ctx->pc = 0x4C0E40u;
label_4c0e40:
    // 0x4c0e40: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x4c0e40u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
label_4c0e44:
    // 0x4c0e44: 0x25470ea4  addiu       $a3, $t2, 0xEA4
    ctx->pc = 0x4c0e44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), 3748));
label_4c0e48:
    // 0x4c0e48: 0x25280ea8  addiu       $t0, $t1, 0xEA8
    ctx->pc = 0x4c0e48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 3752));
label_4c0e4c:
    // 0x4c0e4c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4c0e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_4c0e50:
    // 0x4c0e50: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4c0e50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_4c0e54:
    // 0x4c0e54: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x4c0e54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4c0e58:
    // 0x4c0e58: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4c0e58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
label_4c0e5c:
    // 0x4c0e5c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c0e5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4c0e60:
    // 0x4c0e60: 0x34a5041f  ori         $a1, $a1, 0x41F
    ctx->pc = 0x4c0e60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1055);
label_4c0e64:
    // 0x4c0e64: 0x3062041f  andi        $v0, $v1, 0x41F
    ctx->pc = 0x4c0e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1055);
label_4c0e68:
    // 0x4c0e68: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4c0e68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_4c0e6c:
    // 0x4c0e6c: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x4c0e6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
label_4c0e70:
    // 0x4c0e70: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4c0e70u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_4c0e74:
    // 0x4c0e74: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x4c0e74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_4c0e78:
    // 0x4c0e78: 0x10000010  b           . + 4 + (0x10 << 2)
label_4c0e7c:
    if (ctx->pc == 0x4C0E7Cu) {
        ctx->pc = 0x4C0E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0E78u;
        // 0x4c0e7c: 0xad040000  sw          $a0, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C0E80u;
        goto label_4c0e80;
    }
    ctx->pc = 0x4C0E78u;
    {
        const bool branch_taken_0x4c0e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C0E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0E78u;
        // 0x4c0e7c: 0xad040000  sw          $a0, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c0e78) {
            ctx->pc = 0x4C0EBCu;
            goto label_4c0ebc;
        }
    }
    ctx->pc = 0x4C0E80u;
label_4c0e80:
    // 0x4c0e80: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x4c0e80u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
label_4c0e84:
    // 0x4c0e84: 0x25460ea4  addiu       $a2, $t2, 0xEA4
    ctx->pc = 0x4c0e84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), 3748));
label_4c0e88:
    // 0x4c0e88: 0x25270ea8  addiu       $a3, $t1, 0xEA8
    ctx->pc = 0x4c0e88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 3752));
label_4c0e8c:
    // 0x4c0e8c: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x4c0e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4c0e90:
    // 0x4c0e90: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4c0e90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_4c0e94:
    // 0x4c0e94: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4c0e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_4c0e98:
    // 0x4c0e98: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4c0e98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_4c0e9c:
    // 0x4c0e9c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4c0e9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_4c0ea0:
    // 0x4c0ea0: 0x34a5041e  ori         $a1, $a1, 0x41E
    ctx->pc = 0x4c0ea0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1054);
label_4c0ea4:
    // 0x4c0ea4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4c0ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_4c0ea8:
    // 0x4c0ea8: 0x34630483  ori         $v1, $v1, 0x483
    ctx->pc = 0x4c0ea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1155);
label_4c0eac:
    // 0x4c0eac: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x4c0eacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_4c0eb0:
    // 0x4c0eb0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4c0eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_4c0eb4:
    // 0x4c0eb4: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x4c0eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
label_4c0eb8:
    // 0x4c0eb8: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x4c0eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_4c0ebc:
    // 0x4c0ebc: 0x25450ea4  addiu       $a1, $t2, 0xEA4
    ctx->pc = 0x4c0ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), 3748));
label_4c0ec0:
    // 0x4c0ec0: 0x25260ea8  addiu       $a2, $t1, 0xEA8
    ctx->pc = 0x4c0ec0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 3752));
label_4c0ec4:
    // 0x4c0ec4: 0xc12b698  jal         func_4ADA60
label_4c0ec8:
    if (ctx->pc == 0x4C0EC8u) {
        ctx->pc = 0x4C0EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0EC4u;
        // 0x4c0ec8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C0ECCu;
        goto label_4c0ecc;
    }
    ctx->pc = 0x4C0EC4u;
    SET_GPR_U32(ctx, 31, 0x4C0ECCu);
    ctx->pc = 0x4C0EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C0EC4u;
    // 0x4c0ec8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADA60u, 0x4C0EC4u, 0x4C0ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C0ECCu;
label_4c0ecc:
    // 0x4c0ecc: 0x860301bc  lh          $v1, 0x1BC($s0)
    ctx->pc = 0x4c0eccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
label_4c0ed0:
    // 0x4c0ed0: 0x2c62000d  sltiu       $v0, $v1, 0xD
    ctx->pc = 0x4c0ed0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
label_4c0ed4:
    // 0x4c0ed4: 0x50400033  beql        $v0, $zero, . + 4 + (0x33 << 2)
label_4c0ed8:
    if (ctx->pc == 0x4C0ED8u) {
        ctx->pc = 0x4C0ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0ED4u;
        // 0x4c0ed8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C0EDCu;
        goto label_4c0edc;
    }
    ctx->pc = 0x4C0ED4u;
    {
        const bool branch_taken_0x4c0ed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c0ed4) {
            ctx->pc = 0x4C0ED8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C0ED4u;
            // 0x4c0ed8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C0FA4u;
            return;
        }
    }
    ctx->pc = 0x4C0EDCu;
label_4c0edc:
    // 0x4c0edc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x4c0edcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4c0ee0:
    // 0x4c0ee0: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4c0ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_4c0ee4:
    // 0x4c0ee4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4c0ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4c0ee8:
    // 0x4c0ee8: 0x8c63b440  lw          $v1, -0x4BC0($v1)
    ctx->pc = 0x4c0ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947904)));
label_4c0eec:
    // 0x4c0eec: 0x600008  jr          $v1
label_4c0ef0:
    if (ctx->pc == 0x4C0EF0u) {
        ctx->pc = 0x4C0EF4u;
        goto label_4c0ef4;
    }
    ctx->pc = 0x4C0EECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C0EECu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4C0EF4u;
label_4c0ef4:
    // 0x4c0ef4: 0x0  nop
    ctx->pc = 0x4c0ef4u;
    // NOP
    ctx->pc = 0x4c0ef8u;
}
