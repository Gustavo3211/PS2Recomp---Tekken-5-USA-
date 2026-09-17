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

// Function: sub_002DEBF0
// Address: 0x2debf0 - 0x2dee20
void sub_002DEBF0_0x2debf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DEBF0_0x2debf0");
#endif

    switch (ctx->pc) {
        case 0x2debf0u: goto label_2debf0;
        case 0x2debf4u: goto label_2debf4;
        case 0x2debf8u: goto label_2debf8;
        case 0x2debfcu: goto label_2debfc;
        case 0x2dec00u: goto label_2dec00;
        case 0x2dec04u: goto label_2dec04;
        case 0x2dec08u: goto label_2dec08;
        case 0x2dec0cu: goto label_2dec0c;
        case 0x2dec10u: goto label_2dec10;
        case 0x2dec14u: goto label_2dec14;
        case 0x2dec18u: goto label_2dec18;
        case 0x2dec1cu: goto label_2dec1c;
        case 0x2dec20u: goto label_2dec20;
        case 0x2dec24u: goto label_2dec24;
        case 0x2dec28u: goto label_2dec28;
        case 0x2dec2cu: goto label_2dec2c;
        case 0x2dec30u: goto label_2dec30;
        case 0x2dec34u: goto label_2dec34;
        case 0x2dec38u: goto label_2dec38;
        case 0x2dec3cu: goto label_2dec3c;
        case 0x2dec40u: goto label_2dec40;
        case 0x2dec44u: goto label_2dec44;
        case 0x2dec48u: goto label_2dec48;
        case 0x2dec4cu: goto label_2dec4c;
        case 0x2dec50u: goto label_2dec50;
        case 0x2dec54u: goto label_2dec54;
        case 0x2dec58u: goto label_2dec58;
        case 0x2dec5cu: goto label_2dec5c;
        case 0x2dec60u: goto label_2dec60;
        case 0x2dec64u: goto label_2dec64;
        case 0x2dec68u: goto label_2dec68;
        case 0x2dec6cu: goto label_2dec6c;
        case 0x2dec70u: goto label_2dec70;
        case 0x2dec74u: goto label_2dec74;
        case 0x2dec78u: goto label_2dec78;
        case 0x2dec7cu: goto label_2dec7c;
        case 0x2dec80u: goto label_2dec80;
        case 0x2dec84u: goto label_2dec84;
        case 0x2dec88u: goto label_2dec88;
        case 0x2dec8cu: goto label_2dec8c;
        case 0x2dec90u: goto label_2dec90;
        case 0x2dec94u: goto label_2dec94;
        case 0x2dec98u: goto label_2dec98;
        case 0x2dec9cu: goto label_2dec9c;
        case 0x2deca0u: goto label_2deca0;
        case 0x2deca4u: goto label_2deca4;
        case 0x2deca8u: goto label_2deca8;
        case 0x2decacu: goto label_2decac;
        case 0x2decb0u: goto label_2decb0;
        case 0x2decb4u: goto label_2decb4;
        case 0x2decb8u: goto label_2decb8;
        case 0x2decbcu: goto label_2decbc;
        case 0x2decc0u: goto label_2decc0;
        case 0x2decc4u: goto label_2decc4;
        case 0x2decc8u: goto label_2decc8;
        case 0x2decccu: goto label_2deccc;
        case 0x2decd0u: goto label_2decd0;
        case 0x2decd4u: goto label_2decd4;
        case 0x2decd8u: goto label_2decd8;
        case 0x2decdcu: goto label_2decdc;
        case 0x2dece0u: goto label_2dece0;
        case 0x2dece4u: goto label_2dece4;
        case 0x2dece8u: goto label_2dece8;
        case 0x2dececu: goto label_2decec;
        case 0x2decf0u: goto label_2decf0;
        case 0x2decf4u: goto label_2decf4;
        case 0x2decf8u: goto label_2decf8;
        case 0x2decfcu: goto label_2decfc;
        case 0x2ded00u: goto label_2ded00;
        case 0x2ded04u: goto label_2ded04;
        case 0x2ded08u: goto label_2ded08;
        case 0x2ded0cu: goto label_2ded0c;
        case 0x2ded10u: goto label_2ded10;
        case 0x2ded14u: goto label_2ded14;
        case 0x2ded18u: goto label_2ded18;
        case 0x2ded1cu: goto label_2ded1c;
        case 0x2ded20u: goto label_2ded20;
        case 0x2ded24u: goto label_2ded24;
        case 0x2ded28u: goto label_2ded28;
        case 0x2ded2cu: goto label_2ded2c;
        case 0x2ded30u: goto label_2ded30;
        case 0x2ded34u: goto label_2ded34;
        case 0x2ded38u: goto label_2ded38;
        case 0x2ded3cu: goto label_2ded3c;
        case 0x2ded40u: goto label_2ded40;
        case 0x2ded44u: goto label_2ded44;
        case 0x2ded48u: goto label_2ded48;
        case 0x2ded4cu: goto label_2ded4c;
        case 0x2ded50u: goto label_2ded50;
        case 0x2ded54u: goto label_2ded54;
        case 0x2ded58u: goto label_2ded58;
        case 0x2ded5cu: goto label_2ded5c;
        case 0x2ded60u: goto label_2ded60;
        case 0x2ded64u: goto label_2ded64;
        case 0x2ded68u: goto label_2ded68;
        case 0x2ded6cu: goto label_2ded6c;
        case 0x2ded70u: goto label_2ded70;
        case 0x2ded74u: goto label_2ded74;
        case 0x2ded78u: goto label_2ded78;
        case 0x2ded7cu: goto label_2ded7c;
        case 0x2ded80u: goto label_2ded80;
        case 0x2ded84u: goto label_2ded84;
        case 0x2ded88u: goto label_2ded88;
        case 0x2ded8cu: goto label_2ded8c;
        case 0x2ded90u: goto label_2ded90;
        case 0x2ded94u: goto label_2ded94;
        case 0x2ded98u: goto label_2ded98;
        case 0x2ded9cu: goto label_2ded9c;
        case 0x2deda0u: goto label_2deda0;
        case 0x2deda4u: goto label_2deda4;
        case 0x2deda8u: goto label_2deda8;
        case 0x2dedacu: goto label_2dedac;
        case 0x2dedb0u: goto label_2dedb0;
        case 0x2dedb4u: goto label_2dedb4;
        case 0x2dedb8u: goto label_2dedb8;
        case 0x2dedbcu: goto label_2dedbc;
        case 0x2dedc0u: goto label_2dedc0;
        case 0x2dedc4u: goto label_2dedc4;
        case 0x2dedc8u: goto label_2dedc8;
        case 0x2dedccu: goto label_2dedcc;
        case 0x2dedd0u: goto label_2dedd0;
        case 0x2dedd4u: goto label_2dedd4;
        case 0x2dedd8u: goto label_2dedd8;
        case 0x2deddcu: goto label_2deddc;
        case 0x2dede0u: goto label_2dede0;
        case 0x2dede4u: goto label_2dede4;
        case 0x2dede8u: goto label_2dede8;
        case 0x2dedecu: goto label_2dedec;
        case 0x2dedf0u: goto label_2dedf0;
        case 0x2dedf4u: goto label_2dedf4;
        case 0x2dedf8u: goto label_2dedf8;
        case 0x2dedfcu: goto label_2dedfc;
        case 0x2dee00u: goto label_2dee00;
        case 0x2dee04u: goto label_2dee04;
        case 0x2dee08u: goto label_2dee08;
        case 0x2dee0cu: goto label_2dee0c;
        case 0x2dee10u: goto label_2dee10;
        case 0x2dee14u: goto label_2dee14;
        case 0x2dee18u: goto label_2dee18;
        case 0x2dee1cu: goto label_2dee1c;
        default: break;
    }

    ctx->pc = 0x2debf0u;

label_2debf0:
    // 0x2debf0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2debf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2debf4:
    // 0x2debf4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2debf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_2debf8:
    // 0x2debf8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2debf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2debfc:
    // 0x2debfc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2debfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2dec00:
    // 0x2dec00: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x2dec00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
label_2dec04:
    // 0x2dec04: 0x3c1e0046  lui         $fp, 0x46
    ctx->pc = 0x2dec04u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)70 << 16));
label_2dec08:
    // 0x2dec08: 0x2442ea20  addiu       $v0, $v0, -0x15E0
    ctx->pc = 0x2dec08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961696));
label_2dec0c:
    // 0x2dec0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2dec0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2dec10:
    // 0x2dec10: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2dec10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2dec14:
    // 0x2dec14: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2dec14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2dec18:
    // 0x2dec18: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2dec18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_2dec1c:
    // 0x2dec1c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2dec1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_2dec20:
    // 0x2dec20: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2dec20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_2dec24:
    // 0x2dec24: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x2dec24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_2dec28:
    // 0x2dec28: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x2dec28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_2dec2c:
    // 0x2dec2c: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x2dec2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_2dec30:
    // 0x2dec30: 0x2655006c  addiu       $s5, $s2, 0x6C
    ctx->pc = 0x2dec30u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 108));
label_2dec34:
    // 0x2dec34: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x2dec34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2dec38:
    // 0x2dec38: 0x27c5d620  addiu       $a1, $fp, -0x29E0
    ctx->pc = 0x2dec38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294956576));
label_2dec3c:
    // 0x2dec3c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2dec3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2dec40:
    // 0x2dec40: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2dec40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2dec44:
    // 0x2dec44: 0x0  nop
    ctx->pc = 0x2dec44u;
    // NOP
label_2dec48:
    // 0x2dec48: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2dec48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2dec4c:
    // 0x2dec4c: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x2dec4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
label_2dec50:
    // 0x2dec50: 0x0  nop
    ctx->pc = 0x2dec50u;
    // NOP
label_2dec54:
    // 0x2dec54: 0x0  nop
    ctx->pc = 0x2dec54u;
    // NOP
label_2dec58:
    // 0x2dec58: 0x0  nop
    ctx->pc = 0x2dec58u;
    // NOP
label_2dec5c:
    // 0x2dec5c: 0x1464fffa  bne         $v1, $a0, . + 4 + (-0x6 << 2)
label_2dec60:
    if (ctx->pc == 0x2DEC60u) {
        ctx->pc = 0x2DEC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEC5Cu;
        // 0x2dec60: 0x2442000c  addiu       $v0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEC64u;
        goto label_2dec64;
    }
    ctx->pc = 0x2DEC5Cu;
    {
        const bool branch_taken_0x2dec5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2DEC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEC5Cu;
        // 0x2dec60: 0x2442000c  addiu       $v0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dec5c) {
            ctx->pc = 0x2DEC48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dec48;
        }
    }
    ctx->pc = 0x2DEC64u;
label_2dec64:
    // 0x2dec64: 0x265700cc  addiu       $s7, $s2, 0xCC
    ctx->pc = 0x2dec64u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), 204));
label_2dec68:
    // 0x2dec68: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x2dec68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2dec6c:
    // 0x2dec6c: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x2dec6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2dec70:
    // 0x2dec70: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2dec70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2dec74:
    // 0x2dec74: 0x0  nop
    ctx->pc = 0x2dec74u;
    // NOP
label_2dec78:
    // 0x2dec78: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2dec78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2dec7c:
    // 0x2dec7c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2dec7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_2dec80:
    // 0x2dec80: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2dec80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_2dec84:
    // 0x2dec84: 0x0  nop
    ctx->pc = 0x2dec84u;
    // NOP
label_2dec88:
    // 0x2dec88: 0x0  nop
    ctx->pc = 0x2dec88u;
    // NOP
label_2dec8c:
    // 0x2dec8c: 0x1464fffa  bne         $v1, $a0, . + 4 + (-0x6 << 2)
label_2dec90:
    if (ctx->pc == 0x2DEC90u) {
        ctx->pc = 0x2DEC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEC8Cu;
        // 0x2dec90: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEC94u;
        goto label_2dec94;
    }
    ctx->pc = 0x2DEC8Cu;
    {
        const bool branch_taken_0x2dec8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2DEC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEC8Cu;
        // 0x2dec90: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dec8c) {
            ctx->pc = 0x2DEC78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dec78;
        }
    }
    ctx->pc = 0x2DEC94u;
label_2dec94:
    // 0x2dec94: 0x3c020019  lui         $v0, 0x19
    ctx->pc = 0x2dec94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25 << 16));
label_2dec98:
    // 0x2dec98: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x2dec98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
label_2dec9c:
    // 0x2dec9c: 0xae400d2c  sw          $zero, 0xD2C($s2)
    ctx->pc = 0x2dec9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3372), GPR_U32(ctx, 0));
label_2deca0:
    // 0x2deca0: 0x2453ac00  addiu       $s3, $v0, -0x5400
    ctx->pc = 0x2deca0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945792));
label_2deca4:
    // 0x2deca4: 0x2476ea20  addiu       $s6, $v1, -0x15E0
    ctx->pc = 0x2deca4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961696));
label_2deca8:
    // 0x2deca8: 0x24140180  addiu       $s4, $zero, 0x180
    ctx->pc = 0x2deca8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
label_2decac:
    // 0x2decac: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2decacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2decb0:
    // 0x2decb0: 0x2341018  mult        $v0, $s1, $s4
    ctx->pc = 0x2decb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2decb4:
    // 0x2decb4: 0x538021  addu        $s0, $v0, $s3
    ctx->pc = 0x2decb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_2decb8:
    // 0x2decb8: 0xae160008  sw          $s6, 0x8($s0)
    ctx->pc = 0x2decb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 22));
label_2decbc:
    // 0x2decbc: 0xc0b79a0  jal         func_2DE680
label_2decc0:
    if (ctx->pc == 0x2DECC0u) {
        ctx->pc = 0x2DECC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DECBCu;
        // 0x2decc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DECC4u;
        goto label_2decc4;
    }
    ctx->pc = 0x2DECBCu;
    SET_GPR_U32(ctx, 31, 0x2DECC4u);
    ctx->pc = 0x2DECC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DECBCu;
    // 0x2decc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE680u, 0x2DECBCu, 0x2DECC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DECC4u;
label_2decc4:
    // 0x2decc4: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x2decc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2decc8:
    // 0x2decc8: 0x541818  mult        $v1, $v0, $s4
    ctx->pc = 0x2decc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2deccc:
    // 0x2deccc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2decccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2decd0:
    // 0x2decd0: 0x732021  addu        $a0, $v1, $s3
    ctx->pc = 0x2decd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_2decd4:
    // 0x2decd4: 0x2a230180  slti        $v1, $s1, 0x180
    ctx->pc = 0x2decd4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)384) ? 1 : 0);
label_2decd8:
    // 0x2decd8: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
label_2decdc:
    if (ctx->pc == 0x2DECDCu) {
        ctx->pc = 0x2DECDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DECD8u;
        // 0x2decdc: 0xae040010  sw          $a0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DECE0u;
        goto label_2dece0;
    }
    ctx->pc = 0x2DECD8u;
    {
        const bool branch_taken_0x2decd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DECDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DECD8u;
        // 0x2decdc: 0xae040010  sw          $a0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2decd8) {
            ctx->pc = 0x2DECB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2decb0;
        }
    }
    ctx->pc = 0x2DECE0u;
label_2dece0:
    // 0x2dece0: 0x2402017f  addiu       $v0, $zero, 0x17F
    ctx->pc = 0x2dece0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 383));
label_2dece4:
    // 0x2dece4: 0xae530050  sw          $s3, 0x50($s2)
    ctx->pc = 0x2dece4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 19));
label_2dece8:
    // 0x2dece8: 0xae500054  sw          $s0, 0x54($s2)
    ctx->pc = 0x2dece8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 16));
label_2decec:
    // 0x2decec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2dececu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2decf0:
    // 0x2decf0: 0xae540058  sw          $s4, 0x58($s2)
    ctx->pc = 0x2decf0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 20));
label_2decf4:
    // 0x2decf4: 0xae420060  sw          $v0, 0x60($s2)
    ctx->pc = 0x2decf4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 2));
label_2decf8:
    // 0x2decf8: 0xc0b7cf2  jal         func_2DF3C8
label_2decfc:
    if (ctx->pc == 0x2DECFCu) {
        ctx->pc = 0x2DECFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DECF8u;
        // 0x2decfc: 0xae40005c  sw          $zero, 0x5C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DED00u;
        goto label_2ded00;
    }
    ctx->pc = 0x2DECF8u;
    SET_GPR_U32(ctx, 31, 0x2DED00u);
    ctx->pc = 0x2DECFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DECF8u;
    // 0x2decfc: 0xae40005c  sw          $zero, 0x5C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF3C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF3C8u, 0x2DECF8u, 0x2DED00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DED00u;
label_2ded00:
    // 0x2ded00: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ded00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ded04:
    // 0x2ded04: 0xc0b798e  jal         func_2DE638
label_2ded08:
    if (ctx->pc == 0x2DED08u) {
        ctx->pc = 0x2DED08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DED04u;
        // 0x2ded08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DED0Cu;
        goto label_2ded0c;
    }
    ctx->pc = 0x2DED04u;
    SET_GPR_U32(ctx, 31, 0x2DED0Cu);
    ctx->pc = 0x2DED08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DED04u;
    // 0x2ded08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE638u, 0x2DED04u, 0x2DED0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DED0Cu;
label_2ded0c:
    // 0x2ded0c: 0xae520014  sw          $s2, 0x14($s2)
    ctx->pc = 0x2ded0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 18));
label_2ded10:
    // 0x2ded10: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x2ded10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
label_2ded14:
    // 0x2ded14: 0xae520010  sw          $s2, 0x10($s2)
    ctx->pc = 0x2ded14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 18));
label_2ded18:
    // 0x2ded18: 0x24424a18  addiu       $v0, $v0, 0x4A18
    ctx->pc = 0x2ded18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18968));
label_2ded1c:
    // 0x2ded1c: 0xae400020  sw          $zero, 0x20($s2)
    ctx->pc = 0x2ded1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
label_2ded20:
    // 0x2ded20: 0xae420038  sw          $v0, 0x38($s2)
    ctx->pc = 0x2ded20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 2));
label_2ded24:
    // 0x2ded24: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2ded24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ded28:
    // 0x2ded28: 0xae40001c  sw          $zero, 0x1C($s2)
    ctx->pc = 0x2ded28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 0));
label_2ded2c:
    // 0x2ded2c: 0xae400024  sw          $zero, 0x24($s2)
    ctx->pc = 0x2ded2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
label_2ded30:
    // 0x2ded30: 0xae400028  sw          $zero, 0x28($s2)
    ctx->pc = 0x2ded30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
label_2ded34:
    // 0x2ded34: 0xae400018  sw          $zero, 0x18($s2)
    ctx->pc = 0x2ded34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
label_2ded38:
    // 0x2ded38: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x2ded38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_2ded3c:
    // 0x2ded3c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2ded3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2ded40:
    // 0x2ded40: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2ded40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2ded44:
    // 0x2ded44: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2ded44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2ded48:
    // 0x2ded48: 0x2a230008  slti        $v1, $s1, 0x8
    ctx->pc = 0x2ded48u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
label_2ded4c:
    // 0x2ded4c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2ded4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_2ded50:
    // 0x2ded50: 0x2442006c  addiu       $v0, $v0, 0x6C
    ctx->pc = 0x2ded50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
label_2ded54:
    // 0x2ded54: 0xac420000  sw          $v0, 0x0($v0)
    ctx->pc = 0x2ded54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 2));
label_2ded58:
    // 0x2ded58: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
label_2ded5c:
    if (ctx->pc == 0x2DED5Cu) {
        ctx->pc = 0x2DED5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DED58u;
        // 0x2ded5c: 0xac420004  sw          $v0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DED60u;
        goto label_2ded60;
    }
    ctx->pc = 0x2DED58u;
    {
        const bool branch_taken_0x2ded58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DED5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DED58u;
        // 0x2ded5c: 0xac420004  sw          $v0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ded58) {
            ctx->pc = 0x2DED38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ded38;
        }
    }
    ctx->pc = 0x2DED60u;
label_2ded60:
    // 0x2ded60: 0xae400068  sw          $zero, 0x68($s2)
    ctx->pc = 0x2ded60u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 0));
label_2ded64:
    // 0x2ded64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ded64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ded68:
    // 0x2ded68: 0xae400040  sw          $zero, 0x40($s2)
    ctx->pc = 0x2ded68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 0));
label_2ded6c:
    // 0x2ded6c: 0xc0b797a  jal         func_2DE5E8
label_2ded70:
    if (ctx->pc == 0x2DED70u) {
        ctx->pc = 0x2DED70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DED6Cu;
        // 0x2ded70: 0xae400064  sw          $zero, 0x64($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DED74u;
        goto label_2ded74;
    }
    ctx->pc = 0x2DED6Cu;
    SET_GPR_U32(ctx, 31, 0x2DED74u);
    ctx->pc = 0x2DED70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DED6Cu;
    // 0x2ded70: 0xae400064  sw          $zero, 0x64($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE5E8u, 0x2DED6Cu, 0x2DED74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DED74u;
label_2ded74:
    // 0x2ded74: 0x1000001e  b           . + 4 + (0x1E << 2)
label_2ded78:
    if (ctx->pc == 0x2DED78u) {
        ctx->pc = 0x2DED78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DED74u;
        // 0x2ded78: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DED7Cu;
        goto label_2ded7c;
    }
    ctx->pc = 0x2DED74u;
    {
        const bool branch_taken_0x2ded74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DED78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DED74u;
        // 0x2ded78: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ded74) {
            ctx->pc = 0x2DEDF0u;
            goto label_2dedf0;
        }
    }
    ctx->pc = 0x2DED7Cu;
label_2ded7c:
    // 0x2ded7c: 0x0  nop
    ctx->pc = 0x2ded7cu;
    // NOP
label_2ded80:
    // 0x2ded80: 0x2402ff94  addiu       $v0, $zero, -0x6C
    ctx->pc = 0x2ded80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967188));
label_2ded84:
    // 0x2ded84: 0x12420010  beq         $s2, $v0, . + 4 + (0x10 << 2)
label_2ded88:
    if (ctx->pc == 0x2DED88u) {
        ctx->pc = 0x2DED88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DED84u;
        // 0x2ded88: 0x3c040015  lui         $a0, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DED8Cu;
        goto label_2ded8c;
    }
    ctx->pc = 0x2DED84u;
    {
        const bool branch_taken_0x2ded84 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DED88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DED84u;
        // 0x2ded88: 0x3c040015  lui         $a0, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ded84) {
            ctx->pc = 0x2DEDC8u;
            goto label_2dedc8;
        }
    }
    ctx->pc = 0x2DED8Cu;
label_2ded8c:
    // 0x2ded8c: 0x2e0802d  daddu       $s0, $s7, $zero
    ctx->pc = 0x2ded8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2ded90:
    // 0x2ded90: 0x12b0000d  beq         $s5, $s0, . + 4 + (0xD << 2)
label_2ded94:
    if (ctx->pc == 0x2DED94u) {
        ctx->pc = 0x2DED98u;
        goto label_2ded98;
    }
    ctx->pc = 0x2DED90u;
    {
        const bool branch_taken_0x2ded90 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 16));
        if (branch_taken_0x2ded90) {
            ctx->pc = 0x2DEDC8u;
            goto label_2dedc8;
        }
    }
    ctx->pc = 0x2DED98u;
label_2ded98:
    // 0x2ded98: 0x2610fff4  addiu       $s0, $s0, -0xC
    ctx->pc = 0x2ded98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967284));
label_2ded9c:
    // 0x2ded9c: 0x0  nop
    ctx->pc = 0x2ded9cu;
    // NOP
label_2deda0:
    // 0x2deda0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2deda0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2deda4:
    // 0x2deda4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2deda4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2deda8:
    // 0x2deda8: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2deda8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_2dedac:
    // 0x2dedac: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2dedacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2dedb0:
    // 0x2dedb0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2dedb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2dedb4:
    // 0x2dedb4: 0x60f809  jalr        $v1
label_2dedb8:
    if (ctx->pc == 0x2DEDB8u) {
        ctx->pc = 0x2DEDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEDB4u;
        // 0x2dedb8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEDBCu;
        goto label_2dedbc;
    }
    ctx->pc = 0x2DEDB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2DEDBCu);
        ctx->pc = 0x2DEDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEDB4u;
        // 0x2dedb8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DEDB4u, 0x2DEDBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DEDBCu;
label_2dedbc:
    // 0x2dedbc: 0x56b0fff8  bnel        $s5, $s0, . + 4 + (-0x8 << 2)
label_2dedc0:
    if (ctx->pc == 0x2DEDC0u) {
        ctx->pc = 0x2DEDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEDBCu;
        // 0x2dedc0: 0x2610fff4  addiu       $s0, $s0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967284));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEDC4u;
        goto label_2dedc4;
    }
    ctx->pc = 0x2DEDBCu;
    {
        const bool branch_taken_0x2dedbc = (GPR_U64(ctx, 21) != GPR_U64(ctx, 16));
        if (branch_taken_0x2dedbc) {
            ctx->pc = 0x2DEDC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DEDBCu;
            // 0x2dedc0: 0x2610fff4  addiu       $s0, $s0, -0xC (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967284));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DEDA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2deda0;
        }
    }
    ctx->pc = 0x2DEDC4u;
label_2dedc4:
    // 0x2dedc4: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2dedc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
label_2dedc8:
    // 0x2dedc8: 0xc048b90  jal         func_122E40
label_2dedcc:
    if (ctx->pc == 0x2DEDCCu) {
        ctx->pc = 0x2DEDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEDC8u;
        // 0x2dedcc: 0x2484029c  addiu       $a0, $a0, 0x29C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 668));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEDD0u;
        goto label_2dedd0;
    }
    ctx->pc = 0x2DEDC8u;
    SET_GPR_U32(ctx, 31, 0x2DEDD0u);
    ctx->pc = 0x2DEDCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEDC8u;
    // 0x2dedcc: 0x2484029c  addiu       $a0, $a0, 0x29C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 668));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x2DEDC8u, 0x2DEDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEDD0u;
label_2dedd0:
    // 0x2dedd0: 0x27c2d620  addiu       $v0, $fp, -0x29E0
    ctx->pc = 0x2dedd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294956576));
label_2dedd4:
    // 0x2dedd4: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2dedd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
label_2dedd8:
    // 0x2dedd8: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x2dedd8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_2deddc:
    // 0x2deddc: 0xc048b90  jal         func_122E40
label_2dede0:
    if (ctx->pc == 0x2DEDE0u) {
        ctx->pc = 0x2DEDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEDDCu;
        // 0x2dede0: 0x248402ac  addiu       $a0, $a0, 0x2AC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 684));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEDE4u;
        goto label_2dede4;
    }
    ctx->pc = 0x2DEDDCu;
    SET_GPR_U32(ctx, 31, 0x2DEDE4u);
    ctx->pc = 0x2DEDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEDDCu;
    // 0x2dede0: 0x248402ac  addiu       $a0, $a0, 0x2AC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 684));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x2DEDDCu, 0x2DEDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEDE4u;
label_2dede4:
    // 0x2dede4: 0x0  nop
    ctx->pc = 0x2dede4u;
    // NOP
label_2dede8:
    // 0x2dede8: 0xc049a82  jal         func_126A08
label_2dedec:
    if (ctx->pc == 0x2DEDECu) {
        ctx->pc = 0x2DEDF0u;
        goto label_2dedf0;
    }
    ctx->pc = 0x2DEDE8u;
    SET_GPR_U32(ctx, 31, 0x2DEDF0u);
    ctx->pc = 0x126A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126A08u, 0x2DEDE8u, 0x2DEDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEDF0u;
label_2dedf0:
    // 0x2dedf0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2dedf0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2dedf4:
    // 0x2dedf4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2dedf4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2dedf8:
    // 0x2dedf8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2dedf8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2dedfc:
    // 0x2dedfc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2dedfcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2dee00:
    // 0x2dee00: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2dee00u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2dee04:
    // 0x2dee04: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2dee04u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2dee08:
    // 0x2dee08: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2dee08u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2dee0c:
    // 0x2dee0c: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x2dee0cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2dee10:
    // 0x2dee10: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2dee10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_2dee14:
    // 0x2dee14: 0x3e00008  jr          $ra
label_2dee18:
    if (ctx->pc == 0x2DEE18u) {
        ctx->pc = 0x2DEE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEE14u;
        // 0x2dee18: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEE1Cu;
        goto label_2dee1c;
    }
    ctx->pc = 0x2DEE14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DEE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEE14u;
        // 0x2dee18: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DEE14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DEE1Cu;
label_2dee1c:
    // 0x2dee1c: 0x0  nop
    ctx->pc = 0x2dee1cu;
    // NOP
    ctx->pc = 0x2dee20u;
}
