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

// Function: sub_004BEE20
// Address: 0x4bee20 - 0x4bf090
void sub_004BEE20_0x4bee20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BEE20_0x4bee20");
#endif

    switch (ctx->pc) {
        case 0x4bee44u: goto label_4bee44;
        case 0x4bee60u: goto label_4bee60;
        case 0x4bef28u: goto label_4bef28;
        case 0x4bf040u: goto label_4bf040;
        case 0x4bf050u: goto label_4bf050;
        case 0x4bf060u: goto label_4bf060;
        case 0x4bf070u: goto label_4bf070;
        default: break;
    }

    ctx->pc = 0x4bee20u;

    // 0x4bee20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4bee20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4bee24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4bee24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4bee28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4bee28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bee2c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4bee2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4bee30: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4bee30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4bee34: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4bee34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4bee38: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4bee38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4bee3c: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4BEE3Cu;
    SET_GPR_U32(ctx, 31, 0x4BEE44u);
    ctx->pc = 0x4BEE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BEE3Cu;
    // 0x4bee40: 0x261101b4  addiu       $s1, $s0, 0x1B4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4BEE3Cu, 0x4BEE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BEE44u;
label_4bee44:
    // 0x4bee44: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4bee44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4bee48: 0xac620e70  sw          $v0, 0xE70($v1)
    ctx->pc = 0x4bee48u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F0E70u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0E70u, _value); } while (0);
    // 0x4bee4c: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4bee4cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4bee50: 0x4420009  bltzl       $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4BEE50u;
    {
        const bool branch_taken_0x4bee50 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4bee50) {
            ctx->pc = 0x4BEE54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4BEE50u;
            // 0x4bee54: 0x8e110140  lw          $s1, 0x140($s0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4BEE78u;
            goto label_4bee78;
        }
    }
    ctx->pc = 0x4BEE58u;
    // 0x4bee58: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4BEE58u;
    SET_GPR_U32(ctx, 31, 0x4BEE60u);
    ctx->pc = 0x4BEE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BEE58u;
    // 0x4bee5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4BEE58u, 0x4BEE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BEE60u;
label_4bee60:
    // 0x4bee60: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4bee60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4bee64: 0xa60301b6  sh          $v1, 0x1B6($s0)
    ctx->pc = 0x4bee64u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 438), (uint16_t)GPR_U32(ctx, 3));
    // 0x4bee68: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4bee68u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4bee6c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4bee6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4bee70: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x4bee70u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4bee74: 0x8e110140  lw          $s1, 0x140($s0)
    ctx->pc = 0x4bee74u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
label_4bee78:
    // 0x4bee78: 0x862201b4  lh          $v0, 0x1B4($s1)
    ctx->pc = 0x4bee78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 436)));
    // 0x4bee7c: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4BEE7Cu;
    {
        const bool branch_taken_0x4bee7c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4BEE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BEE7Cu;
        // 0x4bee80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bee7c) {
            ctx->pc = 0x4BEEA0u;
            goto label_4beea0;
        }
    }
    ctx->pc = 0x4BEE84u;
    // 0x4bee84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4bee84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4bee88: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4bee88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4bee8c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4bee8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4bee90: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4bee90u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4bee94: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4bee94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4bee98: 0x812b62c  j           func_4AD8B0
    ctx->pc = 0x4BEE98u;
    ctx->pc = 0x4BEE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BEE98u;
    // 0x4bee9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    sub_004AD8B0_0x4ad8b0(rdram, ctx, runtime); return;
    ctx->pc = 0x4BEEA0u;
label_4beea0:
    // 0x4beea0: 0x2633015e  addiu       $s3, $s1, 0x15E
    ctx->pc = 0x4beea0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 350));
    // 0x4beea4: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x4beea4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4beea8: 0x4430009  bgezl       $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4BEEA8u;
    {
        const bool branch_taken_0x4beea8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x4beea8) {
            ctx->pc = 0x4BEEACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4BEEA8u;
            // 0x4beeac: 0x962201c2  lhu         $v0, 0x1C2($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 450)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4BEED0u;
            goto label_4beed0;
        }
    }
    ctx->pc = 0x4BEEB0u;
    // 0x4beeb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4beeb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4beeb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4beeb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4beeb8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4beeb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4beebc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4beebcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4beec0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4beec0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4beec4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4beec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4beec8: 0x812b62c  j           func_4AD8B0
    ctx->pc = 0x4BEEC8u;
    ctx->pc = 0x4BEECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BEEC8u;
    // 0x4beecc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    sub_004AD8B0_0x4ad8b0(rdram, ctx, runtime); return;
    ctx->pc = 0x4BEED0u;
label_4beed0:
    // 0x4beed0: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4beed0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4beed4: 0x24840e60  addiu       $a0, $a0, 0xE60
    ctx->pc = 0x4beed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3680));
    // 0x4beed8: 0x8608015e  lh          $t0, 0x15E($s0)
    ctx->pc = 0x4beed8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 350)));
    // 0x4beedc: 0xa60201c2  sh          $v0, 0x1C2($s0)
    ctx->pc = 0x4beedcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 450), (uint16_t)GPR_U32(ctx, 2));
    // 0x4beee0: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x4beee0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x4beee4: 0x1124025  or          $t0, $t0, $s2
    ctx->pc = 0x4beee4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 18));
    // 0x4beee8: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4beee8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4beeec: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4beeecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0E60u));
    // 0x4beef0: 0x24e70e64  addiu       $a3, $a3, 0xE64
    ctx->pc = 0x4beef0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3684));
    // 0x4beef4: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4beef4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0E64u));
    // 0x4beef8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4beef8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4beefc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4beefcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4bef00: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x4bef00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bef04: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x4bef04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x4bef08: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bef08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bef0c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4bef0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4bef10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4bef10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bef14: 0x86020160  lh          $v0, 0x160($s0)
    ctx->pc = 0x4bef14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x4bef18: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4bef18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4bef1c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bef1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bef20: 0xc12b698  jal         func_4ADA60
    ctx->pc = 0x4BEF20u;
    SET_GPR_U32(ctx, 31, 0x4BEF28u);
    ctx->pc = 0x4BEF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BEF20u;
    // 0x4bef24: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADA60u, 0x4BEF20u, 0x4BEF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BEF28u;
label_4bef28:
    // 0x4bef28: 0x8602000c  lh          $v0, 0xC($s0)
    ctx->pc = 0x4bef28u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x4bef2c: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4bef2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4bef30: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4BEF30u;
    {
        const bool branch_taken_0x4bef30 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4BEF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BEF30u;
        // 0x4bef34: 0x24a30e58  addiu       $v1, $a1, 0xE58 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 3672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bef30) {
            ctx->pc = 0x4BEF48u;
            goto label_4bef48;
        }
    }
    ctx->pc = 0x4BEF38u;
    // 0x4bef38: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4bef38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4bef3c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4BEF3Cu;
    {
        const bool branch_taken_0x4bef3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BEF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BEF3Cu;
        // 0x4bef40: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bef3c) {
            ctx->pc = 0x4BEF50u;
            goto label_4bef50;
        }
    }
    ctx->pc = 0x4BEF44u;
    // 0x4bef44: 0x0  nop
    ctx->pc = 0x4bef44u;
    // NOP
label_4bef48:
    // 0x4bef48: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4bef48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4bef4c: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4bef4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
label_4bef50:
    // 0x4bef50: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4bef50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x4bef54: 0x24a50e58  addiu       $a1, $a1, 0xE58
    ctx->pc = 0x4bef54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3672));
    // 0x4bef58: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x4bef58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x4bef5c: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4bef5cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4bef60: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x4bef60u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4bef64: 0x26070014  addiu       $a3, $s0, 0x14
    ctx->pc = 0x4bef64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x4bef68: 0x26080018  addiu       $t0, $s0, 0x18
    ctx->pc = 0x4bef68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x4bef6c: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x4bef6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4bef70: 0xa603000e  sh          $v1, 0xE($s0)
    ctx->pc = 0x4bef70u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x4bef74: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x4bef74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x4bef78: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x4bef78u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4bef7c: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x4bef7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x4bef80: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4bef80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4bef84: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4bef84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4bef88: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x4bef88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x4bef8c: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x4bef8cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4bef90: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x4bef90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x4bef94: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4bef94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4bef98: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4bef98u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4bef9c: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x4bef9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x4befa0: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x4befa0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4befa4: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x4befa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x4befa8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4befa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4befac: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4befacu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x4befb0: 0x96220118  lhu         $v0, 0x118($s1)
    ctx->pc = 0x4befb0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x4befb4: 0xa6020118  sh          $v0, 0x118($s0)
    ctx->pc = 0x4befb4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 280), (uint16_t)GPR_U32(ctx, 2));
    // 0x4befb8: 0x9623011c  lhu         $v1, 0x11C($s1)
    ctx->pc = 0x4befb8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x4befbc: 0xa603011c  sh          $v1, 0x11C($s0)
    ctx->pc = 0x4befbcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 284), (uint16_t)GPR_U32(ctx, 3));
    // 0x4befc0: 0x96220120  lhu         $v0, 0x120($s1)
    ctx->pc = 0x4befc0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x4befc4: 0xa6020120  sh          $v0, 0x120($s0)
    ctx->pc = 0x4befc4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 288), (uint16_t)GPR_U32(ctx, 2));
    // 0x4befc8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4befc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4befcc: 0x86640000  lh          $a0, 0x0($s3)
    ctx->pc = 0x4befccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4befd0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4befd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4befd4: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x4befd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x4befd8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4befd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4befdc: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4befdcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4befe0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4befe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4befe4: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4befe4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4befe8: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x4befe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x4befec: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4befecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4beff0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4beff0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4beff4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4beff4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4beff8: 0x84a50000  lh          $a1, 0x0($a1)
    ctx->pc = 0x4beff8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4beffc: 0x10a90012  beq         $a1, $t1, . + 4 + (0x12 << 2)
    ctx->pc = 0x4BEFFCu;
    {
        const bool branch_taken_0x4beffc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 9));
        ctx->pc = 0x4BF000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BEFFCu;
        // 0x4bf000: 0x28a20005  slti        $v0, $a1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4beffc) {
            ctx->pc = 0x4BF048u;
            goto label_4bf048;
        }
    }
    ctx->pc = 0x4BF004u;
    // 0x4bf004: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4BF004u;
    {
        const bool branch_taken_0x4bf004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bf004) {
            ctx->pc = 0x4BF008u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4BF004u;
            // 0x4bf008: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4BF020u;
            goto label_4bf020;
        }
    }
    ctx->pc = 0x4BF00Cu;
    // 0x4bf00c: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x4BF00Cu;
    {
        const bool branch_taken_0x4bf00c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bf00c) {
            ctx->pc = 0x4BF038u;
            goto label_4bf038;
        }
    }
    ctx->pc = 0x4BF014u;
    // 0x4bf014: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x4BF014u;
    {
        const bool branch_taken_0x4bf014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BF018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF014u;
        // 0x4bf018: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bf014) {
            ctx->pc = 0x4BF074u;
            goto label_4bf074;
        }
    }
    ctx->pc = 0x4BF01Cu;
    // 0x4bf01c: 0x0  nop
    ctx->pc = 0x4bf01cu;
    // NOP
label_4bf020:
    // 0x4bf020: 0x10a2000d  beq         $a1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4BF020u;
    {
        const bool branch_taken_0x4bf020 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x4BF024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF020u;
        // 0x4bf024: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bf020) {
            ctx->pc = 0x4BF058u;
            goto label_4bf058;
        }
    }
    ctx->pc = 0x4BF028u;
    // 0x4bf028: 0x10a2000f  beq         $a1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x4BF028u;
    {
        const bool branch_taken_0x4bf028 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x4bf028) {
            ctx->pc = 0x4BF068u;
            goto label_4bf068;
        }
    }
    ctx->pc = 0x4BF030u;
    // 0x4bf030: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x4BF030u;
    {
        const bool branch_taken_0x4bf030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BF034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF030u;
        // 0x4bf034: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bf030) {
            ctx->pc = 0x4BF074u;
            goto label_4bf074;
        }
    }
    ctx->pc = 0x4BF038u;
label_4bf038:
    // 0x4bf038: 0xc127e84  jal         func_49FA10
    ctx->pc = 0x4BF038u;
    SET_GPR_U32(ctx, 31, 0x4BF040u);
    ctx->pc = 0x4BF03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BF038u;
    // 0x4bf03c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FA10u, 0x4BF038u, 0x4BF040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BF040u;
label_4bf040:
    // 0x4bf040: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4BF040u;
    {
        const bool branch_taken_0x4bf040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BF044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF040u;
        // 0x4bf044: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bf040) {
            ctx->pc = 0x4BF074u;
            goto label_4bf074;
        }
    }
    ctx->pc = 0x4BF048u;
label_4bf048:
    // 0x4bf048: 0xc127ea6  jal         func_49FA98
    ctx->pc = 0x4BF048u;
    SET_GPR_U32(ctx, 31, 0x4BF050u);
    ctx->pc = 0x4BF04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BF048u;
    // 0x4bf04c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FA98u, 0x4BF048u, 0x4BF050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BF050u;
label_4bf050:
    // 0x4bf050: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4BF050u;
    {
        const bool branch_taken_0x4bf050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BF054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF050u;
        // 0x4bf054: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bf050) {
            ctx->pc = 0x4BF074u;
            goto label_4bf074;
        }
    }
    ctx->pc = 0x4BF058u;
label_4bf058:
    // 0x4bf058: 0xc127ef0  jal         func_49FBC0
    ctx->pc = 0x4BF058u;
    SET_GPR_U32(ctx, 31, 0x4BF060u);
    ctx->pc = 0x4BF05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BF058u;
    // 0x4bf05c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FBC0u, 0x4BF058u, 0x4BF060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BF060u;
label_4bf060:
    // 0x4bf060: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4BF060u;
    {
        const bool branch_taken_0x4bf060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BF064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF060u;
        // 0x4bf064: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bf060) {
            ctx->pc = 0x4BF074u;
            goto label_4bf074;
        }
    }
    ctx->pc = 0x4BF068u;
label_4bf068:
    // 0x4bf068: 0xc127f40  jal         func_49FD00
    ctx->pc = 0x4BF068u;
    SET_GPR_U32(ctx, 31, 0x4BF070u);
    ctx->pc = 0x4BF06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BF068u;
    // 0x4bf06c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FD00u, 0x4BF068u, 0x4BF070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BF070u;
label_4bf070:
    // 0x4bf070: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4bf070u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4bf074:
    // 0x4bf074: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4bf074u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4bf078: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4bf078u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4bf07c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4bf07cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4bf080: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4bf080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4bf084: 0x3e00008  jr          $ra
    ctx->pc = 0x4BF084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BF088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF084u;
        // 0x4bf088: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BF084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BF08Cu;
    // 0x4bf08c: 0x0  nop
    ctx->pc = 0x4bf08cu;
    // NOP
    ctx->pc = 0x4bf090u;
}
