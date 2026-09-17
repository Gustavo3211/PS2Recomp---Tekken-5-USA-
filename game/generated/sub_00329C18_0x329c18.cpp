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

// Function: sub_00329C18
// Address: 0x329c18 - 0x329d38
void sub_00329C18_0x329c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00329C18_0x329c18");
#endif

    switch (ctx->pc) {
        case 0x329c18u: goto label_329c18;
        case 0x329c1cu: goto label_329c1c;
        case 0x329c20u: goto label_329c20;
        case 0x329c24u: goto label_329c24;
        case 0x329c28u: goto label_329c28;
        case 0x329c2cu: goto label_329c2c;
        case 0x329c30u: goto label_329c30;
        case 0x329c34u: goto label_329c34;
        case 0x329c38u: goto label_329c38;
        case 0x329c3cu: goto label_329c3c;
        case 0x329c40u: goto label_329c40;
        case 0x329c44u: goto label_329c44;
        case 0x329c48u: goto label_329c48;
        case 0x329c4cu: goto label_329c4c;
        case 0x329c50u: goto label_329c50;
        case 0x329c54u: goto label_329c54;
        case 0x329c58u: goto label_329c58;
        case 0x329c5cu: goto label_329c5c;
        case 0x329c60u: goto label_329c60;
        case 0x329c64u: goto label_329c64;
        case 0x329c68u: goto label_329c68;
        case 0x329c6cu: goto label_329c6c;
        case 0x329c70u: goto label_329c70;
        case 0x329c74u: goto label_329c74;
        case 0x329c78u: goto label_329c78;
        case 0x329c7cu: goto label_329c7c;
        case 0x329c80u: goto label_329c80;
        case 0x329c84u: goto label_329c84;
        case 0x329c88u: goto label_329c88;
        case 0x329c8cu: goto label_329c8c;
        case 0x329c90u: goto label_329c90;
        case 0x329c94u: goto label_329c94;
        case 0x329c98u: goto label_329c98;
        case 0x329c9cu: goto label_329c9c;
        case 0x329ca0u: goto label_329ca0;
        case 0x329ca4u: goto label_329ca4;
        case 0x329ca8u: goto label_329ca8;
        case 0x329cacu: goto label_329cac;
        case 0x329cb0u: goto label_329cb0;
        case 0x329cb4u: goto label_329cb4;
        case 0x329cb8u: goto label_329cb8;
        case 0x329cbcu: goto label_329cbc;
        case 0x329cc0u: goto label_329cc0;
        case 0x329cc4u: goto label_329cc4;
        case 0x329cc8u: goto label_329cc8;
        case 0x329cccu: goto label_329ccc;
        case 0x329cd0u: goto label_329cd0;
        case 0x329cd4u: goto label_329cd4;
        case 0x329cd8u: goto label_329cd8;
        case 0x329cdcu: goto label_329cdc;
        case 0x329ce0u: goto label_329ce0;
        case 0x329ce4u: goto label_329ce4;
        case 0x329ce8u: goto label_329ce8;
        case 0x329cecu: goto label_329cec;
        case 0x329cf0u: goto label_329cf0;
        case 0x329cf4u: goto label_329cf4;
        case 0x329cf8u: goto label_329cf8;
        case 0x329cfcu: goto label_329cfc;
        case 0x329d00u: goto label_329d00;
        case 0x329d04u: goto label_329d04;
        case 0x329d08u: goto label_329d08;
        case 0x329d0cu: goto label_329d0c;
        case 0x329d10u: goto label_329d10;
        case 0x329d14u: goto label_329d14;
        case 0x329d18u: goto label_329d18;
        case 0x329d1cu: goto label_329d1c;
        case 0x329d20u: goto label_329d20;
        case 0x329d24u: goto label_329d24;
        case 0x329d28u: goto label_329d28;
        case 0x329d2cu: goto label_329d2c;
        case 0x329d30u: goto label_329d30;
        case 0x329d34u: goto label_329d34;
        default: break;
    }

    ctx->pc = 0x329c18u;

label_329c18:
    // 0x329c18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x329c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_329c1c:
    // 0x329c1c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x329c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_329c20:
    // 0x329c20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x329c20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_329c24:
    // 0x329c24: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x329c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_329c28:
    // 0x329c28: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x329c28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_329c2c:
    // 0x329c2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x329c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_329c30:
    // 0x329c30: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x329c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_329c34:
    // 0x329c34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x329c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_329c38:
    // 0x329c38: 0x8e250020  lw          $a1, 0x20($s1)
    ctx->pc = 0x329c38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_329c3c:
    // 0x329c3c: 0x10a00011  beqz        $a1, . + 4 + (0x11 << 2)
label_329c40:
    if (ctx->pc == 0x329C40u) {
        ctx->pc = 0x329C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329C3Cu;
        // 0x329c40: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329C44u;
        goto label_329c44;
    }
    ctx->pc = 0x329C3Cu;
    {
        const bool branch_taken_0x329c3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x329C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329C3Cu;
        // 0x329c40: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329c3c) {
            ctx->pc = 0x329C84u;
            goto label_329c84;
        }
    }
    ctx->pc = 0x329C44u;
label_329c44:
    // 0x329c44: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x329c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_329c48:
    // 0x329c48: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x329c48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_329c4c:
    // 0x329c4c: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_329c50:
    if (ctx->pc == 0x329C50u) {
        ctx->pc = 0x329C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329C4Cu;
        // 0x329c50: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329C54u;
        goto label_329c54;
    }
    ctx->pc = 0x329C4Cu;
    {
        const bool branch_taken_0x329c4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x329c4c) {
            ctx->pc = 0x329C50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x329C4Cu;
            // 0x329c50: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329C88u;
            goto label_329c88;
        }
    }
    ctx->pc = 0x329C54u;
label_329c54:
    // 0x329c54: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x329c54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_329c58:
    // 0x329c58: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x329c58u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_329c5c:
    // 0x329c5c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x329c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_329c60:
    // 0x329c60: 0x86102b  sltu        $v0, $a0, $a2
    ctx->pc = 0x329c60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_329c64:
    // 0x329c64: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_329c68:
    if (ctx->pc == 0x329C68u) {
        ctx->pc = 0x329C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329C64u;
        // 0x329c68: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329C6Cu;
        goto label_329c6c;
    }
    ctx->pc = 0x329C64u;
    {
        const bool branch_taken_0x329c64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x329C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329C64u;
        // 0x329c68: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329c64) {
            ctx->pc = 0x329C84u;
            goto label_329c84;
        }
    }
    ctx->pc = 0x329C6Cu;
label_329c6c:
    // 0x329c6c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x329c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_329c70:
    // 0x329c70: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x329c70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_329c74:
    // 0x329c74: 0x0  nop
    ctx->pc = 0x329c74u;
    // NOP
label_329c78:
    // 0x329c78: 0x0  nop
    ctx->pc = 0x329c78u;
    // NOP
label_329c7c:
    // 0x329c7c: 0x5040fff8  beql        $v0, $zero, . + 4 + (-0x8 << 2)
label_329c80:
    if (ctx->pc == 0x329C80u) {
        ctx->pc = 0x329C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329C7Cu;
        // 0x329c80: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329C84u;
        goto label_329c84;
    }
    ctx->pc = 0x329C7Cu;
    {
        const bool branch_taken_0x329c7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x329c7c) {
            ctx->pc = 0x329C80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x329C7Cu;
            // 0x329c80: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329C60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_329c60;
        }
    }
    ctx->pc = 0x329C84u;
label_329c84:
    // 0x329c84: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x329c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_329c88:
    // 0x329c88: 0x8e260024  lw          $a2, 0x24($s1)
    ctx->pc = 0x329c88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_329c8c:
    // 0x329c8c: 0xae250020  sw          $a1, 0x20($s1)
    ctx->pc = 0x329c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 5));
label_329c90:
    // 0x329c90: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x329c90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_329c94:
    // 0x329c94: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x329c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_329c98:
    // 0x329c98: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x329c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_329c9c:
    // 0x329c9c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x329c9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_329ca0:
    // 0x329ca0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x329ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_329ca4:
    // 0x329ca4: 0x60f809  jalr        $v1
label_329ca8:
    if (ctx->pc == 0x329CA8u) {
        ctx->pc = 0x329CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329CA4u;
        // 0x329ca8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329CACu;
        goto label_329cac;
    }
    ctx->pc = 0x329CA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x329CACu);
        ctx->pc = 0x329CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329CA4u;
        // 0x329ca8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329CA4u, 0x329CACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x329CACu;
label_329cac:
    // 0x329cac: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x329cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_329cb0:
    // 0x329cb0: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x329cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_329cb4:
    // 0x329cb4: 0x244182b  sltu        $v1, $s2, $a0
    ctx->pc = 0x329cb4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_329cb8:
    // 0x329cb8: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_329cbc:
    if (ctx->pc == 0x329CBCu) {
        ctx->pc = 0x329CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329CB8u;
        // 0x329cbc: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329CC0u;
        goto label_329cc0;
    }
    ctx->pc = 0x329CB8u;
    {
        const bool branch_taken_0x329cb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x329CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329CB8u;
        // 0x329cbc: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329cb8) {
            ctx->pc = 0x329D00u;
            goto label_329d00;
        }
    }
    ctx->pc = 0x329CC0u;
label_329cc0:
    // 0x329cc0: 0x2490ffff  addiu       $s0, $a0, -0x1
    ctx->pc = 0x329cc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_329cc4:
    // 0x329cc4: 0x0  nop
    ctx->pc = 0x329cc4u;
    // NOP
label_329cc8:
    // 0x329cc8: 0x43080  sll         $a2, $a0, 2
    ctx->pc = 0x329cc8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_329ccc:
    // 0x329ccc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x329cccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_329cd0:
    // 0x329cd0: 0x2263021  addu        $a2, $s1, $a2
    ctx->pc = 0x329cd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
label_329cd4:
    // 0x329cd4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x329cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_329cd8:
    // 0x329cd8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x329cd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_329cdc:
    // 0x329cdc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x329cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_329ce0:
    // 0x329ce0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x329ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_329ce4:
    // 0x329ce4: 0xc0ca77a  jal         func_329DE8
label_329ce8:
    if (ctx->pc == 0x329CE8u) {
        ctx->pc = 0x329CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329CE4u;
        // 0x329ce8: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329CECu;
        goto label_329cec;
    }
    ctx->pc = 0x329CE4u;
    SET_GPR_U32(ctx, 31, 0x329CECu);
    ctx->pc = 0x329CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329CE4u;
    // 0x329ce8: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329DE8u, 0x329CE4u, 0x329CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329CECu;
label_329cec:
    // 0x329cec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x329cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_329cf0:
    // 0x329cf0: 0x244102b  sltu        $v0, $s2, $a0
    ctx->pc = 0x329cf0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_329cf4:
    // 0x329cf4: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_329cf8:
    if (ctx->pc == 0x329CF8u) {
        ctx->pc = 0x329CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329CF4u;
        // 0x329cf8: 0x2490ffff  addiu       $s0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329CFCu;
        goto label_329cfc;
    }
    ctx->pc = 0x329CF4u;
    {
        const bool branch_taken_0x329cf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x329CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329CF4u;
        // 0x329cf8: 0x2490ffff  addiu       $s0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329cf4) {
            ctx->pc = 0x329CC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_329cc8;
        }
    }
    ctx->pc = 0x329CFCu;
label_329cfc:
    // 0x329cfc: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x329cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_329d00:
    // 0x329d00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x329d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_329d04:
    // 0x329d04: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x329d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_329d08:
    // 0x329d08: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x329d08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_329d0c:
    // 0x329d0c: 0xc0ca77a  jal         func_329DE8
label_329d10:
    if (ctx->pc == 0x329D10u) {
        ctx->pc = 0x329D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329D0Cu;
        // 0x329d10: 0xac530000  sw          $s3, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329D14u;
        goto label_329d14;
    }
    ctx->pc = 0x329D0Cu;
    SET_GPR_U32(ctx, 31, 0x329D14u);
    ctx->pc = 0x329D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329D0Cu;
    // 0x329d10: 0xac530000  sw          $s3, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329DE8u, 0x329D0Cu, 0x329D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329D14u;
label_329d14:
    // 0x329d14: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x329d14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_329d18:
    // 0x329d18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x329d18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_329d1c:
    // 0x329d1c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x329d1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_329d20:
    // 0x329d20: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x329d20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_329d24:
    // 0x329d24: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x329d24u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_329d28:
    // 0x329d28: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x329d28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_329d2c:
    // 0x329d2c: 0x3e00008  jr          $ra
label_329d30:
    if (ctx->pc == 0x329D30u) {
        ctx->pc = 0x329D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329D2Cu;
        // 0x329d30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329D34u;
        goto label_329d34;
    }
    ctx->pc = 0x329D2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x329D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329D2Cu;
        // 0x329d30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329D2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x329D34u;
label_329d34:
    // 0x329d34: 0x0  nop
    ctx->pc = 0x329d34u;
    // NOP
    ctx->pc = 0x329d38u;
}
