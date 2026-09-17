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

// Function: sub_0033CA00
// Address: 0x33ca00 - 0x33ce48
void sub_0033CA00_0x33ca00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033CA00_0x33ca00");
#endif

    switch (ctx->pc) {
        case 0x33ca00u: goto label_33ca00;
        case 0x33ca04u: goto label_33ca04;
        case 0x33ca08u: goto label_33ca08;
        case 0x33ca0cu: goto label_33ca0c;
        case 0x33ca10u: goto label_33ca10;
        case 0x33ca14u: goto label_33ca14;
        case 0x33ca18u: goto label_33ca18;
        case 0x33ca1cu: goto label_33ca1c;
        case 0x33ca20u: goto label_33ca20;
        case 0x33ca24u: goto label_33ca24;
        case 0x33ca28u: goto label_33ca28;
        case 0x33ca2cu: goto label_33ca2c;
        case 0x33ca30u: goto label_33ca30;
        case 0x33ca34u: goto label_33ca34;
        case 0x33ca38u: goto label_33ca38;
        case 0x33ca3cu: goto label_33ca3c;
        case 0x33ca40u: goto label_33ca40;
        case 0x33ca44u: goto label_33ca44;
        case 0x33ca48u: goto label_33ca48;
        case 0x33ca4cu: goto label_33ca4c;
        case 0x33ca50u: goto label_33ca50;
        case 0x33ca54u: goto label_33ca54;
        case 0x33ca58u: goto label_33ca58;
        case 0x33ca5cu: goto label_33ca5c;
        case 0x33ca60u: goto label_33ca60;
        case 0x33ca64u: goto label_33ca64;
        case 0x33ca68u: goto label_33ca68;
        case 0x33ca6cu: goto label_33ca6c;
        case 0x33ca70u: goto label_33ca70;
        case 0x33ca74u: goto label_33ca74;
        case 0x33ca78u: goto label_33ca78;
        case 0x33ca7cu: goto label_33ca7c;
        case 0x33ca80u: goto label_33ca80;
        case 0x33ca84u: goto label_33ca84;
        case 0x33ca88u: goto label_33ca88;
        case 0x33ca8cu: goto label_33ca8c;
        case 0x33ca90u: goto label_33ca90;
        case 0x33ca94u: goto label_33ca94;
        case 0x33ca98u: goto label_33ca98;
        case 0x33ca9cu: goto label_33ca9c;
        case 0x33caa0u: goto label_33caa0;
        case 0x33caa4u: goto label_33caa4;
        case 0x33caa8u: goto label_33caa8;
        case 0x33caacu: goto label_33caac;
        case 0x33cab0u: goto label_33cab0;
        case 0x33cab4u: goto label_33cab4;
        case 0x33cab8u: goto label_33cab8;
        case 0x33cabcu: goto label_33cabc;
        case 0x33cac0u: goto label_33cac0;
        case 0x33cac4u: goto label_33cac4;
        case 0x33cac8u: goto label_33cac8;
        case 0x33caccu: goto label_33cacc;
        case 0x33cad0u: goto label_33cad0;
        case 0x33cad4u: goto label_33cad4;
        case 0x33cad8u: goto label_33cad8;
        case 0x33cadcu: goto label_33cadc;
        case 0x33cae0u: goto label_33cae0;
        case 0x33cae4u: goto label_33cae4;
        case 0x33cae8u: goto label_33cae8;
        case 0x33caecu: goto label_33caec;
        case 0x33caf0u: goto label_33caf0;
        case 0x33caf4u: goto label_33caf4;
        case 0x33caf8u: goto label_33caf8;
        case 0x33cafcu: goto label_33cafc;
        case 0x33cb00u: goto label_33cb00;
        case 0x33cb04u: goto label_33cb04;
        case 0x33cb08u: goto label_33cb08;
        case 0x33cb0cu: goto label_33cb0c;
        case 0x33cb10u: goto label_33cb10;
        case 0x33cb14u: goto label_33cb14;
        case 0x33cb18u: goto label_33cb18;
        case 0x33cb1cu: goto label_33cb1c;
        case 0x33cb20u: goto label_33cb20;
        case 0x33cb24u: goto label_33cb24;
        case 0x33cb28u: goto label_33cb28;
        case 0x33cb2cu: goto label_33cb2c;
        case 0x33cb30u: goto label_33cb30;
        case 0x33cb34u: goto label_33cb34;
        case 0x33cb38u: goto label_33cb38;
        case 0x33cb3cu: goto label_33cb3c;
        case 0x33cb40u: goto label_33cb40;
        case 0x33cb44u: goto label_33cb44;
        case 0x33cb48u: goto label_33cb48;
        case 0x33cb4cu: goto label_33cb4c;
        case 0x33cb50u: goto label_33cb50;
        case 0x33cb54u: goto label_33cb54;
        case 0x33cb58u: goto label_33cb58;
        case 0x33cb5cu: goto label_33cb5c;
        case 0x33cb60u: goto label_33cb60;
        case 0x33cb64u: goto label_33cb64;
        case 0x33cb68u: goto label_33cb68;
        case 0x33cb6cu: goto label_33cb6c;
        case 0x33cb70u: goto label_33cb70;
        case 0x33cb74u: goto label_33cb74;
        case 0x33cb78u: goto label_33cb78;
        case 0x33cb7cu: goto label_33cb7c;
        case 0x33cb80u: goto label_33cb80;
        case 0x33cb84u: goto label_33cb84;
        case 0x33cb88u: goto label_33cb88;
        case 0x33cb8cu: goto label_33cb8c;
        case 0x33cb90u: goto label_33cb90;
        case 0x33cb94u: goto label_33cb94;
        case 0x33cb98u: goto label_33cb98;
        case 0x33cb9cu: goto label_33cb9c;
        case 0x33cba0u: goto label_33cba0;
        case 0x33cba4u: goto label_33cba4;
        case 0x33cba8u: goto label_33cba8;
        case 0x33cbacu: goto label_33cbac;
        case 0x33cbb0u: goto label_33cbb0;
        case 0x33cbb4u: goto label_33cbb4;
        case 0x33cbb8u: goto label_33cbb8;
        case 0x33cbbcu: goto label_33cbbc;
        case 0x33cbc0u: goto label_33cbc0;
        case 0x33cbc4u: goto label_33cbc4;
        case 0x33cbc8u: goto label_33cbc8;
        case 0x33cbccu: goto label_33cbcc;
        case 0x33cbd0u: goto label_33cbd0;
        case 0x33cbd4u: goto label_33cbd4;
        case 0x33cbd8u: goto label_33cbd8;
        case 0x33cbdcu: goto label_33cbdc;
        case 0x33cbe0u: goto label_33cbe0;
        case 0x33cbe4u: goto label_33cbe4;
        case 0x33cbe8u: goto label_33cbe8;
        case 0x33cbecu: goto label_33cbec;
        case 0x33cbf0u: goto label_33cbf0;
        case 0x33cbf4u: goto label_33cbf4;
        case 0x33cbf8u: goto label_33cbf8;
        case 0x33cbfcu: goto label_33cbfc;
        case 0x33cc00u: goto label_33cc00;
        case 0x33cc04u: goto label_33cc04;
        case 0x33cc08u: goto label_33cc08;
        case 0x33cc0cu: goto label_33cc0c;
        case 0x33cc10u: goto label_33cc10;
        case 0x33cc14u: goto label_33cc14;
        case 0x33cc18u: goto label_33cc18;
        case 0x33cc1cu: goto label_33cc1c;
        case 0x33cc20u: goto label_33cc20;
        case 0x33cc24u: goto label_33cc24;
        case 0x33cc28u: goto label_33cc28;
        case 0x33cc2cu: goto label_33cc2c;
        case 0x33cc30u: goto label_33cc30;
        case 0x33cc34u: goto label_33cc34;
        case 0x33cc38u: goto label_33cc38;
        case 0x33cc3cu: goto label_33cc3c;
        case 0x33cc40u: goto label_33cc40;
        case 0x33cc44u: goto label_33cc44;
        case 0x33cc48u: goto label_33cc48;
        case 0x33cc4cu: goto label_33cc4c;
        case 0x33cc50u: goto label_33cc50;
        case 0x33cc54u: goto label_33cc54;
        case 0x33cc58u: goto label_33cc58;
        case 0x33cc5cu: goto label_33cc5c;
        case 0x33cc60u: goto label_33cc60;
        case 0x33cc64u: goto label_33cc64;
        case 0x33cc68u: goto label_33cc68;
        case 0x33cc6cu: goto label_33cc6c;
        case 0x33cc70u: goto label_33cc70;
        case 0x33cc74u: goto label_33cc74;
        case 0x33cc78u: goto label_33cc78;
        case 0x33cc7cu: goto label_33cc7c;
        case 0x33cc80u: goto label_33cc80;
        case 0x33cc84u: goto label_33cc84;
        case 0x33cc88u: goto label_33cc88;
        case 0x33cc8cu: goto label_33cc8c;
        case 0x33cc90u: goto label_33cc90;
        case 0x33cc94u: goto label_33cc94;
        case 0x33cc98u: goto label_33cc98;
        case 0x33cc9cu: goto label_33cc9c;
        case 0x33cca0u: goto label_33cca0;
        case 0x33cca4u: goto label_33cca4;
        case 0x33cca8u: goto label_33cca8;
        case 0x33ccacu: goto label_33ccac;
        case 0x33ccb0u: goto label_33ccb0;
        case 0x33ccb4u: goto label_33ccb4;
        case 0x33ccb8u: goto label_33ccb8;
        case 0x33ccbcu: goto label_33ccbc;
        case 0x33ccc0u: goto label_33ccc0;
        case 0x33ccc4u: goto label_33ccc4;
        case 0x33ccc8u: goto label_33ccc8;
        case 0x33ccccu: goto label_33cccc;
        case 0x33ccd0u: goto label_33ccd0;
        case 0x33ccd4u: goto label_33ccd4;
        case 0x33ccd8u: goto label_33ccd8;
        case 0x33ccdcu: goto label_33ccdc;
        case 0x33cce0u: goto label_33cce0;
        case 0x33cce4u: goto label_33cce4;
        case 0x33cce8u: goto label_33cce8;
        case 0x33ccecu: goto label_33ccec;
        case 0x33ccf0u: goto label_33ccf0;
        case 0x33ccf4u: goto label_33ccf4;
        case 0x33ccf8u: goto label_33ccf8;
        case 0x33ccfcu: goto label_33ccfc;
        case 0x33cd00u: goto label_33cd00;
        case 0x33cd04u: goto label_33cd04;
        case 0x33cd08u: goto label_33cd08;
        case 0x33cd0cu: goto label_33cd0c;
        case 0x33cd10u: goto label_33cd10;
        case 0x33cd14u: goto label_33cd14;
        case 0x33cd18u: goto label_33cd18;
        case 0x33cd1cu: goto label_33cd1c;
        case 0x33cd20u: goto label_33cd20;
        case 0x33cd24u: goto label_33cd24;
        case 0x33cd28u: goto label_33cd28;
        case 0x33cd2cu: goto label_33cd2c;
        case 0x33cd30u: goto label_33cd30;
        case 0x33cd34u: goto label_33cd34;
        case 0x33cd38u: goto label_33cd38;
        case 0x33cd3cu: goto label_33cd3c;
        case 0x33cd40u: goto label_33cd40;
        case 0x33cd44u: goto label_33cd44;
        case 0x33cd48u: goto label_33cd48;
        case 0x33cd4cu: goto label_33cd4c;
        case 0x33cd50u: goto label_33cd50;
        case 0x33cd54u: goto label_33cd54;
        case 0x33cd58u: goto label_33cd58;
        case 0x33cd5cu: goto label_33cd5c;
        case 0x33cd60u: goto label_33cd60;
        case 0x33cd64u: goto label_33cd64;
        case 0x33cd68u: goto label_33cd68;
        case 0x33cd6cu: goto label_33cd6c;
        case 0x33cd70u: goto label_33cd70;
        case 0x33cd74u: goto label_33cd74;
        case 0x33cd78u: goto label_33cd78;
        case 0x33cd7cu: goto label_33cd7c;
        case 0x33cd80u: goto label_33cd80;
        case 0x33cd84u: goto label_33cd84;
        case 0x33cd88u: goto label_33cd88;
        case 0x33cd8cu: goto label_33cd8c;
        case 0x33cd90u: goto label_33cd90;
        case 0x33cd94u: goto label_33cd94;
        case 0x33cd98u: goto label_33cd98;
        case 0x33cd9cu: goto label_33cd9c;
        case 0x33cda0u: goto label_33cda0;
        case 0x33cda4u: goto label_33cda4;
        case 0x33cda8u: goto label_33cda8;
        case 0x33cdacu: goto label_33cdac;
        case 0x33cdb0u: goto label_33cdb0;
        case 0x33cdb4u: goto label_33cdb4;
        case 0x33cdb8u: goto label_33cdb8;
        case 0x33cdbcu: goto label_33cdbc;
        case 0x33cdc0u: goto label_33cdc0;
        case 0x33cdc4u: goto label_33cdc4;
        case 0x33cdc8u: goto label_33cdc8;
        case 0x33cdccu: goto label_33cdcc;
        case 0x33cdd0u: goto label_33cdd0;
        case 0x33cdd4u: goto label_33cdd4;
        case 0x33cdd8u: goto label_33cdd8;
        case 0x33cddcu: goto label_33cddc;
        case 0x33cde0u: goto label_33cde0;
        case 0x33cde4u: goto label_33cde4;
        case 0x33cde8u: goto label_33cde8;
        case 0x33cdecu: goto label_33cdec;
        case 0x33cdf0u: goto label_33cdf0;
        case 0x33cdf4u: goto label_33cdf4;
        case 0x33cdf8u: goto label_33cdf8;
        case 0x33cdfcu: goto label_33cdfc;
        case 0x33ce00u: goto label_33ce00;
        case 0x33ce04u: goto label_33ce04;
        case 0x33ce08u: goto label_33ce08;
        case 0x33ce0cu: goto label_33ce0c;
        case 0x33ce10u: goto label_33ce10;
        case 0x33ce14u: goto label_33ce14;
        case 0x33ce18u: goto label_33ce18;
        case 0x33ce1cu: goto label_33ce1c;
        case 0x33ce20u: goto label_33ce20;
        case 0x33ce24u: goto label_33ce24;
        case 0x33ce28u: goto label_33ce28;
        case 0x33ce2cu: goto label_33ce2c;
        case 0x33ce30u: goto label_33ce30;
        case 0x33ce34u: goto label_33ce34;
        case 0x33ce38u: goto label_33ce38;
        case 0x33ce3cu: goto label_33ce3c;
        case 0x33ce40u: goto label_33ce40;
        case 0x33ce44u: goto label_33ce44;
        default: break;
    }

    ctx->pc = 0x33ca00u;

label_33ca00:
    // 0x33ca00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33ca00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_33ca04:
    // 0x33ca04: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x33ca04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_33ca08:
    // 0x33ca08: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x33ca08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_33ca0c:
    // 0x33ca0c: 0x2e48003b  sltiu       $t0, $s2, 0x3B
    ctx->pc = 0x33ca0cu;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)59) ? 1 : 0);
label_33ca10:
    // 0x33ca10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33ca10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_33ca14:
    // 0x33ca14: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33ca14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_33ca18:
    // 0x33ca18: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x33ca18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33ca1c:
    // 0x33ca1c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x33ca1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_33ca20:
    // 0x33ca20: 0x110000cb  beqz        $t0, . + 4 + (0xCB << 2)
label_33ca24:
    if (ctx->pc == 0x33CA24u) {
        ctx->pc = 0x33CA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CA20u;
        // 0x33ca24: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CA28u;
        goto label_33ca28;
    }
    ctx->pc = 0x33CA20u;
    {
        const bool branch_taken_0x33ca20 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x33CA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CA20u;
        // 0x33ca24: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ca20) {
            ctx->pc = 0x33CD50u;
            goto label_33cd50;
        }
    }
    ctx->pc = 0x33CA28u;
label_33ca28:
    // 0x33ca28: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x33ca28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_33ca2c:
    // 0x33ca2c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x33ca2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_33ca30:
    // 0x33ca30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33ca30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_33ca34:
    // 0x33ca34: 0x8c423700  lw          $v0, 0x3700($v0)
    ctx->pc = 0x33ca34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14080)));
label_33ca38:
    // 0x33ca38: 0x400008  jr          $v0
label_33ca3c:
    if (ctx->pc == 0x33CA3Cu) {
        ctx->pc = 0x33CA40u;
        goto label_33ca40;
    }
    ctx->pc = 0x33CA38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x33CA40u: goto label_33ca40;
            case 0x33CAC0u: goto label_33cac0;
            case 0x33CB40u: goto label_33cb40;
            case 0x33CBC0u: goto label_33cbc0;
            case 0x33CC40u: goto label_33cc40;
            case 0x33CCC8u: goto label_33ccc8;
            case 0x33CD50u: goto label_33cd50;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33CA38u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x33CA40u;
label_33ca40:
    // 0x33ca40: 0x2e020040  sltiu       $v0, $s0, 0x40
    ctx->pc = 0x33ca40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
label_33ca44:
    // 0x33ca44: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_33ca48:
    if (ctx->pc == 0x33CA48u) {
        ctx->pc = 0x33CA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CA44u;
        // 0x33ca48: 0x2ce20020  sltiu       $v0, $a3, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CA4Cu;
        goto label_33ca4c;
    }
    ctx->pc = 0x33CA44u;
    {
        const bool branch_taken_0x33ca44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33CA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CA44u;
        // 0x33ca48: 0x2ce20020  sltiu       $v0, $a3, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ca44) {
            ctx->pc = 0x33CA90u;
            goto label_33ca90;
        }
    }
    ctx->pc = 0x33CA4Cu;
label_33ca4c:
    // 0x33ca4c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_33ca50:
    if (ctx->pc == 0x33CA50u) {
        ctx->pc = 0x33CA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CA4Cu;
        // 0x33ca50: 0x2602ffff  addiu       $v0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CA54u;
        goto label_33ca54;
    }
    ctx->pc = 0x33CA4Cu;
    {
        const bool branch_taken_0x33ca4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33CA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CA4Cu;
        // 0x33ca50: 0x2602ffff  addiu       $v0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ca4c) {
            ctx->pc = 0x33CA90u;
            goto label_33ca90;
        }
    }
    ctx->pc = 0x33CA54u;
label_33ca54:
    // 0x33ca54: 0x24e5ffff  addiu       $a1, $a3, -0x1
    ctx->pc = 0x33ca54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_33ca58:
    // 0x33ca58: 0x30460010  andi        $a2, $v0, 0x10
    ctx->pc = 0x33ca58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_33ca5c:
    // 0x33ca5c: 0x30430008  andi        $v1, $v0, 0x8
    ctx->pc = 0x33ca5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_33ca60:
    // 0x33ca60: 0x30a40010  andi        $a0, $a1, 0x10
    ctx->pc = 0x33ca60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16);
label_33ca64:
    // 0x33ca64: 0x30a50008  andi        $a1, $a1, 0x8
    ctx->pc = 0x33ca64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
label_33ca68:
    // 0x33ca68: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x33ca68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_33ca6c:
    // 0x33ca6c: 0x318c2  srl         $v1, $v1, 3
    ctx->pc = 0x33ca6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
label_33ca70:
    // 0x33ca70: 0x42042  srl         $a0, $a0, 1
    ctx->pc = 0x33ca70u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_33ca74:
    // 0x33ca74: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x33ca74u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_33ca78:
    // 0x33ca78: 0x63082  srl         $a2, $a2, 2
    ctx->pc = 0x33ca78u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
label_33ca7c:
    // 0x33ca7c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x33ca7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_33ca80:
    // 0x33ca80: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x33ca80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_33ca84:
    // 0x33ca84: 0x10000080  b           . + 4 + (0x80 << 2)
label_33ca88:
    if (ctx->pc == 0x33CA88u) {
        ctx->pc = 0x33CA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CA84u;
        // 0x33ca88: 0x52882  srl         $a1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CA8Cu;
        goto label_33ca8c;
    }
    ctx->pc = 0x33CA84u;
    {
        const bool branch_taken_0x33ca84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33CA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CA84u;
        // 0x33ca88: 0x52882  srl         $a1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ca84) {
            ctx->pc = 0x33CC88u;
            goto label_33cc88;
        }
    }
    ctx->pc = 0x33CA8Cu;
label_33ca8c:
    // 0x33ca8c: 0x0  nop
    ctx->pc = 0x33ca8cu;
    // NOP
label_33ca90:
    // 0x33ca90: 0x510000ac  beql        $t0, $zero, . + 4 + (0xAC << 2)
label_33ca94:
    if (ctx->pc == 0x33CA94u) {
        ctx->pc = 0x33CA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CA90u;
        // 0x33ca94: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CA98u;
        goto label_33ca98;
    }
    ctx->pc = 0x33CA90u;
    {
        const bool branch_taken_0x33ca90 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ca90) {
            ctx->pc = 0x33CA94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33CA90u;
            // 0x33ca94: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33CD44u;
            goto label_33cd44;
        }
    }
    ctx->pc = 0x33CA98u;
label_33ca98:
    // 0x33ca98: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x33ca98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_33ca9c:
    // 0x33ca9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33ca9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_33caa0:
    // 0x33caa0: 0x8c4237f0  lw          $v0, 0x37F0($v0)
    ctx->pc = 0x33caa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14320)));
label_33caa4:
    // 0x33caa4: 0x400008  jr          $v0
label_33caa8:
    if (ctx->pc == 0x33CAA8u) {
        ctx->pc = 0x33CAACu;
        goto label_33caac;
    }
    ctx->pc = 0x33CAA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33CAA4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x33CAACu;
label_33caac:
    // 0x33caac: 0x0  nop
    ctx->pc = 0x33caacu;
    // NOP
label_33cab0:
    // 0x33cab0: 0x2603003f  addiu       $v1, $s0, 0x3F
    ctx->pc = 0x33cab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 63));
label_33cab4:
    // 0x33cab4: 0x24e2003f  addiu       $v0, $a3, 0x3F
    ctx->pc = 0x33cab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 63));
label_33cab8:
    // 0x33cab8: 0x10000098  b           . + 4 + (0x98 << 2)
label_33cabc:
    if (ctx->pc == 0x33CABCu) {
        ctx->pc = 0x33CABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CAB8u;
        // 0x33cabc: 0x31982  srl         $v1, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CAC0u;
        goto label_33cac0;
    }
    ctx->pc = 0x33CAB8u;
    {
        const bool branch_taken_0x33cab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33CABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CAB8u;
        // 0x33cabc: 0x31982  srl         $v1, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cab8) {
            ctx->pc = 0x33CD1Cu;
            goto label_33cd1c;
        }
    }
    ctx->pc = 0x33CAC0u;
label_33cac0:
    // 0x33cac0: 0x2e020040  sltiu       $v0, $s0, 0x40
    ctx->pc = 0x33cac0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
label_33cac4:
    // 0x33cac4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_33cac8:
    if (ctx->pc == 0x33CAC8u) {
        ctx->pc = 0x33CAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CAC4u;
        // 0x33cac8: 0x2ce20040  sltiu       $v0, $a3, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CACCu;
        goto label_33cacc;
    }
    ctx->pc = 0x33CAC4u;
    {
        const bool branch_taken_0x33cac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33CAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CAC4u;
        // 0x33cac8: 0x2ce20040  sltiu       $v0, $a3, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cac4) {
            ctx->pc = 0x33CB10u;
            goto label_33cb10;
        }
    }
    ctx->pc = 0x33CACCu;
label_33cacc:
    // 0x33cacc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_33cad0:
    if (ctx->pc == 0x33CAD0u) {
        ctx->pc = 0x33CAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CACCu;
        // 0x33cad0: 0x24e2ffff  addiu       $v0, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CAD4u;
        goto label_33cad4;
    }
    ctx->pc = 0x33CACCu;
    {
        const bool branch_taken_0x33cacc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33CAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CACCu;
        // 0x33cad0: 0x24e2ffff  addiu       $v0, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cacc) {
            ctx->pc = 0x33CB10u;
            goto label_33cb10;
        }
    }
    ctx->pc = 0x33CAD4u;
label_33cad4:
    // 0x33cad4: 0x2605ffff  addiu       $a1, $s0, -0x1
    ctx->pc = 0x33cad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_33cad8:
    // 0x33cad8: 0x30460010  andi        $a2, $v0, 0x10
    ctx->pc = 0x33cad8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_33cadc:
    // 0x33cadc: 0x30430008  andi        $v1, $v0, 0x8
    ctx->pc = 0x33cadcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_33cae0:
    // 0x33cae0: 0x30a40020  andi        $a0, $a1, 0x20
    ctx->pc = 0x33cae0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32);
label_33cae4:
    // 0x33cae4: 0x30a50010  andi        $a1, $a1, 0x10
    ctx->pc = 0x33cae4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16);
label_33cae8:
    // 0x33cae8: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x33cae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_33caec:
    // 0x33caec: 0x318c2  srl         $v1, $v1, 3
    ctx->pc = 0x33caecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
label_33caf0:
    // 0x33caf0: 0x42082  srl         $a0, $a0, 2
    ctx->pc = 0x33caf0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 2));
label_33caf4:
    // 0x33caf4: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x33caf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_33caf8:
    // 0x33caf8: 0x63082  srl         $a2, $a2, 2
    ctx->pc = 0x33caf8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
label_33cafc:
    // 0x33cafc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x33cafcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_33cb00:
    // 0x33cb00: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x33cb00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_33cb04:
    // 0x33cb04: 0x10000060  b           . + 4 + (0x60 << 2)
label_33cb08:
    if (ctx->pc == 0x33CB08u) {
        ctx->pc = 0x33CB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CB04u;
        // 0x33cb08: 0x528c2  srl         $a1, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CB0Cu;
        goto label_33cb0c;
    }
    ctx->pc = 0x33CB04u;
    {
        const bool branch_taken_0x33cb04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33CB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CB04u;
        // 0x33cb08: 0x528c2  srl         $a1, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cb04) {
            ctx->pc = 0x33CC88u;
            goto label_33cc88;
        }
    }
    ctx->pc = 0x33CB0Cu;
label_33cb0c:
    // 0x33cb0c: 0x0  nop
    ctx->pc = 0x33cb0cu;
    // NOP
label_33cb10:
    // 0x33cb10: 0x5100008c  beql        $t0, $zero, . + 4 + (0x8C << 2)
label_33cb14:
    if (ctx->pc == 0x33CB14u) {
        ctx->pc = 0x33CB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CB10u;
        // 0x33cb14: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CB18u;
        goto label_33cb18;
    }
    ctx->pc = 0x33CB10u;
    {
        const bool branch_taken_0x33cb10 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x33cb10) {
            ctx->pc = 0x33CB14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33CB10u;
            // 0x33cb14: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33CD44u;
            goto label_33cd44;
        }
    }
    ctx->pc = 0x33CB18u;
label_33cb18:
    // 0x33cb18: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x33cb18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_33cb1c:
    // 0x33cb1c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33cb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_33cb20:
    // 0x33cb20: 0x8c4238e0  lw          $v0, 0x38E0($v0)
    ctx->pc = 0x33cb20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14560)));
label_33cb24:
    // 0x33cb24: 0x400008  jr          $v0
label_33cb28:
    if (ctx->pc == 0x33CB28u) {
        ctx->pc = 0x33CB2Cu;
        goto label_33cb2c;
    }
    ctx->pc = 0x33CB24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33CB24u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x33CB2Cu;
label_33cb2c:
    // 0x33cb2c: 0x0  nop
    ctx->pc = 0x33cb2cu;
    // NOP
label_33cb30:
    // 0x33cb30: 0x2603003f  addiu       $v1, $s0, 0x3F
    ctx->pc = 0x33cb30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 63));
label_33cb34:
    // 0x33cb34: 0x24e2003f  addiu       $v0, $a3, 0x3F
    ctx->pc = 0x33cb34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 63));
label_33cb38:
    // 0x33cb38: 0x10000078  b           . + 4 + (0x78 << 2)
label_33cb3c:
    if (ctx->pc == 0x33CB3Cu) {
        ctx->pc = 0x33CB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CB38u;
        // 0x33cb3c: 0x31982  srl         $v1, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CB40u;
        goto label_33cb40;
    }
    ctx->pc = 0x33CB38u;
    {
        const bool branch_taken_0x33cb38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33CB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CB38u;
        // 0x33cb3c: 0x31982  srl         $v1, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cb38) {
            ctx->pc = 0x33CD1Cu;
            goto label_33cd1c;
        }
    }
    ctx->pc = 0x33CB40u;
label_33cb40:
    // 0x33cb40: 0x2e020040  sltiu       $v0, $s0, 0x40
    ctx->pc = 0x33cb40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
label_33cb44:
    // 0x33cb44: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_33cb48:
    if (ctx->pc == 0x33CB48u) {
        ctx->pc = 0x33CB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CB44u;
        // 0x33cb48: 0x2ce20040  sltiu       $v0, $a3, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CB4Cu;
        goto label_33cb4c;
    }
    ctx->pc = 0x33CB44u;
    {
        const bool branch_taken_0x33cb44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33CB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CB44u;
        // 0x33cb48: 0x2ce20040  sltiu       $v0, $a3, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cb44) {
            ctx->pc = 0x33CB90u;
            goto label_33cb90;
        }
    }
    ctx->pc = 0x33CB4Cu;
label_33cb4c:
    // 0x33cb4c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_33cb50:
    if (ctx->pc == 0x33CB50u) {
        ctx->pc = 0x33CB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CB4Cu;
        // 0x33cb50: 0x24e2ffff  addiu       $v0, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CB54u;
        goto label_33cb54;
    }
    ctx->pc = 0x33CB4Cu;
    {
        const bool branch_taken_0x33cb4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33CB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CB4Cu;
        // 0x33cb50: 0x24e2ffff  addiu       $v0, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cb4c) {
            ctx->pc = 0x33CB90u;
            goto label_33cb90;
        }
    }
    ctx->pc = 0x33CB54u;
label_33cb54:
    // 0x33cb54: 0x2605ffff  addiu       $a1, $s0, -0x1
    ctx->pc = 0x33cb54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_33cb58:
    // 0x33cb58: 0x30460010  andi        $a2, $v0, 0x10
    ctx->pc = 0x33cb58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_33cb5c:
    // 0x33cb5c: 0x30430008  andi        $v1, $v0, 0x8
    ctx->pc = 0x33cb5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_33cb60:
    // 0x33cb60: 0x30a40020  andi        $a0, $a1, 0x20
    ctx->pc = 0x33cb60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32);
label_33cb64:
    // 0x33cb64: 0x30a50010  andi        $a1, $a1, 0x10
    ctx->pc = 0x33cb64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16);
label_33cb68:
    // 0x33cb68: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x33cb68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_33cb6c:
    // 0x33cb6c: 0x318c2  srl         $v1, $v1, 3
    ctx->pc = 0x33cb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
label_33cb70:
    // 0x33cb70: 0x42042  srl         $a0, $a0, 1
    ctx->pc = 0x33cb70u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_33cb74:
    // 0x33cb74: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x33cb74u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
label_33cb78:
    // 0x33cb78: 0x63042  srl         $a2, $a2, 1
    ctx->pc = 0x33cb78u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
label_33cb7c:
    // 0x33cb7c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x33cb7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_33cb80:
    // 0x33cb80: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x33cb80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_33cb84:
    // 0x33cb84: 0x10000040  b           . + 4 + (0x40 << 2)
label_33cb88:
    if (ctx->pc == 0x33CB88u) {
        ctx->pc = 0x33CB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CB84u;
        // 0x33cb88: 0x528c2  srl         $a1, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CB8Cu;
        goto label_33cb8c;
    }
    ctx->pc = 0x33CB84u;
    {
        const bool branch_taken_0x33cb84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33CB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CB84u;
        // 0x33cb88: 0x528c2  srl         $a1, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cb84) {
            ctx->pc = 0x33CC88u;
            goto label_33cc88;
        }
    }
    ctx->pc = 0x33CB8Cu;
label_33cb8c:
    // 0x33cb8c: 0x0  nop
    ctx->pc = 0x33cb8cu;
    // NOP
label_33cb90:
    // 0x33cb90: 0x5100006c  beql        $t0, $zero, . + 4 + (0x6C << 2)
label_33cb94:
    if (ctx->pc == 0x33CB94u) {
        ctx->pc = 0x33CB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CB90u;
        // 0x33cb94: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CB98u;
        goto label_33cb98;
    }
    ctx->pc = 0x33CB90u;
    {
        const bool branch_taken_0x33cb90 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x33cb90) {
            ctx->pc = 0x33CB94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33CB90u;
            // 0x33cb94: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33CD44u;
            goto label_33cd44;
        }
    }
    ctx->pc = 0x33CB98u;
label_33cb98:
    // 0x33cb98: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x33cb98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_33cb9c:
    // 0x33cb9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33cb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_33cba0:
    // 0x33cba0: 0x8c4239d0  lw          $v0, 0x39D0($v0)
    ctx->pc = 0x33cba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14800)));
label_33cba4:
    // 0x33cba4: 0x400008  jr          $v0
label_33cba8:
    if (ctx->pc == 0x33CBA8u) {
        ctx->pc = 0x33CBACu;
        goto label_33cbac;
    }
    ctx->pc = 0x33CBA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33CBA4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x33CBACu;
label_33cbac:
    // 0x33cbac: 0x0  nop
    ctx->pc = 0x33cbacu;
    // NOP
label_33cbb0:
    // 0x33cbb0: 0x2603003f  addiu       $v1, $s0, 0x3F
    ctx->pc = 0x33cbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 63));
label_33cbb4:
    // 0x33cbb4: 0x24e2003f  addiu       $v0, $a3, 0x3F
    ctx->pc = 0x33cbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 63));
label_33cbb8:
    // 0x33cbb8: 0x10000058  b           . + 4 + (0x58 << 2)
label_33cbbc:
    if (ctx->pc == 0x33CBBCu) {
        ctx->pc = 0x33CBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CBB8u;
        // 0x33cbbc: 0x31982  srl         $v1, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CBC0u;
        goto label_33cbc0;
    }
    ctx->pc = 0x33CBB8u;
    {
        const bool branch_taken_0x33cbb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33CBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CBB8u;
        // 0x33cbbc: 0x31982  srl         $v1, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cbb8) {
            ctx->pc = 0x33CD1Cu;
            goto label_33cd1c;
        }
    }
    ctx->pc = 0x33CBC0u;
label_33cbc0:
    // 0x33cbc0: 0x2e020080  sltiu       $v0, $s0, 0x80
    ctx->pc = 0x33cbc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
label_33cbc4:
    // 0x33cbc4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_33cbc8:
    if (ctx->pc == 0x33CBC8u) {
        ctx->pc = 0x33CBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CBC4u;
        // 0x33cbc8: 0x2ce20040  sltiu       $v0, $a3, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CBCCu;
        goto label_33cbcc;
    }
    ctx->pc = 0x33CBC4u;
    {
        const bool branch_taken_0x33cbc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33CBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CBC4u;
        // 0x33cbc8: 0x2ce20040  sltiu       $v0, $a3, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cbc4) {
            ctx->pc = 0x33CC10u;
            goto label_33cc10;
        }
    }
    ctx->pc = 0x33CBCCu;
label_33cbcc:
    // 0x33cbcc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_33cbd0:
    if (ctx->pc == 0x33CBD0u) {
        ctx->pc = 0x33CBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CBCCu;
        // 0x33cbd0: 0x2602ffff  addiu       $v0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CBD4u;
        goto label_33cbd4;
    }
    ctx->pc = 0x33CBCCu;
    {
        const bool branch_taken_0x33cbcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33CBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CBCCu;
        // 0x33cbd0: 0x2602ffff  addiu       $v0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cbcc) {
            ctx->pc = 0x33CC10u;
            goto label_33cc10;
        }
    }
    ctx->pc = 0x33CBD4u;
label_33cbd4:
    // 0x33cbd4: 0x24e5ffff  addiu       $a1, $a3, -0x1
    ctx->pc = 0x33cbd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_33cbd8:
    // 0x33cbd8: 0x30460020  andi        $a2, $v0, 0x20
    ctx->pc = 0x33cbd8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_33cbdc:
    // 0x33cbdc: 0x30430010  andi        $v1, $v0, 0x10
    ctx->pc = 0x33cbdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_33cbe0:
    // 0x33cbe0: 0x30a40020  andi        $a0, $a1, 0x20
    ctx->pc = 0x33cbe0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32);
label_33cbe4:
    // 0x33cbe4: 0x30a50010  andi        $a1, $a1, 0x10
    ctx->pc = 0x33cbe4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16);
label_33cbe8:
    // 0x33cbe8: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x33cbe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_33cbec:
    // 0x33cbec: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x33cbecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
label_33cbf0:
    // 0x33cbf0: 0x42082  srl         $a0, $a0, 2
    ctx->pc = 0x33cbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 2));
label_33cbf4:
    // 0x33cbf4: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x33cbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
label_33cbf8:
    // 0x33cbf8: 0x630c2  srl         $a2, $a2, 3
    ctx->pc = 0x33cbf8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 3));
label_33cbfc:
    // 0x33cbfc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x33cbfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_33cc00:
    // 0x33cc00: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x33cc00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_33cc04:
    // 0x33cc04: 0x10000020  b           . + 4 + (0x20 << 2)
label_33cc08:
    if (ctx->pc == 0x33CC08u) {
        ctx->pc = 0x33CC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CC04u;
        // 0x33cc08: 0x528c2  srl         $a1, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CC0Cu;
        goto label_33cc0c;
    }
    ctx->pc = 0x33CC04u;
    {
        const bool branch_taken_0x33cc04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33CC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CC04u;
        // 0x33cc08: 0x528c2  srl         $a1, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cc04) {
            ctx->pc = 0x33CC88u;
            goto label_33cc88;
        }
    }
    ctx->pc = 0x33CC0Cu;
label_33cc0c:
    // 0x33cc0c: 0x0  nop
    ctx->pc = 0x33cc0cu;
    // NOP
label_33cc10:
    // 0x33cc10: 0x5100004c  beql        $t0, $zero, . + 4 + (0x4C << 2)
label_33cc14:
    if (ctx->pc == 0x33CC14u) {
        ctx->pc = 0x33CC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CC10u;
        // 0x33cc14: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CC18u;
        goto label_33cc18;
    }
    ctx->pc = 0x33CC10u;
    {
        const bool branch_taken_0x33cc10 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x33cc10) {
            ctx->pc = 0x33CC14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33CC10u;
            // 0x33cc14: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33CD44u;
            goto label_33cd44;
        }
    }
    ctx->pc = 0x33CC18u;
label_33cc18:
    // 0x33cc18: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x33cc18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_33cc1c:
    // 0x33cc1c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33cc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_33cc20:
    // 0x33cc20: 0x8c423ac0  lw          $v0, 0x3AC0($v0)
    ctx->pc = 0x33cc20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15040)));
label_33cc24:
    // 0x33cc24: 0x400008  jr          $v0
label_33cc28:
    if (ctx->pc == 0x33CC28u) {
        ctx->pc = 0x33CC2Cu;
        goto label_33cc2c;
    }
    ctx->pc = 0x33CC24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33CC24u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x33CC2Cu;
label_33cc2c:
    // 0x33cc2c: 0x0  nop
    ctx->pc = 0x33cc2cu;
    // NOP
label_33cc30:
    // 0x33cc30: 0x2603003f  addiu       $v1, $s0, 0x3F
    ctx->pc = 0x33cc30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 63));
label_33cc34:
    // 0x33cc34: 0x24e2003f  addiu       $v0, $a3, 0x3F
    ctx->pc = 0x33cc34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 63));
label_33cc38:
    // 0x33cc38: 0x10000038  b           . + 4 + (0x38 << 2)
label_33cc3c:
    if (ctx->pc == 0x33CC3Cu) {
        ctx->pc = 0x33CC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CC38u;
        // 0x33cc3c: 0x31982  srl         $v1, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CC40u;
        goto label_33cc40;
    }
    ctx->pc = 0x33CC38u;
    {
        const bool branch_taken_0x33cc38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33CC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CC38u;
        // 0x33cc3c: 0x31982  srl         $v1, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cc38) {
            ctx->pc = 0x33CD1Cu;
            goto label_33cd1c;
        }
    }
    ctx->pc = 0x33CC40u;
label_33cc40:
    // 0x33cc40: 0x2e020080  sltiu       $v0, $s0, 0x80
    ctx->pc = 0x33cc40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
label_33cc44:
    // 0x33cc44: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_33cc48:
    if (ctx->pc == 0x33CC48u) {
        ctx->pc = 0x33CC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CC44u;
        // 0x33cc48: 0x2ce20080  sltiu       $v0, $a3, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CC4Cu;
        goto label_33cc4c;
    }
    ctx->pc = 0x33CC44u;
    {
        const bool branch_taken_0x33cc44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33CC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CC44u;
        // 0x33cc48: 0x2ce20080  sltiu       $v0, $a3, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cc44) {
            ctx->pc = 0x33CC98u;
            goto label_33cc98;
        }
    }
    ctx->pc = 0x33CC4Cu;
label_33cc4c:
    // 0x33cc4c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_33cc50:
    if (ctx->pc == 0x33CC50u) {
        ctx->pc = 0x33CC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CC4Cu;
        // 0x33cc50: 0x24e2ffff  addiu       $v0, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CC54u;
        goto label_33cc54;
    }
    ctx->pc = 0x33CC4Cu;
    {
        const bool branch_taken_0x33cc4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33CC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CC4Cu;
        // 0x33cc50: 0x24e2ffff  addiu       $v0, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cc4c) {
            ctx->pc = 0x33CC98u;
            goto label_33cc98;
        }
    }
    ctx->pc = 0x33CC54u;
label_33cc54:
    // 0x33cc54: 0x2605ffff  addiu       $a1, $s0, -0x1
    ctx->pc = 0x33cc54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_33cc58:
    // 0x33cc58: 0x30460020  andi        $a2, $v0, 0x20
    ctx->pc = 0x33cc58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_33cc5c:
    // 0x33cc5c: 0x30430010  andi        $v1, $v0, 0x10
    ctx->pc = 0x33cc5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_33cc60:
    // 0x33cc60: 0x30a40040  andi        $a0, $a1, 0x40
    ctx->pc = 0x33cc60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)64);
label_33cc64:
    // 0x33cc64: 0x30a50020  andi        $a1, $a1, 0x20
    ctx->pc = 0x33cc64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32);
label_33cc68:
    // 0x33cc68: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x33cc68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_33cc6c:
    // 0x33cc6c: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x33cc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
label_33cc70:
    // 0x33cc70: 0x420c2  srl         $a0, $a0, 3
    ctx->pc = 0x33cc70u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
label_33cc74:
    // 0x33cc74: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x33cc74u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
label_33cc78:
    // 0x33cc78: 0x630c2  srl         $a2, $a2, 3
    ctx->pc = 0x33cc78u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 3));
label_33cc7c:
    // 0x33cc7c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x33cc7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_33cc80:
    // 0x33cc80: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x33cc80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_33cc84:
    // 0x33cc84: 0x52902  srl         $a1, $a1, 4
    ctx->pc = 0x33cc84u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 4));
label_33cc88:
    // 0x33cc88: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x33cc88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_33cc8c:
    // 0x33cc8c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x33cc8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_33cc90:
    // 0x33cc90: 0x10000030  b           . + 4 + (0x30 << 2)
label_33cc94:
    if (ctx->pc == 0x33CC94u) {
        ctx->pc = 0x33CC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CC90u;
        // 0x33cc94: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CC98u;
        goto label_33cc98;
    }
    ctx->pc = 0x33CC90u;
    {
        const bool branch_taken_0x33cc90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33CC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CC90u;
        // 0x33cc94: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cc90) {
            ctx->pc = 0x33CD54u;
            goto label_33cd54;
        }
    }
    ctx->pc = 0x33CC98u;
label_33cc98:
    // 0x33cc98: 0x5100002a  beql        $t0, $zero, . + 4 + (0x2A << 2)
label_33cc9c:
    if (ctx->pc == 0x33CC9Cu) {
        ctx->pc = 0x33CC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CC98u;
        // 0x33cc9c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CCA0u;
        goto label_33cca0;
    }
    ctx->pc = 0x33CC98u;
    {
        const bool branch_taken_0x33cc98 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x33cc98) {
            ctx->pc = 0x33CC9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33CC98u;
            // 0x33cc9c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33CD44u;
            goto label_33cd44;
        }
    }
    ctx->pc = 0x33CCA0u;
label_33cca0:
    // 0x33cca0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x33cca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_33cca4:
    // 0x33cca4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33cca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_33cca8:
    // 0x33cca8: 0x8c423bb0  lw          $v0, 0x3BB0($v0)
    ctx->pc = 0x33cca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15280)));
label_33ccac:
    // 0x33ccac: 0x400008  jr          $v0
label_33ccb0:
    if (ctx->pc == 0x33CCB0u) {
        ctx->pc = 0x33CCB4u;
        goto label_33ccb4;
    }
    ctx->pc = 0x33CCACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33CCACu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x33CCB4u;
label_33ccb4:
    // 0x33ccb4: 0x0  nop
    ctx->pc = 0x33ccb4u;
    // NOP
label_33ccb8:
    // 0x33ccb8: 0x2603003f  addiu       $v1, $s0, 0x3F
    ctx->pc = 0x33ccb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 63));
label_33ccbc:
    // 0x33ccbc: 0x24e2003f  addiu       $v0, $a3, 0x3F
    ctx->pc = 0x33ccbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 63));
label_33ccc0:
    // 0x33ccc0: 0x10000016  b           . + 4 + (0x16 << 2)
label_33ccc4:
    if (ctx->pc == 0x33CCC4u) {
        ctx->pc = 0x33CCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CCC0u;
        // 0x33ccc4: 0x31982  srl         $v1, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CCC8u;
        goto label_33ccc8;
    }
    ctx->pc = 0x33CCC0u;
    {
        const bool branch_taken_0x33ccc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33CCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CCC0u;
        // 0x33ccc4: 0x31982  srl         $v1, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ccc0) {
            ctx->pc = 0x33CD1Cu;
            goto label_33cd1c;
        }
    }
    ctx->pc = 0x33CCC8u;
label_33ccc8:
    // 0x33ccc8: 0x5100001e  beql        $t0, $zero, . + 4 + (0x1E << 2)
label_33cccc:
    if (ctx->pc == 0x33CCCCu) {
        ctx->pc = 0x33CCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CCC8u;
        // 0x33cccc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CCD0u;
        goto label_33ccd0;
    }
    ctx->pc = 0x33CCC8u;
    {
        const bool branch_taken_0x33ccc8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ccc8) {
            ctx->pc = 0x33CCCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33CCC8u;
            // 0x33cccc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33CD44u;
            goto label_33cd44;
        }
    }
    ctx->pc = 0x33CCD0u;
label_33ccd0:
    // 0x33ccd0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x33ccd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_33ccd4:
    // 0x33ccd4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33ccd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_33ccd8:
    // 0x33ccd8: 0x8c423ca0  lw          $v0, 0x3CA0($v0)
    ctx->pc = 0x33ccd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15520)));
label_33ccdc:
    // 0x33ccdc: 0x400008  jr          $v0
label_33cce0:
    if (ctx->pc == 0x33CCE0u) {
        ctx->pc = 0x33CCE4u;
        goto label_33cce4;
    }
    ctx->pc = 0x33CCDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33CCDCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x33CCE4u;
label_33cce4:
    // 0x33cce4: 0x0  nop
    ctx->pc = 0x33cce4u;
    // NOP
label_33cce8:
    // 0x33cce8: 0x2603003f  addiu       $v1, $s0, 0x3F
    ctx->pc = 0x33cce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 63));
label_33ccec:
    // 0x33ccec: 0x24e2001f  addiu       $v0, $a3, 0x1F
    ctx->pc = 0x33ccecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 31));
label_33ccf0:
    // 0x33ccf0: 0x31982  srl         $v1, $v1, 6
    ctx->pc = 0x33ccf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
label_33ccf4:
    // 0x33ccf4: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x33ccf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
label_33ccf8:
    // 0x33ccf8: 0x10000012  b           . + 4 + (0x12 << 2)
label_33ccfc:
    if (ctx->pc == 0x33CCFCu) {
        ctx->pc = 0x33CCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CCF8u;
        // 0x33ccfc: 0x621818  mult        $v1, $v1, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CD00u;
        goto label_33cd00;
    }
    ctx->pc = 0x33CCF8u;
    {
        const bool branch_taken_0x33ccf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33CCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CCF8u;
        // 0x33ccfc: 0x621818  mult        $v1, $v1, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ccf8) {
            ctx->pc = 0x33CD44u;
            goto label_33cd44;
        }
    }
    ctx->pc = 0x33CD00u;
label_33cd00:
    // 0x33cd00: 0x2603003f  addiu       $v1, $s0, 0x3F
    ctx->pc = 0x33cd00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 63));
label_33cd04:
    // 0x33cd04: 0x24e2003f  addiu       $v0, $a3, 0x3F
    ctx->pc = 0x33cd04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 63));
label_33cd08:
    // 0x33cd08: 0x10000004  b           . + 4 + (0x4 << 2)
label_33cd0c:
    if (ctx->pc == 0x33CD0Cu) {
        ctx->pc = 0x33CD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CD08u;
        // 0x33cd0c: 0x31982  srl         $v1, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CD10u;
        goto label_33cd10;
    }
    ctx->pc = 0x33CD08u;
    {
        const bool branch_taken_0x33cd08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33CD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CD08u;
        // 0x33cd0c: 0x31982  srl         $v1, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cd08) {
            ctx->pc = 0x33CD1Cu;
            goto label_33cd1c;
        }
    }
    ctx->pc = 0x33CD10u;
label_33cd10:
    // 0x33cd10: 0x2603007f  addiu       $v1, $s0, 0x7F
    ctx->pc = 0x33cd10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 127));
label_33cd14:
    // 0x33cd14: 0x24e2003f  addiu       $v0, $a3, 0x3F
    ctx->pc = 0x33cd14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 63));
label_33cd18:
    // 0x33cd18: 0x319c2  srl         $v1, $v1, 7
    ctx->pc = 0x33cd18u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 7));
label_33cd1c:
    // 0x33cd1c: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x33cd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
label_33cd20:
    // 0x33cd20: 0x10000008  b           . + 4 + (0x8 << 2)
label_33cd24:
    if (ctx->pc == 0x33CD24u) {
        ctx->pc = 0x33CD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CD20u;
        // 0x33cd24: 0x621818  mult        $v1, $v1, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CD28u;
        goto label_33cd28;
    }
    ctx->pc = 0x33CD20u;
    {
        const bool branch_taken_0x33cd20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33CD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CD20u;
        // 0x33cd24: 0x621818  mult        $v1, $v1, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cd20) {
            ctx->pc = 0x33CD44u;
            goto label_33cd44;
        }
    }
    ctx->pc = 0x33CD28u;
label_33cd28:
    // 0x33cd28: 0x2603007f  addiu       $v1, $s0, 0x7F
    ctx->pc = 0x33cd28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 127));
label_33cd2c:
    // 0x33cd2c: 0x24e2007f  addiu       $v0, $a3, 0x7F
    ctx->pc = 0x33cd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 127));
label_33cd30:
    // 0x33cd30: 0x319c2  srl         $v1, $v1, 7
    ctx->pc = 0x33cd30u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 7));
label_33cd34:
    // 0x33cd34: 0x211c2  srl         $v0, $v0, 7
    ctx->pc = 0x33cd34u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 7));
label_33cd38:
    // 0x33cd38: 0x10000002  b           . + 4 + (0x2 << 2)
label_33cd3c:
    if (ctx->pc == 0x33CD3Cu) {
        ctx->pc = 0x33CD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CD38u;
        // 0x33cd3c: 0x621818  mult        $v1, $v1, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CD40u;
        goto label_33cd40;
    }
    ctx->pc = 0x33CD38u;
    {
        const bool branch_taken_0x33cd38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33CD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CD38u;
        // 0x33cd3c: 0x621818  mult        $v1, $v1, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cd38) {
            ctx->pc = 0x33CD44u;
            goto label_33cd44;
        }
    }
    ctx->pc = 0x33CD40u;
label_33cd40:
    // 0x33cd40: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x33cd40u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33cd44:
    // 0x33cd44: 0x10000003  b           . + 4 + (0x3 << 2)
label_33cd48:
    if (ctx->pc == 0x33CD48u) {
        ctx->pc = 0x33CD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CD44u;
        // 0x33cd48: 0x31940  sll         $v1, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CD4Cu;
        goto label_33cd4c;
    }
    ctx->pc = 0x33CD44u;
    {
        const bool branch_taken_0x33cd44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33CD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CD44u;
        // 0x33cd48: 0x31940  sll         $v1, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cd44) {
            ctx->pc = 0x33CD54u;
            goto label_33cd54;
        }
    }
    ctx->pc = 0x33CD4Cu;
label_33cd4c:
    // 0x33cd4c: 0x0  nop
    ctx->pc = 0x33cd4cu;
    // NOP
label_33cd50:
    // 0x33cd50: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x33cd50u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33cd54:
    // 0x33cd54: 0xa6230012  sh          $v1, 0x12($s1)
    ctx->pc = 0x33cd54u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 3));
label_33cd58:
    // 0x33cd58: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x33cd58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33cd5c:
    // 0x33cd5c: 0x1100001a  beqz        $t0, . + 4 + (0x1A << 2)
label_33cd60:
    if (ctx->pc == 0x33CD60u) {
        ctx->pc = 0x33CD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CD5Cu;
        // 0x33cd60: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CD64u;
        goto label_33cd64;
    }
    ctx->pc = 0x33CD5Cu;
    {
        const bool branch_taken_0x33cd5c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x33CD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CD5Cu;
        // 0x33cd60: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cd5c) {
            ctx->pc = 0x33CDC8u;
            goto label_33cdc8;
        }
    }
    ctx->pc = 0x33CD64u;
label_33cd64:
    // 0x33cd64: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x33cd64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_33cd68:
    // 0x33cd68: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x33cd68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_33cd6c:
    // 0x33cd6c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x33cd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_33cd70:
    // 0x33cd70: 0x8c633d90  lw          $v1, 0x3D90($v1)
    ctx->pc = 0x33cd70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15760)));
label_33cd74:
    // 0x33cd74: 0x600008  jr          $v1
label_33cd78:
    if (ctx->pc == 0x33CD78u) {
        ctx->pc = 0x33CD7Cu;
        goto label_33cd7c;
    }
    ctx->pc = 0x33CD74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33CD74u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x33CD7Cu;
label_33cd7c:
    // 0x33cd7c: 0x0  nop
    ctx->pc = 0x33cd7cu;
    // NOP
label_33cd80:
    // 0x33cd80: 0xa41018  mult        $v0, $a1, $a0
    ctx->pc = 0x33cd80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_33cd84:
    // 0x33cd84: 0x10000011  b           . + 4 + (0x11 << 2)
label_33cd88:
    if (ctx->pc == 0x33CD88u) {
        ctx->pc = 0x33CD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CD84u;
        // 0x33cd88: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CD8Cu;
        goto label_33cd8c;
    }
    ctx->pc = 0x33CD84u;
    {
        const bool branch_taken_0x33cd84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33CD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CD84u;
        // 0x33cd88: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cd84) {
            ctx->pc = 0x33CDCCu;
            goto label_33cdcc;
        }
    }
    ctx->pc = 0x33CD8Cu;
label_33cd8c:
    // 0x33cd8c: 0x0  nop
    ctx->pc = 0x33cd8cu;
    // NOP
label_33cd90:
    // 0x33cd90: 0xa41818  mult        $v1, $a1, $a0
    ctx->pc = 0x33cd90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_33cd94:
    // 0x33cd94: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x33cd94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_33cd98:
    // 0x33cd98: 0x1000000c  b           . + 4 + (0xC << 2)
label_33cd9c:
    if (ctx->pc == 0x33CD9Cu) {
        ctx->pc = 0x33CD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CD98u;
        // 0x33cd9c: 0x431821  addu        $v1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CDA0u;
        goto label_33cda0;
    }
    ctx->pc = 0x33CD98u;
    {
        const bool branch_taken_0x33cd98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33CD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CD98u;
        // 0x33cd9c: 0x431821  addu        $v1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cd98) {
            ctx->pc = 0x33CDCCu;
            goto label_33cdcc;
        }
    }
    ctx->pc = 0x33CDA0u;
label_33cda0:
    // 0x33cda0: 0xa41018  mult        $v0, $a1, $a0
    ctx->pc = 0x33cda0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_33cda4:
    // 0x33cda4: 0x10000009  b           . + 4 + (0x9 << 2)
label_33cda8:
    if (ctx->pc == 0x33CDA8u) {
        ctx->pc = 0x33CDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CDA4u;
        // 0x33cda8: 0x21840  sll         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CDACu;
        goto label_33cdac;
    }
    ctx->pc = 0x33CDA4u;
    {
        const bool branch_taken_0x33cda4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33CDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CDA4u;
        // 0x33cda8: 0x21840  sll         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cda4) {
            ctx->pc = 0x33CDCCu;
            goto label_33cdcc;
        }
    }
    ctx->pc = 0x33CDACu;
label_33cdac:
    // 0x33cdac: 0x0  nop
    ctx->pc = 0x33cdacu;
    // NOP
label_33cdb0:
    // 0x33cdb0: 0x10000006  b           . + 4 + (0x6 << 2)
label_33cdb4:
    if (ctx->pc == 0x33CDB4u) {
        ctx->pc = 0x33CDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CDB0u;
        // 0x33cdb4: 0xa41818  mult        $v1, $a1, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CDB8u;
        goto label_33cdb8;
    }
    ctx->pc = 0x33CDB0u;
    {
        const bool branch_taken_0x33cdb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33CDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CDB0u;
        // 0x33cdb4: 0xa41818  mult        $v1, $a1, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cdb0) {
            ctx->pc = 0x33CDCCu;
            goto label_33cdcc;
        }
    }
    ctx->pc = 0x33CDB8u;
label_33cdb8:
    // 0x33cdb8: 0xa41018  mult        $v0, $a1, $a0
    ctx->pc = 0x33cdb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_33cdbc:
    // 0x33cdbc: 0x10000003  b           . + 4 + (0x3 << 2)
label_33cdc0:
    if (ctx->pc == 0x33CDC0u) {
        ctx->pc = 0x33CDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CDBCu;
        // 0x33cdc0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CDC4u;
        goto label_33cdc4;
    }
    ctx->pc = 0x33CDBCu;
    {
        const bool branch_taken_0x33cdbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33CDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CDBCu;
        // 0x33cdc0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cdbc) {
            ctx->pc = 0x33CDCCu;
            goto label_33cdcc;
        }
    }
    ctx->pc = 0x33CDC4u;
label_33cdc4:
    // 0x33cdc4: 0x0  nop
    ctx->pc = 0x33cdc4u;
    // NOP
label_33cdc8:
    // 0x33cdc8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x33cdc8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33cdcc:
    // 0x33cdcc: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x33cdccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_33cdd0:
    // 0x33cdd0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x33cdd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_33cdd4:
    // 0x33cdd4: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x33cdd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
label_33cdd8:
    // 0x33cdd8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x33cdd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33cddc:
    // 0x33cddc: 0x24420038  addiu       $v0, $v0, 0x38
    ctx->pc = 0x33cddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
label_33cde0:
    // 0x33cde0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x33cde0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_33cde4:
    // 0x33cde4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x33cde4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_33cde8:
    // 0x33cde8: 0x60f809  jalr        $v1
label_33cdec:
    if (ctx->pc == 0x33CDECu) {
        ctx->pc = 0x33CDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CDE8u;
        // 0x33cdec: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CDF0u;
        goto label_33cdf0;
    }
    ctx->pc = 0x33CDE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33CDF0u);
        ctx->pc = 0x33CDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CDE8u;
        // 0x33cdec: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33CDE8u, 0x33CDF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33CDF0u;
label_33cdf0:
    // 0x33cdf0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33cdf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33cdf4:
    // 0x33cdf4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x33cdf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_33cdf8:
    // 0x33cdf8: 0xc0cf39c  jal         func_33CE70
label_33cdfc:
    if (ctx->pc == 0x33CDFCu) {
        ctx->pc = 0x33CDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CDF8u;
        // 0x33cdfc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CE00u;
        goto label_33ce00;
    }
    ctx->pc = 0x33CDF8u;
    SET_GPR_U32(ctx, 31, 0x33CE00u);
    ctx->pc = 0x33CDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CDF8u;
    // 0x33cdfc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33CE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33CE70u, 0x33CDF8u, 0x33CE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CE00u;
label_33ce00:
    // 0x33ce00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33ce00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33ce04:
    // 0x33ce04: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33ce04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_33ce08:
    // 0x33ce08: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x33ce08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_33ce0c:
    // 0x33ce0c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x33ce0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_33ce10:
    // 0x33ce10: 0x3e00008  jr          $ra
label_33ce14:
    if (ctx->pc == 0x33CE14u) {
        ctx->pc = 0x33CE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CE10u;
        // 0x33ce14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CE18u;
        goto label_33ce18;
    }
    ctx->pc = 0x33CE10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33CE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CE10u;
        // 0x33ce14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33CE10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33CE18u;
label_33ce18:
    // 0x33ce18: 0x90820016  lbu         $v0, 0x16($a0)
    ctx->pc = 0x33ce18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 22)));
label_33ce1c:
    // 0x33ce1c: 0x3e00008  jr          $ra
label_33ce20:
    if (ctx->pc == 0x33CE20u) {
        ctx->pc = 0x33CE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CE1Cu;
        // 0x33ce20: 0x213b8  dsll        $v0, $v0, 14 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CE24u;
        goto label_33ce24;
    }
    ctx->pc = 0x33CE1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33CE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CE1Cu;
        // 0x33ce20: 0x213b8  dsll        $v0, $v0, 14 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33CE1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33CE24u;
label_33ce24:
    // 0x33ce24: 0x0  nop
    ctx->pc = 0x33ce24u;
    // NOP
label_33ce28:
    // 0x33ce28: 0x90820016  lbu         $v0, 0x16($a0)
    ctx->pc = 0x33ce28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 22)));
label_33ce2c:
    // 0x33ce2c: 0x3e00008  jr          $ra
label_33ce30:
    if (ctx->pc == 0x33CE30u) {
        ctx->pc = 0x33CE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CE2Cu;
        // 0x33ce30: 0x210bc  dsll32      $v0, $v0, 2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CE34u;
        goto label_33ce34;
    }
    ctx->pc = 0x33CE2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33CE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CE2Cu;
        // 0x33ce30: 0x210bc  dsll32      $v0, $v0, 2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33CE2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33CE34u;
label_33ce34:
    // 0x33ce34: 0x0  nop
    ctx->pc = 0x33ce34u;
    // NOP
label_33ce38:
    // 0x33ce38: 0x90820016  lbu         $v0, 0x16($a0)
    ctx->pc = 0x33ce38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 22)));
label_33ce3c:
    // 0x33ce3c: 0x3e00008  jr          $ra
label_33ce40:
    if (ctx->pc == 0x33CE40u) {
        ctx->pc = 0x33CE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CE3Cu;
        // 0x33ce40: 0x215bc  dsll32      $v0, $v0, 22 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CE44u;
        goto label_33ce44;
    }
    ctx->pc = 0x33CE3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33CE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CE3Cu;
        // 0x33ce40: 0x215bc  dsll32      $v0, $v0, 22 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 22));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33CE3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33CE44u;
label_33ce44:
    // 0x33ce44: 0x0  nop
    ctx->pc = 0x33ce44u;
    // NOP
    ctx->pc = 0x33ce48u;
}
